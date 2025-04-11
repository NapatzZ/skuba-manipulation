// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from skuba_msgs:srv/ArmCommand.idl
// generated code does not contain a copyright notice

#ifndef SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__FUNCTIONS_H_
#define SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "skuba_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "skuba_msgs/srv/detail/arm_command__struct.h"

/// Initialize srv/ArmCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * skuba_msgs__srv__ArmCommand_Request
 * )) before or use
 * skuba_msgs__srv__ArmCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Request__init(skuba_msgs__srv__ArmCommand_Request * msg);

/// Finalize srv/ArmCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Request__fini(skuba_msgs__srv__ArmCommand_Request * msg);

/// Create srv/ArmCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * skuba_msgs__srv__ArmCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__srv__ArmCommand_Request *
skuba_msgs__srv__ArmCommand_Request__create();

/// Destroy srv/ArmCommand message.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Request__destroy(skuba_msgs__srv__ArmCommand_Request * msg);

/// Check for srv/ArmCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Request__are_equal(const skuba_msgs__srv__ArmCommand_Request * lhs, const skuba_msgs__srv__ArmCommand_Request * rhs);

/// Copy a srv/ArmCommand message.
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
skuba_msgs__srv__ArmCommand_Request__copy(
  const skuba_msgs__srv__ArmCommand_Request * input,
  skuba_msgs__srv__ArmCommand_Request * output);

/// Initialize array of srv/ArmCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * skuba_msgs__srv__ArmCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Request__Sequence__init(skuba_msgs__srv__ArmCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/ArmCommand messages.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Request__Sequence__fini(skuba_msgs__srv__ArmCommand_Request__Sequence * array);

/// Create array of srv/ArmCommand messages.
/**
 * It allocates the memory for the array and calls
 * skuba_msgs__srv__ArmCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__srv__ArmCommand_Request__Sequence *
skuba_msgs__srv__ArmCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/ArmCommand messages.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Request__Sequence__destroy(skuba_msgs__srv__ArmCommand_Request__Sequence * array);

/// Check for srv/ArmCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Request__Sequence__are_equal(const skuba_msgs__srv__ArmCommand_Request__Sequence * lhs, const skuba_msgs__srv__ArmCommand_Request__Sequence * rhs);

/// Copy an array of srv/ArmCommand messages.
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
skuba_msgs__srv__ArmCommand_Request__Sequence__copy(
  const skuba_msgs__srv__ArmCommand_Request__Sequence * input,
  skuba_msgs__srv__ArmCommand_Request__Sequence * output);

/// Initialize srv/ArmCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * skuba_msgs__srv__ArmCommand_Response
 * )) before or use
 * skuba_msgs__srv__ArmCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Response__init(skuba_msgs__srv__ArmCommand_Response * msg);

/// Finalize srv/ArmCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Response__fini(skuba_msgs__srv__ArmCommand_Response * msg);

/// Create srv/ArmCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * skuba_msgs__srv__ArmCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__srv__ArmCommand_Response *
skuba_msgs__srv__ArmCommand_Response__create();

/// Destroy srv/ArmCommand message.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Response__destroy(skuba_msgs__srv__ArmCommand_Response * msg);

/// Check for srv/ArmCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Response__are_equal(const skuba_msgs__srv__ArmCommand_Response * lhs, const skuba_msgs__srv__ArmCommand_Response * rhs);

/// Copy a srv/ArmCommand message.
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
skuba_msgs__srv__ArmCommand_Response__copy(
  const skuba_msgs__srv__ArmCommand_Response * input,
  skuba_msgs__srv__ArmCommand_Response * output);

/// Initialize array of srv/ArmCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * skuba_msgs__srv__ArmCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Response__Sequence__init(skuba_msgs__srv__ArmCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/ArmCommand messages.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Response__Sequence__fini(skuba_msgs__srv__ArmCommand_Response__Sequence * array);

/// Create array of srv/ArmCommand messages.
/**
 * It allocates the memory for the array and calls
 * skuba_msgs__srv__ArmCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
skuba_msgs__srv__ArmCommand_Response__Sequence *
skuba_msgs__srv__ArmCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/ArmCommand messages.
/**
 * It calls
 * skuba_msgs__srv__ArmCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
void
skuba_msgs__srv__ArmCommand_Response__Sequence__destroy(skuba_msgs__srv__ArmCommand_Response__Sequence * array);

/// Check for srv/ArmCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_skuba_msgs
bool
skuba_msgs__srv__ArmCommand_Response__Sequence__are_equal(const skuba_msgs__srv__ArmCommand_Response__Sequence * lhs, const skuba_msgs__srv__ArmCommand_Response__Sequence * rhs);

/// Copy an array of srv/ArmCommand messages.
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
skuba_msgs__srv__ArmCommand_Response__Sequence__copy(
  const skuba_msgs__srv__ArmCommand_Response__Sequence * input,
  skuba_msgs__srv__ArmCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SKUBA_MSGS__SRV__DETAIL__ARM_COMMAND__FUNCTIONS_H_
