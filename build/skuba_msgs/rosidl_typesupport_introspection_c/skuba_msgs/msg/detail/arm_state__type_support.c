// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "skuba_msgs/msg/detail/arm_state__rosidl_typesupport_introspection_c.h"
#include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "skuba_msgs/msg/detail/arm_state__functions.h"
#include "skuba_msgs/msg/detail/arm_state__struct.h"


// Include directives for member types
// Member `positions`
// Member `velocities`
// Member `efforts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skuba_msgs__msg__ArmState__init(message_memory);
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_fini_function(void * message_memory)
{
  skuba_msgs__msg__ArmState__fini(message_memory);
}

size_t skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__efforts(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__efforts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__efforts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__efforts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__efforts(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__efforts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__efforts(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__efforts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_member_array[8] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, positions),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__positions,  // size() function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__positions,  // get_const(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__positions,  // get(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__positions,  // fetch(index, &value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__positions,  // assign(index, value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, velocities),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__velocities,  // size() function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__velocities,  // get_const(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__velocities,  // get(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__velocities,  // fetch(index, &value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__velocities,  // assign(index, value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__velocities  // resize(index) function pointer
  },
  {
    "efforts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, efforts),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__size_function__ArmState__efforts,  // size() function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_const_function__ArmState__efforts,  // get_const(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__get_function__ArmState__efforts,  // get(index) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__fetch_function__ArmState__efforts,  // fetch(index, &value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__assign_function__ArmState__efforts,  // assign(index, value) function pointer
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__resize_function__ArmState__efforts  // resize(index) function pointer
  },
  {
    "gripper_left_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, gripper_left_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gripper_right_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, gripper_right_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, is_moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, is_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__msg__ArmState, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_members = {
  "skuba_msgs__msg",  // message namespace
  "ArmState",  // message name
  8,  // number of fields
  sizeof(skuba_msgs__msg__ArmState),
  skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_member_array,  // message members
  skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_init_function,  // function to initialize message memory (memory has to be allocated)
  skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_type_support_handle = {
  0,
  &skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, msg, ArmState)() {
  if (!skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_type_support_handle.typesupport_identifier) {
    skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &skuba_msgs__msg__ArmState__rosidl_typesupport_introspection_c__ArmState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
