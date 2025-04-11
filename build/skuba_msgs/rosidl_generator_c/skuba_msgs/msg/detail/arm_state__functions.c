// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from skuba_msgs:msg/ArmState.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/msg/detail/arm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `positions`
// Member `velocities`
// Member `efforts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
skuba_msgs__msg__ArmState__init(skuba_msgs__msg__ArmState * msg)
{
  if (!msg) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->positions, 0)) {
    skuba_msgs__msg__ArmState__fini(msg);
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->velocities, 0)) {
    skuba_msgs__msg__ArmState__fini(msg);
    return false;
  }
  // efforts
  if (!rosidl_runtime_c__float__Sequence__init(&msg->efforts, 0)) {
    skuba_msgs__msg__ArmState__fini(msg);
    return false;
  }
  // gripper_left_position
  // gripper_right_position
  // is_moving
  // is_error
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    skuba_msgs__msg__ArmState__fini(msg);
    return false;
  }
  return true;
}

void
skuba_msgs__msg__ArmState__fini(skuba_msgs__msg__ArmState * msg)
{
  if (!msg) {
    return;
  }
  // positions
  rosidl_runtime_c__float__Sequence__fini(&msg->positions);
  // velocities
  rosidl_runtime_c__float__Sequence__fini(&msg->velocities);
  // efforts
  rosidl_runtime_c__float__Sequence__fini(&msg->efforts);
  // gripper_left_position
  // gripper_right_position
  // is_moving
  // is_error
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
skuba_msgs__msg__ArmState__are_equal(const skuba_msgs__msg__ArmState * lhs, const skuba_msgs__msg__ArmState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->velocities), &(rhs->velocities)))
  {
    return false;
  }
  // efforts
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->efforts), &(rhs->efforts)))
  {
    return false;
  }
  // gripper_left_position
  if (lhs->gripper_left_position != rhs->gripper_left_position) {
    return false;
  }
  // gripper_right_position
  if (lhs->gripper_right_position != rhs->gripper_right_position) {
    return false;
  }
  // is_moving
  if (lhs->is_moving != rhs->is_moving) {
    return false;
  }
  // is_error
  if (lhs->is_error != rhs->is_error) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
skuba_msgs__msg__ArmState__copy(
  const skuba_msgs__msg__ArmState * input,
  skuba_msgs__msg__ArmState * output)
{
  if (!input || !output) {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // velocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->velocities), &(output->velocities)))
  {
    return false;
  }
  // efforts
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->efforts), &(output->efforts)))
  {
    return false;
  }
  // gripper_left_position
  output->gripper_left_position = input->gripper_left_position;
  // gripper_right_position
  output->gripper_right_position = input->gripper_right_position;
  // is_moving
  output->is_moving = input->is_moving;
  // is_error
  output->is_error = input->is_error;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

skuba_msgs__msg__ArmState *
skuba_msgs__msg__ArmState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__msg__ArmState * msg = (skuba_msgs__msg__ArmState *)allocator.allocate(sizeof(skuba_msgs__msg__ArmState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skuba_msgs__msg__ArmState));
  bool success = skuba_msgs__msg__ArmState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
skuba_msgs__msg__ArmState__destroy(skuba_msgs__msg__ArmState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    skuba_msgs__msg__ArmState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
skuba_msgs__msg__ArmState__Sequence__init(skuba_msgs__msg__ArmState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__msg__ArmState * data = NULL;

  if (size) {
    data = (skuba_msgs__msg__ArmState *)allocator.zero_allocate(size, sizeof(skuba_msgs__msg__ArmState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skuba_msgs__msg__ArmState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skuba_msgs__msg__ArmState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
skuba_msgs__msg__ArmState__Sequence__fini(skuba_msgs__msg__ArmState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      skuba_msgs__msg__ArmState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

skuba_msgs__msg__ArmState__Sequence *
skuba_msgs__msg__ArmState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__msg__ArmState__Sequence * array = (skuba_msgs__msg__ArmState__Sequence *)allocator.allocate(sizeof(skuba_msgs__msg__ArmState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = skuba_msgs__msg__ArmState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
skuba_msgs__msg__ArmState__Sequence__destroy(skuba_msgs__msg__ArmState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    skuba_msgs__msg__ArmState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
skuba_msgs__msg__ArmState__Sequence__are_equal(const skuba_msgs__msg__ArmState__Sequence * lhs, const skuba_msgs__msg__ArmState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!skuba_msgs__msg__ArmState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
skuba_msgs__msg__ArmState__Sequence__copy(
  const skuba_msgs__msg__ArmState__Sequence * input,
  skuba_msgs__msg__ArmState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(skuba_msgs__msg__ArmState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    skuba_msgs__msg__ArmState * data =
      (skuba_msgs__msg__ArmState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!skuba_msgs__msg__ArmState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          skuba_msgs__msg__ArmState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!skuba_msgs__msg__ArmState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
