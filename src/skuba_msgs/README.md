# SKUBA Messages Package

This package contains custom message and service definitions for the SKUBA robotic arm system.

## Messages

### ArmState.msg
Contains the current state of the robotic arm:
- `float32[] positions`: Joint positions in radians
- `float32[] velocities`: Joint velocities in radians/second
- `float32[] efforts`: Joint efforts
- `bool is_moving`: Arm movement status
- `bool is_error`: Error status
- `string error_message`: Error description if any

## Services

### ArmCommand.srv
Service for commanding the robotic arm:
- Request:
  - `string command_type`: Type of command ("position", "velocity", "home", "stop")
  - `float32[] positions`: Target joint positions in radians
  - `float32[] velocities`: Target joint velocities in radians/second
- Response:
  - `bool success`: Command execution status
  - `string message`: Status message

### ArmTrajectory.srv
Service for executing arm trajectories:
- Request:
  - `float32[] positions`: Target joint positions
  - `float32[] velocities`: Target joint velocities
  - `float32[] accelerations`: Target joint accelerations
  - `builtin_interfaces/Duration[] time_from_start`: Time from start for each point
- Response:
  - `bool success`: Trajectory execution status
  - `string message`: Status message

### IKRequest.srv
Service for inverse kinematics calculations:
- Request:
  - `geometry_msgs/Pose target_pose`: Target end effector pose
  - `string group_name`: MoveIt planning group name
  - `string end_effector_link`: End effector link name
- Response:
  - `float32[] joint_positions`: Calculated joint positions
  - `bool success`: IK solution status
  - `string message`: Status message

## Dependencies
- std_msgs
- builtin_interfaces
- geometry_msgs

## Build
```bash
colcon build --packages-select skuba_msgs
``` 