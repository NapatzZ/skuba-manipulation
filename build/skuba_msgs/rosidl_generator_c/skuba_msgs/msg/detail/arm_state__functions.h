// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__MSG__DETAIL__ARM_STATE__FUNCTIONS_H_
#define SKUBA_MSGS__MSG__DETAIL__ARM_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "skuba_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "skuba_msgs/msg/detail/arm_state__struct.h"

/// Initialize msg/ArmState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * skuba_msgs__msg__ArmState
 * )) before or use
 * skuba_msgs__msg__ArmState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__init(skuba_msgs__msg__ArmState * msg);

/// Finalize msg/ArmState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__msg__ArmState__fini(skuba_msgs__msg__ArmState * msg);

/// Create msg/ArmState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * skuba_msgs__msg__ArmState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__msg__ArmState *
skuba_msgs__msg__ArmState__create();

/// Destroy msg/ArmState message.
/**
 * It calls
 * skuba_msgs__msg__ArmState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__msg__ArmState__destroy(skuba_msgs__msg__ArmState * msg);

/// Check for msg/ArmState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__are_equal(const skuba_msgs__msg__ArmState * lhs, const skuba_msgs__msg__ArmState * rhs);

/// Copy a msg/ArmState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__copy(
  const skuba_msgs__msg__ArmState * input,
  skuba_msgs__msg__ArmState * output);

/// Initialize array of msg/ArmState messages.
/**
 * It allocates the memory for the number of elements and calls
 * skuba_msgs__msg__ArmState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__Sequence__init(skuba_msgs__msg__ArmState__Sequence * array, size_t size);

/// Finalize array of msg/ArmState messages.
/**
 * It calls
 * skuba_msgs__msg__ArmState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__msg__ArmState__Sequence__fini(skuba_msgs__msg__ArmState__Sequence * array);

/// Create array of msg/ArmState messages.
/**
 * It allocates the memory for the array and calls
 * skuba_msgs__msg__ArmState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__msg__ArmState__Sequence *
skuba_msgs__msg__ArmState__Sequence__create(size_t size);

/// Destroy array of msg/ArmState messages.
/**
 * It calls
 * skuba_msgs__msg__ArmState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__msg__ArmState__Sequence__destroy(skuba_msgs__msg__ArmState__Sequence * array);

/// Check for msg/ArmState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__Sequence__are_equal(const skuba_msgs__msg__ArmState__Sequence * lhs, const skuba_msgs__msg__ArmState__Sequence * rhs);

/// Copy an array of msg/ArmState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__msg__ArmState__Sequence__copy(
  const skuba_msgs__msg__ArmState__Sequence * input,
  skuba_msgs__msg__ArmState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__MSG__DETAIL__ARM_STATE__FUNCTIONS_H_
