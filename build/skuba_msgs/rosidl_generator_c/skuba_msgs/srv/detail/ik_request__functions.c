// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from skuba_msgs:srv/IKRequest.idl
// generated code does not contain a copyright notice
#include "skuba_msgs/srv/detail/ik_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `group_name`
// Member `end_effector_link`
#include "rosidl_runtime_c/string_functions.h"

bool
skuba_msgs__srv__IKRequest_Request__init(skuba_msgs__srv__IKRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__init(&msg->target_pose)) {
    skuba_msgs__srv__IKRequest_Request__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    skuba_msgs__srv__IKRequest_Request__fini(msg);
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__init(&msg->end_effector_link)) {
    skuba_msgs__srv__IKRequest_Request__fini(msg);
    return false;
  }
  return true;
}

void
skuba_msgs__srv__IKRequest_Request__fini(skuba_msgs__srv__IKRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_pose
  geometry_msgs__msg__Pose__fini(&msg->target_pose);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // end_effector_link
  rosidl_runtime_c__String__fini(&msg->end_effector_link);
}

bool
skuba_msgs__srv__IKRequest_Request__are_equal(const skuba_msgs__srv__IKRequest_Request * lhs, const skuba_msgs__srv__IKRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target_pose), &(rhs->target_pose)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->end_effector_link), &(rhs->end_effector_link)))
  {
    return false;
  }
  return true;
}

bool
skuba_msgs__srv__IKRequest_Request__copy(
  const skuba_msgs__srv__IKRequest_Request * input,
  skuba_msgs__srv__IKRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // target_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target_pose), &(output->target_pose)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // end_effector_link
  if (!rosidl_runtime_c__String__copy(
      &(input->end_effector_link), &(output->end_effector_link)))
  {
    return false;
  }
  return true;
}

skuba_msgs__srv__IKRequest_Request *
skuba_msgs__srv__IKRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Request * msg = (skuba_msgs__srv__IKRequest_Request *)allocator.allocate(sizeof(skuba_msgs__srv__IKRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skuba_msgs__srv__IKRequest_Request));
  bool success = skuba_msgs__srv__IKRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
skuba_msgs__srv__IKRequest_Request__destroy(skuba_msgs__srv__IKRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    skuba_msgs__srv__IKRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
skuba_msgs__srv__IKRequest_Request__Sequence__init(skuba_msgs__srv__IKRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Request * data = NULL;

  if (size) {
    data = (skuba_msgs__srv__IKRequest_Request *)allocator.zero_allocate(size, sizeof(skuba_msgs__srv__IKRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skuba_msgs__srv__IKRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skuba_msgs__srv__IKRequest_Request__fini(&data[i - 1]);
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
skuba_msgs__srv__IKRequest_Request__Sequence__fini(skuba_msgs__srv__IKRequest_Request__Sequence * array)
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
      skuba_msgs__srv__IKRequest_Request__fini(&array->data[i]);
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

skuba_msgs__srv__IKRequest_Request__Sequence *
skuba_msgs__srv__IKRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Request__Sequence * array = (skuba_msgs__srv__IKRequest_Request__Sequence *)allocator.allocate(sizeof(skuba_msgs__srv__IKRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = skuba_msgs__srv__IKRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
skuba_msgs__srv__IKRequest_Request__Sequence__destroy(skuba_msgs__srv__IKRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    skuba_msgs__srv__IKRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
skuba_msgs__srv__IKRequest_Request__Sequence__are_equal(const skuba_msgs__srv__IKRequest_Request__Sequence * lhs, const skuba_msgs__srv__IKRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!skuba_msgs__srv__IKRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
skuba_msgs__srv__IKRequest_Request__Sequence__copy(
  const skuba_msgs__srv__IKRequest_Request__Sequence * input,
  skuba_msgs__srv__IKRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(skuba_msgs__srv__IKRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    skuba_msgs__srv__IKRequest_Request * data =
      (skuba_msgs__srv__IKRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!skuba_msgs__srv__IKRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          skuba_msgs__srv__IKRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!skuba_msgs__srv__IKRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
skuba_msgs__srv__IKRequest_Response__init(skuba_msgs__srv__IKRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->joint_positions, 0)) {
    skuba_msgs__srv__IKRequest_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    skuba_msgs__srv__IKRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
skuba_msgs__srv__IKRequest_Response__fini(skuba_msgs__srv__IKRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_positions
  rosidl_runtime_c__float__Sequence__fini(&msg->joint_positions);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
skuba_msgs__srv__IKRequest_Response__are_equal(const skuba_msgs__srv__IKRequest_Response * lhs, const skuba_msgs__srv__IKRequest_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->joint_positions), &(rhs->joint_positions)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
skuba_msgs__srv__IKRequest_Response__copy(
  const skuba_msgs__srv__IKRequest_Response * input,
  skuba_msgs__srv__IKRequest_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_positions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->joint_positions), &(output->joint_positions)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

skuba_msgs__srv__IKRequest_Response *
skuba_msgs__srv__IKRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Response * msg = (skuba_msgs__srv__IKRequest_Response *)allocator.allocate(sizeof(skuba_msgs__srv__IKRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(skuba_msgs__srv__IKRequest_Response));
  bool success = skuba_msgs__srv__IKRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
skuba_msgs__srv__IKRequest_Response__destroy(skuba_msgs__srv__IKRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    skuba_msgs__srv__IKRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
skuba_msgs__srv__IKRequest_Response__Sequence__init(skuba_msgs__srv__IKRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Response * data = NULL;

  if (size) {
    data = (skuba_msgs__srv__IKRequest_Response *)allocator.zero_allocate(size, sizeof(skuba_msgs__srv__IKRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = skuba_msgs__srv__IKRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        skuba_msgs__srv__IKRequest_Response__fini(&data[i - 1]);
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
skuba_msgs__srv__IKRequest_Response__Sequence__fini(skuba_msgs__srv__IKRequest_Response__Sequence * array)
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
      skuba_msgs__srv__IKRequest_Response__fini(&array->data[i]);
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

skuba_msgs__srv__IKRequest_Response__Sequence *
skuba_msgs__srv__IKRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  skuba_msgs__srv__IKRequest_Response__Sequence * array = (skuba_msgs__srv__IKRequest_Response__Sequence *)allocator.allocate(sizeof(skuba_msgs__srv__IKRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = skuba_msgs__srv__IKRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
skuba_msgs__srv__IKRequest_Response__Sequence__destroy(skuba_msgs__srv__IKRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    skuba_msgs__srv__IKRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
skuba_msgs__srv__IKRequest_Response__Sequence__are_equal(const skuba_msgs__srv__IKRequest_Response__Sequence * lhs, const skuba_msgs__srv__IKRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!skuba_msgs__srv__IKRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
skuba_msgs__srv__IKRequest_Response__Sequence__copy(
  const skuba_msgs__srv__IKRequest_Response__Sequence * input,
  skuba_msgs__srv__IKRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(skuba_msgs__srv__IKRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    skuba_msgs__srv__IKRequest_Response * data =
      (skuba_msgs__srv__IKRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!skuba_msgs__srv__IKRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          skuba_msgs__srv__IKRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!skuba_msgs__srv__IKRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
