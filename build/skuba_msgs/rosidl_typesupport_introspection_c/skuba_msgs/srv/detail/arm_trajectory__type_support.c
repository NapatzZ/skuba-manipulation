// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "skuba_msgs/srv/detail/arm_trajectory__rosidl_typesupport_introspection_c.h"
#include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "skuba_msgs/srv/detail/arm_trajectory__functions.h"
#include "skuba_msgs/srv/detail/arm_trajectory__struct.h"


// Include directives for member types
// Member `positions`
// Member `velocities`
// Member `accelerations`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/duration.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skuba_msgs__srv__ArmTrajectory_Request__init(message_memory);
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_fini_function(void * message_memory)
{
  skuba_msgs__srv__ArmTrajectory_Request__fini(message_memory);
}

size_t skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__velocities(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__velocities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__velocities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__velocities(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__velocities(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__velocities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__accelerations(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__accelerations(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__accelerations(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__accelerations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__accelerations(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__accelerations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__accelerations(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__accelerations(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__time_from_start(
  const void * untyped_member)
{
  const builtin_interfaces__msg__Duration__Sequence * member =
    (const builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__time_from_start(
  const void * untyped_member, size_t index)
{
  const builtin_interfaces__msg__Duration__Sequence * member =
    (const builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__time_from_start(
  void * untyped_member, size_t index)
{
  builtin_interfaces__msg__Duration__Sequence * member =
    (builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__time_from_start(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const builtin_interfaces__msg__Duration * item =
    ((const builtin_interfaces__msg__Duration *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__time_from_start(untyped_member, index));
  builtin_interfaces__msg__Duration * value =
    (builtin_interfaces__msg__Duration *)(untyped_value);
  *value = *item;
}

void skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__time_from_start(
  void * untyped_member, size_t index, const void * untyped_value)
{
  builtin_interfaces__msg__Duration * item =
    ((builtin_interfaces__msg__Duration *)
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__time_from_start(untyped_member, index));
  const builtin_interfaces__msg__Duration * value =
    (const builtin_interfaces__msg__Duration *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__time_from_start(
  void * untyped_member, size_t size)
{
  builtin_interfaces__msg__Duration__Sequence * member =
    (builtin_interfaces__msg__Duration__Sequence *)(untyped_member);
  builtin_interfaces__msg__Duration__Sequence__fini(member);
  return builtin_interfaces__msg__Duration__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_member_array[4] = {
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Request, positions),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__positions,  // size() function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__positions,  // get_const(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__positions,  // get(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__positions,  // fetch(index, &value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__positions,  // assign(index, value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__positions  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Request, velocities),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__velocities,  // size() function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__velocities,  // get_const(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__velocities,  // get(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__velocities,  // fetch(index, &value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__velocities,  // assign(index, value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__velocities  // resize(index) function pointer
  },
  {
    "accelerations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Request, accelerations),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__accelerations,  // size() function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__accelerations,  // get_const(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__accelerations,  // get(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__accelerations,  // fetch(index, &value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__accelerations,  // assign(index, value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__accelerations  // resize(index) function pointer
  },
  {
    "time_from_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Request, time_from_start),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__size_function__ArmTrajectory_Request__time_from_start,  // size() function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_const_function__ArmTrajectory_Request__time_from_start,  // get_const(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__get_function__ArmTrajectory_Request__time_from_start,  // get(index) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__fetch_function__ArmTrajectory_Request__time_from_start,  // fetch(index, &value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__assign_function__ArmTrajectory_Request__time_from_start,  // assign(index, value) function pointer
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__resize_function__ArmTrajectory_Request__time_from_start  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_members = {
  "skuba_msgs__srv",  // message namespace
  "ArmTrajectory_Request",  // message name
  4,  // number of fields
  sizeof(skuba_msgs__srv__ArmTrajectory_Request),
  skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_member_array,  // message members
  skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_type_support_handle = {
  0,
  &skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Request)() {
  skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &skuba_msgs__srv__ArmTrajectory_Request__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__functions.h"
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skuba_msgs__srv__ArmTrajectory_Response__init(message_memory);
}

void skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_fini_function(void * message_memory)
{
  skuba_msgs__srv__ArmTrajectory_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__ArmTrajectory_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_members = {
  "skuba_msgs__srv",  // message namespace
  "ArmTrajectory_Response",  // message name
  2,  // number of fields
  sizeof(skuba_msgs__srv__ArmTrajectory_Response),
  skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_member_array,  // message members
  skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_type_support_handle = {
  0,
  &skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Response)() {
  if (!skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &skuba_msgs__srv__ArmTrajectory_Response__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_members = {
  "skuba_msgs__srv",  // service namespace
  "ArmTrajectory",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_Request_message_type_support_handle,
  NULL  // response message
  // skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_Response_message_type_support_handle
};

static rosidl_service_type_support_t skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_type_support_handle = {
  0,
  &skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory)() {
  if (!skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, ArmTrajectory_Response)()->data;
  }

  return &skuba_msgs__srv__detail__arm_trajectory__rosidl_typesupport_introspection_c__ArmTrajectory_service_type_support_handle;
}
