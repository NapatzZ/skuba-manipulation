#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <trajectory_msgs/msg/joint_trajectory.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>
#include <std_msgs/msg/string.hpp>
#include <dynamixel_sdk/dynamixel_sdk.h>

// Dynamixel constants
#define ADDR_TORQUE_ENABLE 24
#define ADDR_GOAL_POSITION 30
#define ADDR_PRESENT_POSITION 36
#define ADDR_TEMPERATURE_LIMIT 11
#define ADDR_SPEED_LIMIT 32

#define PROTOCOL_VERSION 1.0
#define BAUDRATE 1000000
#define DEVICE_NAME "/dev/ttyUSB0"

// Define broadcast ID as in dynamixelControl.cpp
#define BROADCAST_ID 0xFE

// MX series specific constants
#define MX_RESOLUTION 4096
#define MX_DEGREES_PER_TICK 0.0879  // 360/4096 degrees per tick
#define MX_START_ANGLE 180.0  // เริ่มที่ 180 องศา
#define HOME_POSITION 2048    // Home position (center position)

// Conversion functions for MX series
#define RADIANS_TO_MX_TICKS(radians) ((uint16_t)(((radians * 180.0 / M_PI) + MX_START_ANGLE) / MX_DEGREES_PER_TICK))

// ROS constants
#define TRAJECTORY_TOPIC "/display_planned_path"
#define QUEUE_SIZE 10

class ArmController : public rclcpp::Node
{
public:
  ArmController() : Node("arm_controller")
  {
    // Initialize Dynamixel SDK
    portHandler_ = dynamixel::PortHandler::getPortHandler(DEVICE_NAME);
    packetHandler_ = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);

    // Open port
    if (!portHandler_->openPort())
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to open port %s", DEVICE_NAME);
      return;
    }
    RCLCPP_INFO(this->get_logger(), "Successfully opened port %s", DEVICE_NAME);

    // Set baudrate
    if (!portHandler_->setBaudRate(BAUDRATE))
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to set baudrate %d", BAUDRATE);
      return;
    }
    RCLCPP_INFO(this->get_logger(), "Successfully set baudrate %d", BAUDRATE);

    // Use broadcast ID to enable torque for all motors at once
    uint8_t dxl_error = 0;
    int dxl_comm_result = packetHandler_->write1ByteTxRx(
      portHandler_,
      BROADCAST_ID,
      ADDR_TORQUE_ENABLE,
      1,
      &dxl_error);

    if (dxl_comm_result != COMM_SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to enable torque for all motors: %s", 
        packetHandler_->getTxRxResult(dxl_comm_result));
    }
    else if (dxl_error != 0)
    {
      RCLCPP_ERROR(this->get_logger(), "Error enabling torque for all motors: %s", 
        packetHandler_->getRxPacketError(dxl_error));
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "Successfully enabled torque for all motors");
    }

    // Use broadcast ID to set speed for all motors at once
    dxl_error = 0;
    dxl_comm_result = packetHandler_->write2ByteTxRx(
      portHandler_,
      BROADCAST_ID,
      ADDR_SPEED_LIMIT,
      30,
      &dxl_error);

    if (dxl_comm_result != COMM_SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Failed to set speed for all motors: %s", 
        packetHandler_->getTxRxResult(dxl_comm_result));
    }
    else if (dxl_error != 0)
    {
      RCLCPP_ERROR(this->get_logger(), "Error setting speed for all motors: %s", 
        packetHandler_->getRxPacketError(dxl_error));
    }
    else
    {
      RCLCPP_INFO(this->get_logger(), "Successfully set speed for all motors to 30");
    }

    // Move motors 0-2 to home position (2048)
    moveToHomePosition();

    // Create subscriber for planned trajectory
    trajectory_sub_ = this->create_subscription<moveit_msgs::msg::DisplayTrajectory>(
      TRAJECTORY_TOPIC, QUEUE_SIZE,
      std::bind(&ArmController::trajectoryCallback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "Arm controller initialized");
  }

  ~ArmController()
  {
    // Disable torque for all motors using broadcast ID
    uint8_t dxl_error = 0;
    packetHandler_->write1ByteTxRx(
      portHandler_,
      BROADCAST_ID,
      ADDR_TORQUE_ENABLE,
      0,
      &dxl_error);
    
    // Close port
    portHandler_->closePort();
  }

