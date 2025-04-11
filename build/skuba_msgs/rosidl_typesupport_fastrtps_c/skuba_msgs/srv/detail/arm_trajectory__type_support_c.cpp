// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from skuba_msgs:srv/ArmTrajectory.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/srv/detail/arm_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "skuba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "skuba_msgs/srv/detail/arm_trajectory__struct.h"
#include "skuba_msgs/srv/detail/arm_trajectory__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // time_from_start
#include "rosidl_runtime_c/primitives_sequence.h"  // accelerations, positions, velocities
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // accelerations, positions, velocities

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_skuba_msgs
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_skuba_msgs
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_skuba_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();


using _ArmTrajectory_Request__ros_msg_type = skuba_msgs__srv__ArmTrajectory_Request;

static bool _ArmTrajectory_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ArmTrajectory_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: accelerations
  {
    size_t size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: time_from_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    size_t size = ros_message->time_from_start.size;
    auto array_ptr = ros_message->time_from_start.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ArmTrajectory_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmTrajectory_Request__ros_msg_type * ros_message = static_cast<_ArmTrajectory_Request__ros_msg_type *>(untyped_ros_message);
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

  // Field name: accelerations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->accelerations.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->accelerations);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->accelerations, size)) {
      fprintf(stderr, "failed to create array for field 'accelerations'");
      return false;
    }
    auto array_ptr = ros_message->accelerations.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: time_from_start
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->time_from_start.data) {
      builtin_interfaces__msg__Duration__Sequence__fini(&ros_message->time_from_start);
    }
    if (!builtin_interfaces__msg__Duration__Sequence__init(&ros_message->time_from_start, size)) {
      fprintf(stderr, "failed to create array for field 'time_from_start'");
      return false;
    }
    auto array_ptr = ros_message->time_from_start.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t get_serialized_size_skuba_msgs__srv__ArmTrajectory_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmTrajectory_Request__ros_msg_type * ros_message = static_cast<const _ArmTrajectory_Request__ros_msg_type *>(untyped_ros_message);
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
  // field.name accelerations
  {
    size_t array_size = ros_message->accelerations.size;
    auto array_ptr = ros_message->accelerations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_from_start
  {
    size_t array_size = ros_message->time_from_start.size;
    auto array_ptr = ros_message->time_from_start.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmTrajectory_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_skuba_msgs__srv__ArmTrajectory_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t max_serialized_size_skuba_msgs__srv__ArmTrajectory_Request(
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
  // member: accelerations
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
  // member: time_from_start
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
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
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
    using DataType = skuba_msgs__srv__ArmTrajectory_Request;
    is_plain =
      (
      offsetof(DataType, time_from_start) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmTrajectory_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_skuba_msgs__srv__ArmTrajectory_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmTrajectory_Request = {
  "skuba_msgs::srv",
  "ArmTrajectory_Request",
  _ArmTrajectory_Request__cdr_serialize,
  _ArmTrajectory_Request__cdr_deserialize,
  _ArmTrajectory_Request__get_serialized_size,
  _ArmTrajectory_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArmTrajectory_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmTrajectory_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, srv, ArmTrajectory_Request)() {
  return &_ArmTrajectory_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__struct.h"
// already included above
// #include "skuba_msgs/srv/detail/arm_trajectory__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/string.h"  // message
#include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _ArmTrajectory_Response__ros_msg_type = skuba_msgs__srv__ArmTrajectory_Response;

static bool _ArmTrajectory_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ArmTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

static bool _ArmTrajectory_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmTrajectory_Response__ros_msg_type * ros_message = static_cast<_ArmTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t get_serialized_size_skuba_msgs__srv__ArmTrajectory_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmTrajectory_Response__ros_msg_type * ros_message = static_cast<const _ArmTrajectory_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArmTrajectory_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_skuba_msgs__srv__ArmTrajectory_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_skuba_msgs
size_t max_serialized_size_skuba_msgs__srv__ArmTrajectory_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
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
    using DataType = skuba_msgs__srv__ArmTrajectory_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmTrajectory_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_skuba_msgs__srv__ArmTrajectory_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmTrajectory_Response = {
  "skuba_msgs::srv",
  "ArmTrajectory_Response",
  _ArmTrajectory_Response__cdr_serialize,
  _ArmTrajectory_Response__cdr_deserialize,
  _ArmTrajectory_Response__get_serialized_size,
  _ArmTrajectory_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArmTrajectory_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmTrajectory_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, srv, ArmTrajectory_Response)() {
  return &_ArmTrajectory_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "skuba_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "skuba_msgs/srv/arm_trajectory.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArmTrajectory__callbacks = {
  "skuba_msgs::srv",
  "ArmTrajectory",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, srv, ArmTrajectory_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, srv, ArmTrajectory_Response)(),
};

static rosidl_service_type_support_t ArmTrajectory__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArmTrajectory__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, skuba_msgs, srv, ArmTrajectory)() {
  return &ArmTrajectory__handle;
}

#if defined(__cplusplus)
}
#endif
