/* 
 * Arm Controller Node
 * 
 * This node controls the robotic arm using Dynamixel motors.
 * It subscribes to trajectory messages and executes them.
 */

#include <memory>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

#include "rclcpp/rclcpp.hpp"
#include "moveit_msgs/msg/display_trajectory.hpp"
#include "skuba_msgs/srv/arm_trajectory.hpp"
#include "dynamixel_sdk/dynamixel_sdk.h"

using namespace std::chrono_literals;

class ArmController : public rclcpp::Node
{
public:
    ArmController() : Node("arm_controller")
    {
        /* Initialize Dynamixel */
        portHandler = dynamixel::PortHandler::getPortHandler(DEVICE_NAME);
        packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);
        
        if (!initializeDynamixel()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to initialize Dynamixel");
            return;
        }

        /* Create service server */
        service_ = this->create_service<skuba_msgs::srv::ArmTrajectory>(
            "arm_trajectory",
            std::bind(&ArmController::handle_trajectory, this, 
                     std::placeholders::_1, std::placeholders::_2));

        /* Create subscriber for planned path */
        subscriber_ = this->create_subscription<moveit_msgs::msg::DisplayTrajectory>(
            "/display_planned_path", 10,
            std::bind(&ArmController::trajectory_callback, this, std::placeholders::_1));

        RCLCPP_INFO(this->get_logger(), "ArmController is ready.");
    }

    ~ArmController()
    {
        /* Disable torque and close port */
        for (int id : MOTOR_IDS) {
            packetHandler->write1ByteTxRx(portHandler, id, ADDR_TORQUE_ENABLE, 0);
        }
        portHandler->closePort();
    }

private:
    /* Dynamixel constants */
    static constexpr const char* DEVICE_NAME = "/dev/ttyUSB0";
    static constexpr float PROTOCOL_VERSION = 1.0;
    static constexpr int BAUDRATE = 1000000;
    static constexpr std::array<int, 3> MOTOR_IDS = {1, 2, 3};
    
    static constexpr int ADDR_TORQUE_ENABLE = 24;
    static constexpr int ADDR_GOAL_POSITION = 30;
    static constexpr int ADDR_PRESENT_POSITION = 36;
    static constexpr int ADDR_MOVING_SPEED = 32;
    static constexpr int ADDR_TEMPERATURE_LIMIT = 11;

    /* Dynamixel handlers */
    dynamixel::PortHandler *portHandler;
    dynamixel::PacketHandler *packetHandler;
    uint8_t dxl_error = 0;
    int dxl_comm_result = COMM_TX_FAIL;

    /* ROS2 components */
    rclcpp::Service<skuba_msgs::srv::ArmTrajectory>::SharedPtr service_;
    rclcpp::Subscription<moveit_msgs::msg::DisplayTrajectory>::SharedPtr subscriber_;

    bool initializeDynamixel()
    {
        /* Open port */
        if (!portHandler->openPort()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open port");
            return false;
        }

        /* Set baudrate */
        if (!portHandler->setBaudRate(BAUDRATE)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set baudrate");
            return false;
        }

        /* Enable torque for all motors */
        for (int id : MOTOR_IDS) {
            if (!setupDynamixel(id)) {
                return false;
            }
        }

        return true;
    }

    bool setupDynamixel(int id)
    {
        /* Enable torque */
        dxl_comm_result = packetHandler->write1ByteTxRx(
            portHandler, id, ADDR_TORQUE_ENABLE, 1, &dxl_error);
        
        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to enable torque for motor %d", id);
            return false;
        }

        /* Set temperature limit */
        dxl_comm_result = packetHandler->write1ByteTxRx(
            portHandler, id, ADDR_TEMPERATURE_LIMIT, 60, &dxl_error);
        
        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set temperature limit for motor %d", id);
            return false;
        }

        return true;
    }

    void handle_trajectory(
        const std::shared_ptr<skuba_msgs::srv::ArmTrajectory::Request> request,
        std::shared_ptr<skuba_msgs::srv::ArmTrajectory::Response> response)
    {
        /* Convert positions to Dynamixel ticks and move motors */
        for (size_t i = 0; i < request->positions.size(); ++i) {
            int id = MOTOR_IDS[i];
            float position = request->positions[i];
            uint16_t goal_position = static_cast<uint16_t>(position * 1024 / M_PI); /* Convert radian to ticks */
            
            dxl_comm_result = packetHandler->write2ByteTxRx(
                portHandler, id, ADDR_GOAL_POSITION, goal_position, &dxl_error);
            
            if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
                response->success = false;
                response->message = "Failed to move motor " + std::to_string(id);
                return;
            }
        }

        response->success = true;
        response->message = "Trajectory executed successfully";
    }

    void trajectory_callback(const moveit_msgs::msg::DisplayTrajectory::SharedPtr msg)
    {
        if (msg->trajectory.empty()) {
            return;
        }

        const auto& trajectory = msg->trajectory[0].joint_trajectory;
        
        /* Process each point in the trajectory */
        for (const auto& point : trajectory.points) {
            /* Convert positions to Dynamixel ticks and move motors */
            for (size_t i = 0; i < point.positions.size(); ++i) {
                int id = MOTOR_IDS[i];
                float position = point.positions[i];
                uint16_t goal_position = static_cast<uint16_t>(position * 1024 / M_PI); /* Convert radian to ticks */
                
                dxl_comm_result = packetHandler->write2ByteTxRx(
                    portHandler, id, ADDR_GOAL_POSITION, goal_position, &dxl_error);
                
                if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
                    RCLCPP_ERROR(this->get_logger(), "Failed to move motor %d", id);
                    return;
                }
            }

            /* Wait for the specified time */
            std::this_thread::sleep_for(
                std::chrono::duration_cast<std::chrono::milliseconds>(
                    rclcpp::Duration(point.time_from_start).to_chrono<std::chrono::milliseconds>()
                )
            );
        }
    }
};

int main(int argc, char* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ArmController>());
    rclcpp::shutdown();
    return 0;
} 