private:
  // Method to move motors 0-2 to home position
  void moveToHomePosition()
  {
    RCLCPP_INFO(this->get_logger(), "Moving all motors to home position (2048)");
    
    for (int i = 0; i < 3; i++) {
      uint8_t dxl_error = 0;
      int dxl_comm_result = packetHandler_->write2ByteTxRx(
        portHandler_,
        i,
        ADDR_GOAL_POSITION,
        HOME_POSITION,
        &dxl_error);
      
      if (dxl_comm_result != COMM_SUCCESS)
      {
        RCLCPP_ERROR(this->get_logger(), "Failed to move motor %d to home position: %s", 
          i, packetHandler_->getTxRxResult(dxl_comm_result));
      }
      else if (dxl_error != 0)
      {
        RCLCPP_ERROR(this->get_logger(), "Error moving motor %d to home position: %s", 
          i, packetHandler_->getRxPacketError(dxl_error));
      }
      else
      {
        RCLCPP_INFO(this->get_logger(), "Successfully moved motor %d to home position", i);
      }
    }
    
    // Give motors time to reach position
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    RCLCPP_INFO(this->get_logger(), "Home position movement completed");
  }

  void trajectoryCallback(const moveit_msgs::msg::DisplayTrajectory::SharedPtr msg)
  {
    if (msg->trajectory.empty())
    {
      RCLCPP_WARN(this->get_logger(), "Received empty trajectory");
      return;
    }

    // Get the first trajectory
    const auto& joint_trajectory = msg->trajectory[0].joint_trajectory;

    // Process each point in the trajectory
    for (const auto& point : joint_trajectory.points)
    {
      // Move each joint to its target position
      // Note: We can't use broadcast ID here as each motor needs its own position
      for (size_t i = 0; i < point.positions.size(); ++i)
      {
        // Convert position to Dynamixel MX value
        double angle_degrees = point.positions[i] * 180.0 / M_PI;
        uint16_t goal_position = static_cast<uint16_t>((angle_degrees + MX_START_ANGLE) / MX_DEGREES_PER_TICK);
        
        // Ensure position is within valid range
        if (goal_position >= MX_RESOLUTION) {
          RCLCPP_ERROR(this->get_logger(), "Invalid position %d for motor %zu (max: %d, angle: %.2f degrees)", 
            goal_position, i, MX_RESOLUTION - 1, angle_degrees);
          continue;
        }
        
        RCLCPP_INFO(this->get_logger(), "Moving motor %zu to position %d (angle: %.2f degrees)", 
          i, goal_position, angle_degrees);
        
        // Write goal position to Dynamixel
        uint8_t dxl_error = 0;
        int dxl_comm_result = packetHandler_->write2ByteTxRx(
          portHandler_,
          i, 
          ADDR_GOAL_POSITION,
          goal_position,
          &dxl_error);

        if (dxl_comm_result != COMM_SUCCESS)
        {
          RCLCPP_ERROR(this->get_logger(), "Failed to write to Dynamixel %zu: %s", 
            i, packetHandler_->getTxRxResult(dxl_comm_result));
          // Try to ping the motor to check connection
          uint16_t model_number = 0;
          dxl_comm_result = packetHandler_->ping(portHandler_, i, &model_number, &dxl_error);
          if (dxl_comm_result == COMM_SUCCESS && dxl_error == 0) {
            RCLCPP_INFO(this->get_logger(), "Motor %zu is alive, model number: %d", i, model_number);
          } else {
            RCLCPP_ERROR(this->get_logger(), "Cannot ping motor %zu", i);
          }
        }
        else if (dxl_error != 0)
        {
          RCLCPP_ERROR(this->get_logger(), "Dynamixel %zu error: %s", 
            i, packetHandler_->getRxPacketError(dxl_error));
        }
        else
        {
          RCLCPP_INFO(this->get_logger(), "Successfully moved motor %zu to position %d", 
            i, goal_position);
        }
      }

      // Wait time commented out as in your provided code
      // rclcpp::sleep_for(std::chrono::nanoseconds(
      //   static_cast<int64_t>(point.time_from_start.sec * 1e9 + point.time_from_start.nanosec)));
    }
  }

  dynamixel::PortHandler *portHandler_;
  dynamixel::PacketHandler *packetHandler_;
  rclcpp::Subscription<moveit_msgs::msg::DisplayTrajectory>::SharedPtr trajectory_sub_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ArmController>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}