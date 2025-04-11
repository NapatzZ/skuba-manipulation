// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_H_
#define SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_H_

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
// Member 'accelerations'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_from_start'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in srv/ArmTrajectory in the package skuba_msgs.
typedef struct skuba_msgs__srv__ArmTrajectory_Request
{
  rosidl_runtime_c__float__Sequence positions;
  rosidl_runtime_c__float__Sequence velocities;
  rosidl_runtime_c__float__Sequence accelerations;
  builtin_interfaces__msg__Duration__Sequence time_from_start;
} skuba_msgs__srv__ArmTrajectory_Request;

// Struct for a sequence of skuba_msgs__srv__ArmTrajectory_Request.
typedef struct skuba_msgs__srv__ArmTrajectory_Request__Sequence
{
  skuba_msgs__srv__ArmTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__ArmTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ArmTrajectory in the package skuba_msgs.
typedef struct skuba_msgs__srv__ArmTrajectory_Response
{
  bool success;
  rosidl_runtime_c__String message;
} skuba_msgs__srv__ArmTrajectory_Response;

// Struct for a sequence of skuba_msgs__srv__ArmTrajectory_Response.
typedef struct skuba_msgs__srv__ArmTrajectory_Response__Sequence
{
  skuba_msgs__srv__ArmTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__ArmTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_TRAJECTORY__STRUCT_H_
