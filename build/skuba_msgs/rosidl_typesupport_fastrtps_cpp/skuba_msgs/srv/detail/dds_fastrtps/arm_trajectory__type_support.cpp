// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/srv/detail/arm_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "skuba_msgs/srv/detail/arm_trajectory__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Duration &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Duration &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Duration &,
  size_t current_alignment);
size_t
max_serialized_size_Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace skuba_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_serialize(
  const skuba_msgs::srv::ArmTrajectory_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: positions
  {
    cdr << ros_message.positions;
  }
  // Member: velocities
  {
    cdr << ros_message.velocities;
  }
  // Member: accelerations
  {
    cdr << ros_message.accelerations;
  }
  // Member: time_from_start
  {
    size_t size = ros_message.time_from_start.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.time_from_start[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  skuba_msgs::srv::ArmTrajectory_Request & ros_message)
{
  // Member: positions
  {
    cdr >> ros_message.positions;
  }

  // Member: velocities
  {
    cdr >> ros_message.velocities;
  }

  // Member: accelerations
  {
    cdr >> ros_message.accelerations;
  }

  // Member: time_from_start
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.time_from_start.resize(size);
    for (size_t i = 0; i < size; i++) {
      builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.time_from_start[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
get_serialized_size(
  const skuba_msgs::srv::ArmTrajectory_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: positions
  {
    size_t array_size = ros_message.positions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.positions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocities
  {
    size_t array_size = ros_message.velocities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.velocities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accelerations
  {
    size_t array_size = ros_message.accelerations.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.accelerations[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_from_start
  {
    size_t array_size = ros_message.time_from_start.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.time_from_start[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
max_serialized_size_ArmTrajectory_Request(
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


  // Member: positions
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

  // Member: velocities
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

  // Member: accelerations
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

  // Member: time_from_start
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = skuba_msgs::srv::ArmTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, time_from_start) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::ArmTrajectory_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<skuba_msgs::srv::ArmTrajectory_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmTrajectory_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::ArmTrajectory_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmTrajectory_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmTrajectory_Request__callbacks = {
  "skuba_msgs::srv",
  "ArmTrajectory_Request",
  _ArmTrajectory_Request__cdr_serialize,
  _ArmTrajectory_Request__cdr_deserialize,
  _ArmTrajectory_Request__get_serialized_size,
  _ArmTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmTrajectory_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmTrajectory_Request__callbacks,
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
get_message_type_support_handle<skuba_msgs::srv::ArmTrajectory_Request>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, ArmTrajectory_Request)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory_Request__handle;
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
  const skuba_msgs::srv::ArmTrajectory_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
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
  skuba_msgs::srv::ArmTrajectory_Response & ros_message)
{
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
  const skuba_msgs::srv::ArmTrajectory_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
max_serialized_size_ArmTrajectory_Response(
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
    using DataType = skuba_msgs::srv::ArmTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::ArmTrajectory_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<skuba_msgs::srv::ArmTrajectory_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmTrajectory_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const skuba_msgs::srv::ArmTrajectory_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmTrajectory_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmTrajectory_Response__callbacks = {
  "skuba_msgs::srv",
  "ArmTrajectory_Response",
  _ArmTrajectory_Response__cdr_serialize,
  _ArmTrajectory_Response__cdr_deserialize,
  _ArmTrajectory_Response__get_serialized_size,
  _ArmTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmTrajectory_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmTrajectory_Response__callbacks,
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
get_message_type_support_handle<skuba_msgs::srv::ArmTrajectory_Response>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, ArmTrajectory_Response)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory_Response__handle;
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

static service_type_support_callbacks_t _ArmTrajectory__callbacks = {
  "skuba_msgs::srv",
  "ArmTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, ArmTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, ArmTrajectory_Response)(),
};

static rosidl_service_type_support_t _ArmTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmTrajectory__callbacks,
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
get_service_type_support_handle<skuba_msgs::srv::ArmTrajectory>()
{
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, srv, ArmTrajectory)() {
  return &skuba_msgs::srv::typesupport_fastrtps_cpp::_ArmTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
