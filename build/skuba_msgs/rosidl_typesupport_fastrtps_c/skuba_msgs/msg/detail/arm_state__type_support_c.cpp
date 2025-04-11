// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/msg/detail/arm_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "skuba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "skuba_msgs/msg/detail/arm_state__struct.h"
#include "skuba_msgs/msg/detail/arm_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // efforts, positions, velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // efforts, positions, velocities
#include "rosidl_runtime_c/string.h"  // error_message
#include "rosidl_runtime_c/string_functions.h"  // error_message

// forward declare type support functions


using _ArmState__ros_msg_type = skuba_msgs__msg__ArmState;

static bool _ArmState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmState__ros_msg_type * ros_message = static_cast<const _ArmState__ros_msg_type *>(untyped_ros_message);
  // Field name: positions
  {
    size_t size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocities
  {
    size_t size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: efforts
  {
    size_t size = ros_message->efforts.size;
    auto array_ptr = ros_message->efforts.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: gripper_left_position
  {
    cdr << ros_message->gripper_left_position;
  }

  // Field name: gripper_right_position
  {
    cdr << ros_message->gripper_right_position;
  }

  // Field name: is_moving
  {
    cdr << (ros_message->is_moving ? true : false);
  }

  // Field name: is_error
  {
    cdr << (ros_message->is_error ? true : false);
  }

  // Field name: error_message
  {
    const rosidl_runtime_c__String * str = &ros_message->error_message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ArmState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmState__ros_msg_type * ros_message = static_cast<_ArmState__ros_msg_type *>(untyped_ros_message);
  // Field name: positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->positions.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->positions);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->positions, size)) {
      fprintf(stderr, "failed to create array for field 'positions'");
      return false;
    }
    auto array_ptr = ros_message->positions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->velocities.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->velocities);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->velocities, size)) {
      fprintf(stderr, "failed to create array for field 'velocities'");
      return false;
    }
    auto array_ptr = ros_message->velocities.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: efforts
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->efforts.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->efforts);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->efforts, size)) {
      fprintf(stderr, "failed to create array for field 'efforts'");
      return false;
    }
    auto array_ptr = ros_message->efforts.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: gripper_left_position
  {
    cdr >> ros_message->gripper_left_position;
  }

  // Field name: gripper_right_position
  {
    cdr >> ros_message->gripper_right_position;
  }

  // Field name: is_moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_moving = tmp ? true : false;
  }

  // Field name: is_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_error = tmp ? true : false;
  }

  // Field name: error_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_message.data) {
      rosidl_runtime_c__String__init(&ros_message->error_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t get_serialized_size_skuba_msgs__msg__ArmState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmState__ros_msg_type * ros_message = static_cast<const _ArmState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name positions
  {
    size_t array_size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocities
  {
    size_t array_size = ros_message->velocities.size;
    auto array_ptr = ros_message->velocities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name efforts
  {
    size_t array_size = ros_message->efforts.size;
    auto array_ptr = ros_message->efforts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_left_position
  {
    size_t item_size = sizeof(ros_message->gripper_left_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gripper_right_position
  {
    size_t item_size = sizeof(ros_message->gripper_right_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_moving
  {
    size_t item_size = sizeof(ros_message->is_moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_error
  {
    size_t item_size = sizeof(ros_message->is_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArmState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_skuba_msgs__msg__ArmState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t max_serialized_size_skuba_msgs__msg__ArmState(
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

  // member: positions
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
  // member: velocities
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
  // member: efforts
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
  // member: gripper_left_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gripper_right_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_moving
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_message
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
    using DataType = skuba_msgs__msg__ArmState;
    is_plain =
      (
      offsetof(DataType, error_message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_skuba_msgs__msg__ArmState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmState = {
  "skuba_msgs::msg",
  "ArmState",
  _ArmState__cdr_serialize,
  _ArmState__cdr_deserialize,
  _ArmState__get_serialized_size,
  _ArmState__max_serialized_size
};

static rosidl_message_type_support_t _ArmState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, msg, ArmState)() {
  return &_ArmState__type_support;
}

#if defined(__cplusplus)
}
#endif
