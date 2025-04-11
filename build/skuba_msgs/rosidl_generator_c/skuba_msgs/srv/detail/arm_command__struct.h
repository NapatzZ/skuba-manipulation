// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skuba_msgs:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_H_
#define SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command_type'
#include "rosidl_runtime_c/string.h"
// Member 'positions'
// Member 'velocities'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/ArmCommand in the package skuba_msgs.
typedef struct skuba_msgs__srv__ArmCommand_Request
{
  /// "position", "velocity", "home", "stop"
  rosidl_runtime_c__String command_type;
  /// Target positions for each joint (in radians)
  rosidl_runtime_c__float__Sequence positions;
  /// Target velocities for each joint (in radians/second)
  rosidl_runtime_c__float__Sequence velocities;
  /// Gripper commands
  float gripper_left_position;
  float gripper_right_position;
} skuba_msgs__srv__ArmCommand_Request;

// Struct for a sequence of skuba_msgs__srv__ArmCommand_Request.
typedef struct skuba_msgs__srv__ArmCommand_Request__Sequence
{
  skuba_msgs__srv__ArmCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__ArmCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ArmCommand in the package skuba_msgs.
typedef struct skuba_msgs__srv__ArmCommand_Response
{
  bool success;
  rosidl_runtime_c__String message;
} skuba_msgs__srv__ArmCommand_Response;

// Struct for a sequence of skuba_msgs__srv__ArmCommand_Response.
typedef struct skuba_msgs__srv__ArmCommand_Response__Sequence
{
  skuba_msgs__srv__ArmCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__ArmCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__STRUCT_H_
