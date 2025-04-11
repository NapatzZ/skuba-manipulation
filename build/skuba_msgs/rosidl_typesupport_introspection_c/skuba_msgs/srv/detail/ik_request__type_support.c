// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "skuba_msgs/srv/detail/ik_request__rosidl_typesupport_introspection_c.h"
#include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "skuba_msgs/srv/detail/ik_request__functions.h"
#include "skuba_msgs/srv/detail/ik_request__struct.h"


// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/pose.h"
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `group_name`
// Member `end_effector_link`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skuba_msgs__srv__IKRequest_Request__init(message_memory);
}

void skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_fini_function(void * message_memory)
{
  skuba_msgs__srv__IKRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_member_array[3] = {
  {
    "target_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__IKRequest_Request, target_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__IKRequest_Request, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_effector_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__IKRequest_Request, end_effector_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_members = {
  "skuba_msgs__srv",  // message namespace
  "IKRequest_Request",  // message name
  3,  // number of fields
  sizeof(skuba_msgs__srv__IKRequest_Request),
  skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_member_array,  // message members
  skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_type_support_handle = {
  0,
  &skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Request)() {
  skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &skuba_msgs__srv__IKRequest_Request__rosidl_typesupport_introspection_c__IKRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "skuba_msgs/srv/detail/ik_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "skuba_msgs/srv/detail/ik_request__functions.h"
// already included above
// #include "skuba_msgs/srv/detail/ik_request__struct.h"


// Include directives for member types
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  skuba_msgs__srv__IKRequest_Response__init(message_memory);
}

void skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_fini_function(void * message_memory)
{
  skuba_msgs__srv__IKRequest_Response__fini(message_memory);
}

size_t skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__size_function__IKRequest_Response__joint_positions(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_const_function__IKRequest_Response__joint_positions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_function__IKRequest_Response__joint_positions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__fetch_function__IKRequest_Response__joint_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_const_function__IKRequest_Response__joint_positions(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__assign_function__IKRequest_Response__joint_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_function__IKRequest_Response__joint_positions(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__resize_function__IKRequest_Response__joint_positions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_member_array[3] = {
  {
    "joint_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__IKRequest_Response, joint_positions),  // bytes offset in struct
    NULL,  // default value
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__size_function__IKRequest_Response__joint_positions,  // size() function pointer
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_const_function__IKRequest_Response__joint_positions,  // get_const(index) function pointer
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__get_function__IKRequest_Response__joint_positions,  // get(index) function pointer
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__fetch_function__IKRequest_Response__joint_positions,  // fetch(index, &value) function pointer
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__assign_function__IKRequest_Response__joint_positions,  // assign(index, value) function pointer
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__resize_function__IKRequest_Response__joint_positions  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(skuba_msgs__srv__IKRequest_Response, success),  // bytes offset in struct
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
    offsetof(skuba_msgs__srv__IKRequest_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_members = {
  "skuba_msgs__srv",  // message namespace
  "IKRequest_Response",  // message name
  3,  // number of fields
  sizeof(skuba_msgs__srv__IKRequest_Response),
  skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_member_array,  // message members
  skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_type_support_handle = {
  0,
  &skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Response)() {
  if (!skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &skuba_msgs__srv__IKRequest_Response__rosidl_typesupport_introspection_c__IKRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "skuba_msgs/srv/detail/ik_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_members = {
  "skuba_msgs__srv",  // service namespace
  "IKRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_Request_message_type_support_handle,
  NULL  // response message
  // skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_Response_message_type_support_handle
};

static rosidl_service_type_support_t skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_type_support_handle = {
  0,
  &skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_skuba_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest)() {
  if (!skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_type_support_handle.typesupport_identifier) {
    skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, skuba_msgs, srv, IKRequest_Response)()->data;
  }

  return &skuba_msgs__srv__detail__ik_request__rosidl_typesupport_introspection_c__IKRequest_service_type_support_handle;
}
