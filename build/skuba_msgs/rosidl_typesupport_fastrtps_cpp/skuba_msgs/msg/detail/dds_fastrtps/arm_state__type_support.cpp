// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/msg/detail/arm_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "skuba_msgs/msg/detail/arm_state__struct.hpp"

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

namespace skuba_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_serialize(
  const skuba_msgs::msg::ArmState & ros_message,
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
  // Member: efforts
  {
    cdr << ros_message.efforts;
  }
  // Member: gripper_left_position
  cdr << ros_message.gripper_left_position;
  // Member: gripper_right_position
  cdr << ros_message.gripper_right_position;
  // Member: is_moving
  cdr << (ros_message.is_moving ? true : false);
  // Member: is_error
  cdr << (ros_message.is_error ? true : false);
  // Member: error_message
  cdr << ros_message.error_message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  skuba_msgs::msg::ArmState & ros_message)
{
  // Member: positions
  {
    cdr >> ros_message.positions;
  }

  // Member: velocities
  {
    cdr >> ros_message.velocities;
  }

  // Member: efforts
  {
    cdr >> ros_message.efforts;
  }

  // Member: gripper_left_position
  cdr >> ros_message.gripper_left_position;

  // Member: gripper_right_position
  cdr >> ros_message.gripper_right_position;

  // Member: is_moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_moving = tmp ? true : false;
  }

  // Member: is_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_error = tmp ? true : false;
  }

  // Member: error_message
  cdr >> ros_message.error_message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
get_serialized_size(
  const skuba_msgs::msg::ArmState & ros_message,
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
  // Member: efforts
  {
    size_t array_size = ros_message.efforts.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.efforts[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_left_position
  {
    size_t item_size = sizeof(ros_message.gripper_left_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gripper_right_position
  {
    size_t item_size = sizeof(ros_message.gripper_right_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_moving
  {
    size_t item_size = sizeof(ros_message.is_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_error
  {
    size_t item_size = sizeof(ros_message.is_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_skuba_msgs
max_serialized_size_ArmState(
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

  // Member: efforts
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

  // Member: gripper_left_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gripper_right_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_message
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
    using DataType = skuba_msgs::msg::ArmState;
    is_plain =
      (
      offsetof(DataType, error_message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const skuba_msgs::msg::ArmState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<skuba_msgs::msg::ArmState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const skuba_msgs::msg::ArmState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmState__callbacks = {
  "skuba_msgs::msg",
  "ArmState",
  _ArmState__cdr_serialize,
  _ArmState__cdr_deserialize,
  _ArmState__get_serialized_size,
  _ArmState__max_serialized_size
};

static rosidl_message_type_support_t _ArmState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace skuba_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_skuba_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<skuba_msgs::msg::ArmState>()
{
  return &skuba_msgs::msg::typesupport_fastrtps_cpp::_ArmState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, skuba_msgs, msg, ArmState)() {
  return &skuba_msgs::msg::typesupport_fastrtps_cpp::_ArmState__handle;
}

#ifdef __cplusplus
}
#endif
