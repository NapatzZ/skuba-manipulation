// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/srv/detail/ik_request__rosidl_typesupport_fastrtps_cpp.hpp"
#include "skuba_msgs/srv/detail/ik_request__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace skuba_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_serialize(
  const skuba_msgs::srv::IKRequest_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.target_pose,
    cdr);
  // Member: group_name
  cdr << ros_message.group_name;
  // Member: end_effector_link
  cdr << ros_message.end_effector_link;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  skuba_msgs::srv::IKRequest_Request & ros_message)
{
  // Member: target_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.target_pose);

  // Member: group_name
  cdr >> ros_message.group_name;

  // Member: end_effector_link
  cdr >> ros_message.end_effector_link;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
get_serialized_size(
  const skuba_msgs::srv::IKRequest_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.target_pose, current_alignment);
  // Member: group_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.group_name.size() + 1);
  // Member: end_effector_link
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.end_effector_link.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
max_serialized_size_IKRequest_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: target_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: group_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: end_effector_link
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = skuba_msgs::srv::IKRequest_Request;
    is_plain =
      (
      offsetof(DataType, end_effector_link) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IKRequest_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::IKRequest_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IKRequest_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<skuba_msgs::srv::IKRequest_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IKRequest_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::IKRequest_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IKRequest_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IKRequest_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IKRequest_Request__callbacks = {
  "skuba_msgs::srv",
  "IKRequest_Request",
  _IKRequest_Request__cdr_serialize,
  _IKRequest_Request__cdr_deserialize,
  _IKRequest_Request__get_serialized_size,
  _IKRequest_Request__max_serialized_size
};

static rosidl_message_type_support_t _IKRequest_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKRequest_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<skuba_msgs::srv::IKRequest_Request>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Request)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace skuba_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_serialize(
  const skuba_msgs::srv::IKRequest_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_positions
  {
    cdr << ros_message.joint_positions;
  }
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  skuba_msgs::srv::IKRequest_Response & ros_message)
{
  // Member: joint_positions
  {
    cdr >> ros_message.joint_positions;
  }

  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
get_serialized_size(
  const skuba_msgs::srv::IKRequest_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_positions
  {
    size_t array_size = ros_message.joint_positions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.joint_positions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
max_serialized_size_IKRequest_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint_positions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = skuba_msgs::srv::IKRequest_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IKRequest_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::IKRequest_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IKRequest_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<skuba_msgs::srv::IKRequest_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IKRequest_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::IKRequest_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IKRequest_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IKRequest_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IKRequest_Response__callbacks = {
  "skuba_msgs::srv",
  "IKRequest_Response",
  _IKRequest_Response__cdr_serialize,
  _IKRequest_Response__cdr_deserialize,
  _IKRequest_Response__get_serialized_size,
  _IKRequest_Response__max_serialized_size
};

static rosidl_message_type_support_t _IKRequest_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKRequest_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<skuba_msgs::srv::IKRequest_Response>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Response)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace skuba_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _IKRequest__callbacks = {
  "skuba_msgs::srv",
  "IKRequest",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest_Response)(),
};

static rosidl_service_type_support_t _IKRequest__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKRequest__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace skuba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_skuba_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<skuba_msgs::srv::IKRequest>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, IKRequest)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_IKRequest__handle;
}

#ifdef __cplusplus
}
#endif
