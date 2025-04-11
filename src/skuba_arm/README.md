# SKUBA Arm Package

This package provides low-level control for the SKUBA robotic arm using Dynamixel motors.

## Nodes

### Dynamixel Control (`dynamixelControl`)
Provides direct control of Dynamixel motors.

#### Features
- Controls Dynamixel motors
- Provides service interface for motor control
- Monitors motor status and temperature

#### Usage
```bash
ros2 run skuba_arm dynamixelControl
```

#### Services
- Name: `/arm_command`
- Type: `skuba_msgs/srv/ArmCommand`
- Request:
  - `command_type`: Type of command ("position", "velocity", "home", "stop")
  - `positions`: Target joint positions in radians
  - `velocities`: Target joint velocities in radians/second
- Response:
  - `success`: Command execution status
  - `message`: Status message

#### Topics
- Publishes: `/arm_state` (skuba_msgs/msg/ArmState)
  - Current state of the robotic arm

## Configuration

### Dynamixel Configuration
- Device: `/dev/ttyUSB0`
- Baudrate: 1000000
- Protocol: 1.0
- Motor IDs: [1, 2, 3]

### Motor Parameters
- Position range: 0-1023 (0-2π radians)
- Temperature limit: 60°C
- Moving speed: Configurable

## Dependencies
- rclcpp
- std_msgs
- skuba_msgs
- dynamixel_sdk

## Build
```bash
colcon build --packages-select skuba_arm
``` 