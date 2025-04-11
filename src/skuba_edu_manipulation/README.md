# SKUBA Education Manipulation Package

This package provides educational tools for controlling the SKUBA robotic arm using ROS2 and MoveIt.

## Nodes

### IK Solver (`ik_solver`)
Provides inverse kinematics calculations for the robotic arm.

#### Features
- Calculates joint positions for a given end effector pose
- Uses MoveIt for IK calculations
- Provides service interface for IK requests

#### Usage
```bash
ros2 run skuba_edu_manipulation ik_solver
```

#### Service
- Name: `/ik_solver`
- Type: `skuba_msgs/srv/IKRequest`
- Request:
  - `target_pose`: Desired end effector pose
  - `group_name`: MoveIt planning group name
  - `end_effector_link`: End effector link name
- Response:
  - `joint_positions`: Calculated joint positions
  - `success`: IK solution status
  - `message`: Status message

### Arm Controller (`arm_controller`)
Controls the robotic arm using Dynamixel motors.

#### Features
- Controls Dynamixel motors
- Executes trajectories from MoveIt
- Provides service interface for direct control

#### Usage
```bash
ros2 run skuba_edu_manipulation arm_controller
```

#### Topics
- Subscribes to: `/display_planned_path` (moveit_msgs/msg/DisplayTrajectory)
  - Receives planned trajectories from MoveIt

#### Services
- Name: `/arm_trajectory`
- Type: `skuba_msgs/srv/ArmTrajectory`
- Request:
  - `positions`: Target joint positions
  - `velocities`: Target joint velocities
  - `accelerations`: Target joint accelerations
  - `time_from_start`: Time from start for each point
- Response:
  - `success`: Trajectory execution status
  - `message`: Status message

## Configuration

### MoveIt Configuration
- Planning group: `arm_group`
- End effector: `gripper_link`
- Joint limits and collision checking configured in MoveIt Setup Assistant

### Dynamixel Configuration
- Device: `/dev/ttyUSB0`
- Baudrate: 1000000
- Protocol: 1.0
- Motor IDs: [1, 2, 3]

## Dependencies
- rclcpp
- std_msgs
- skuba_msgs
- dynamixel_sdk
- moveit_msgs
- moveit_core
- moveit_ros_planning_interface
- geometry_msgs

## Build
```bash
colcon build --packages-select skuba_edu_manipulation
```

## Launch
```bash
ros2 launch skuba_edu_manipulation moveit.launch.py
``` 