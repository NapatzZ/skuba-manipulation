#include <cstdio>
#include <memory>
#include <string>
#include <chrono>
#include <thread>

#include "dynamixel_sdk/dynamixel_sdk.h"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"
#include "skuba_msgs/msg/arm_state.hpp"
#include "skuba_msgs/srv/arm_command.hpp"

#define ADDR_TORQUE_ENABLE 24
#define ADDR_GOAL_POSITION 30
#define ADDR_PRESENT_POSITION 36
#define ADDR_TEMPERATURE_LIMIT 11
#define ADDR_SPEED_LIMIT 32

#define PROTOCOL_VERSION 1.0

#define BAUDRATE 1000000
#define DEVICE_NAME "/dev/ttyUSB0"

#define BROADCAST_ID 0xFE

// Conversion factor: 1 tick = 0.293 degrees
#define DEGREES_TO_TICKS(degrees) ((uint16_t)((degrees) / 0.293))

using namespace std::chrono_literals;

class DynamixelControl : public rclcpp::Node
{
public:
    DynamixelControl() : Node("dynamixel_control")
    {
        portHandler = dynamixel::PortHandler::getPortHandler(DEVICE_NAME);
        packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);
        
        // Try to open port multiple times
        int retry_count = 0;
        while (!portHandler->openPort() && retry_count < 5) {
            RCLCPP_WARN(this->get_logger(), "Failed to open port, retrying... (%d/5)", retry_count + 1);
            std::this_thread::sleep_for(std::chrono::seconds(1));
            retry_count++;
        }

        if (!portHandler->openPort()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to open the port after 5 attempts!");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Succeeded to open the port.");

        // Set the baudrate
        if (!portHandler->setBaudRate(BAUDRATE)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set the baudrate!");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Succeeded to set the baudrate.");

        // Try to ping motor to check connection
        uint8_t dxl_error = 0;
        uint16_t model_number = 0;
        
        // Ping with retry
        retry_count = 0;
        while (retry_count < 5) {
            dxl_comm_result = packetHandler->ping(portHandler, 1, &model_number, &dxl_error);
            if (dxl_comm_result == COMM_SUCCESS && dxl_error == 0) {
                RCLCPP_INFO(this->get_logger(), "Successfully pinged motor. Model Number: %d", model_number);
                break;
            }
            RCLCPP_WARN(this->get_logger(), "Failed to ping motor, retrying... (%d/5)", retry_count + 1);
            std::this_thread::sleep_for(std::chrono::seconds(1));
            retry_count++;
        }

        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to ping motor: %s", 
                dxl_comm_result != COMM_SUCCESS ? 
                packetHandler->getTxRxResult(dxl_comm_result) : 
                packetHandler->getRxPacketError(dxl_error));
            return;
        }

        // Setup motor
        setupDynamixel(1);

        // Initialize service server
        service_ = this->create_service<skuba_msgs::srv::ArmCommand>(
            "arm_command",
            std::bind(&DynamixelControl::handle_command, this, std::placeholders::_1, std::placeholders::_2));

        // Initialize publisher
        publisher_ = this->create_publisher<skuba_msgs::msg::ArmState>("arm_state", 10);

        // Initialize timer for publishing state
        timer_ = this->create_wall_timer(
            100ms, std::bind(&DynamixelControl::publish_state, this));

        RCLCPP_INFO(this->get_logger(), "DynamixelControl is ready.");
    }

    ~DynamixelControl() {
        // Disable torque
        uint8_t dxl_error = 0;
        packetHandler->write1ByteTxRx(
            portHandler,
            1,
            ADDR_TORQUE_ENABLE,
            0,
            &dxl_error
        );
        portHandler->closePort();
        RCLCPP_INFO(this->get_logger(), "Port closed and torque disabled.");
    }

