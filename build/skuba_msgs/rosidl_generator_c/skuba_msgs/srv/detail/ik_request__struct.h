// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_H_
#define SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'group_name'
// Member 'end_effector_link'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IKRequest in the package skuba_msgs.
typedef struct skuba_msgs__srv__IKRequest_Request
{
  /// Target pose for end effector
  geometry_msgs__msg__Pose target_pose;
  /// MoveIt planning group name
  rosidl_runtime_c__String group_name;
  /// End effector link name
  rosidl_runtime_c__String end_effector_link;
} skuba_msgs__srv__IKRequest_Request;

// Struct for a sequence of skuba_msgs__srv__IKRequest_Request.
typedef struct skuba_msgs__srv__IKRequest_Request__Sequence
{
  skuba_msgs__srv__IKRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__IKRequest_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_positions'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IKRequest in the package skuba_msgs.
typedef struct skuba_msgs__srv__IKRequest_Response
{
  /// Arm joint positions only
  rosidl_runtime_c__float__Sequence joint_positions;
  /// IK solution found
  bool success;
  /// Status message
  rosidl_runtime_c__String message;
} skuba_msgs__srv__IKRequest_Response;

// Struct for a sequence of skuba_msgs__srv__IKRequest_Response.
typedef struct skuba_msgs__srv__IKRequest_Response__Sequence
{
  skuba_msgs__srv__IKRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} skuba_msgs__srv__IKRequest_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__SRV__DETAIL__IK_REQUEST__STRUCT_H_
