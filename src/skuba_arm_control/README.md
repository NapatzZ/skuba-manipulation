# SKUBA Arm Control Package

## Overview
The SKUBA Arm Control package provides ROS2 nodes for controlling robotic arms using Dynamixel motors. It interfaces with MoveIt! for motion planning and execution.

## Features
- Control of Dynamixel motors through USB2Dynamixel
- Integration with MoveIt! for trajectory planning
- Support for Protocol 1.0 and 2.0
- Configurable motor parameters
- Real-time position control

## Dependencies
- ROS2 Humble
- Dynamixel SDK
- MoveIt!
- rclcpp
- trajectory_msgs
- moveit_msgs

## Installation
1. Clone the repository:
```bash
git clone https://github.com/your-username/skuba-manipulation.git
```

2. Build the package:
```bash
cd skuba-manipulation
colcon build --packages-select skuba_arm_control
```

## Usage

### Running the Arm Controller
```bash
ros2 run skuba_arm_control arm_controller
```

### Configuration
The package can be configured by modifying the following parameters in `arm_controller.cpp`:
- `DEVICE_NAME`: Serial port for Dynamixel communication
- `BAUDRATE`: Communication speed
- `PROTOCOL_VERSION`: Dynamixel protocol version
- Motor addresses and limits

### Topics
- Subscribes to: `/display_planned_path` (moveit_msgs/msg/DisplayTrajectory)
  - Receives planned trajectories from MoveIt!

## Troubleshooting

### Common Issues
1. **Port Access**
   - Ensure proper permissions for `/dev/ttyUSB0`
   - Check if the port exists and is accessible

2. **Communication Errors**
   - Verify baudrate settings
   - Check motor IDs and protocol version
   - Ensure proper wiring

3. **MoveIt! Integration**
   - Verify MoveIt! configuration
   - Check trajectory topic names

### Debugging
- Use `rqt_graph` to visualize node connections
- Monitor topics with `ros2 topic echo`
- Check logs with `rqt_console`

## Contributing
1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Create a Pull Request

## License
This package is licensed under the MIT License - see the LICENSE file for details.
