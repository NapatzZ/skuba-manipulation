// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_H_
#define SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'positions'
// Member 'velocities'
// Member 'efforts'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ArmState in the package skuba_msgs.
/**
  * Arm joint states
 */
typedef struct skuba_msgs__msg__ArmState
{
  rosidl_runtime_c__float__Sequence positions;
  rosidl_runtime_c__float__Sequence velocities;
  rosidl_runtime_c__float__Sequence efforts;
  /// Gripper states
  float gripper_left_position;
  float gripper_right_position;
  /// Status
  bool is_moving;
  bool is_error;
  rosidl_runtime_c__String error_message;
} skuba_msgs__msg__ArmState;

// Struct for a sequence of skuba_msgs__msg__ArmState.
typedef struct skuba_msgs__msg__ArmState__Sequence
{
  skuba_msgs__msg__ArmState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__msg__ArmState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__MSG__DETAIL__ARM_STATE__STRUCT_H_