private:
    dynamixel::PortHandler *portHandler;
    dynamixel::PacketHandler *packetHandler;
    uint8_t dxl_error = 0;
    int dxl_comm_result = COMM_TX_FAIL;
    rclcpp::Service<skuba_msgs::srv::ArmCommand>::SharedPtr service_;
    rclcpp::Publisher<skuba_msgs::msg::ArmState>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;

    bool moveTo(uint8_t id, uint16_t position) {
        // Try to move with retry
        int retry_count = 0;
        while (retry_count < 3) {
            dxl_comm_result = packetHandler->write2ByteTxRx(
                portHandler,
                id,
                ADDR_GOAL_POSITION,
                position,
                &dxl_error);

            if (dxl_comm_result == COMM_SUCCESS && dxl_error == 0) {
                RCLCPP_INFO(this->get_logger(), "Set [ID: %d] [Goal Position: %d]", id, position);
                return true;
            }

            RCLCPP_WARN(this->get_logger(), "Failed to move motor, retrying... (%d/3)", retry_count + 1);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            retry_count++;
        }

        if (dxl_comm_result != COMM_SUCCESS) 
            RCLCPP_ERROR(this->get_logger(), "Failed to move motor: %s", packetHandler->getTxRxResult(dxl_comm_result));
        else if (dxl_error != 0) 
            RCLCPP_ERROR(this->get_logger(), "Failed to move motor: %s", packetHandler->getRxPacketError(dxl_error));
        
        return false;
    }

    bool setupDynamixel(uint8_t dxl_id) {
        // Set the Temperature Limit to 60
        dxl_comm_result = packetHandler->write1ByteTxRx(
            portHandler,
            dxl_id,
            ADDR_TEMPERATURE_LIMIT,
            60,
            &dxl_error);

        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set Temperature Limit.");
            return false;
        }
        RCLCPP_INFO(this->get_logger(), "Succeeded to set Temperature Limit to 60.");
        
        // Enable Torque of DYNAMIXEL
        dxl_comm_result = packetHandler->write1ByteTxRx(
            portHandler,
            dxl_id,
            ADDR_TORQUE_ENABLE,
            1,
            &dxl_error);

        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to enable torque.");
            return false;
        }
        RCLCPP_INFO(this->get_logger(), "Succeeded to enable torque.");
        
        // Set speed
        dxl_comm_result = packetHandler->write2ByteTxRx(
            portHandler,
            dxl_id,
            ADDR_SPEED_LIMIT,
            70,
            &dxl_error);
        
        if (dxl_comm_result != COMM_SUCCESS || dxl_error != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to set speed.");
            return false;
        }
        RCLCPP_INFO(this->get_logger(), "Succeeded to set speed.");

        return true;
    }

    void handle_command(
        const std::shared_ptr<skuba_msgs::srv::ArmCommand::Request> request,
        std::shared_ptr<skuba_msgs::srv::ArmCommand::Response> response)
    {
        // Handle different command types
        if (request->command_type == "position")
        {
            // Handle position command
            response->success = true;
            response->message = "Position command received";
        }
        else if (request->command_type == "velocity")
        {
            // Handle velocity command
            response->success = true;
            response->message = "Velocity command received";
        }
        else if (request->command_type == "home")
        {
            // Handle home command
            response->success = true;
            response->message = "Home command received";
        }
        else if (request->command_type == "stop")
        {
            // Handle stop command
            response->success = true;
            response->message = "Stop command received";
        }
        else
        {
            response->success = false;
            response->message = "Unknown command type";
        }
    }

    void publish_state()
    {
        auto message = skuba_msgs::msg::ArmState();
        // TODO: Fill in actual state values from Dynamixel
        message.positions = {0.0, 0.0, 0.0};
        message.velocities = {0.0, 0.0, 0.0};
        message.efforts = {0.0, 0.0, 0.0};
        message.gripper_left_position = 0.0;
        message.gripper_right_position = 0.0;
        message.is_moving = false;
        message.is_error = false;
        message.error_message = "";

        publisher_->publish(message);
    }
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DynamixelControl>());
    rclcpp::shutdown();
    return 0;
}