// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"
// Member `part_to_drop`
#include "ariac_msgs/msg/detail/part__functions.h"

bool
ariac_msgs__msg__DroppedPartChallenge__init(ariac_msgs__msg__DroppedPartChallenge * msg)
{
  if (!msg) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    ariac_msgs__msg__DroppedPartChallenge__fini(msg);
    return false;
  }
  // part_to_drop
  if (!ariac_msgs__msg__Part__init(&msg->part_to_drop)) {
    ariac_msgs__msg__DroppedPartChallenge__fini(msg);
    return false;
  }
  // drop_after_num
  // drop_after_time
  return true;
}

void
ariac_msgs__msg__DroppedPartChallenge__fini(ariac_msgs__msg__DroppedPartChallenge * msg)
{
  if (!msg) {
    return;
  }
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
  // part_to_drop
  ariac_msgs__msg__Part__fini(&msg->part_to_drop);
  // drop_after_num
  // drop_after_time
}

bool
ariac_msgs__msg__DroppedPartChallenge__are_equal(const ariac_msgs__msg__DroppedPartChallenge * lhs, const ariac_msgs__msg__DroppedPartChallenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  // part_to_drop
  if (!ariac_msgs__msg__Part__are_equal(
      &(lhs->part_to_drop), &(rhs->part_to_drop)))
  {
    return false;
  }
  // drop_after_num
  if (lhs->drop_after_num != rhs->drop_after_num) {
    return false;
  }
  // drop_after_time
  if (lhs->drop_after_time != rhs->drop_after_time) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__DroppedPartChallenge__copy(
  const ariac_msgs__msg__DroppedPartChallenge * input,
  ariac_msgs__msg__DroppedPartChallenge * output)
{
  if (!input || !output) {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  // part_to_drop
  if (!ariac_msgs__msg__Part__copy(
      &(input->part_to_drop), &(output->part_to_drop)))
  {
    return false;
  }
  // drop_after_num
  output->drop_after_num = input->drop_after_num;
  // drop_after_time
  output->drop_after_time = input->drop_after_time;
  return true;
}

ariac_msgs__msg__DroppedPartChallenge *
ariac_msgs__msg__DroppedPartChallenge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__DroppedPartChallenge * msg = (ariac_msgs__msg__DroppedPartChallenge *)allocator.allocate(sizeof(ariac_msgs__msg__DroppedPartChallenge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__DroppedPartChallenge));
  bool success = ariac_msgs__msg__DroppedPartChallenge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__DroppedPartChallenge__destroy(ariac_msgs__msg__DroppedPartChallenge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__DroppedPartChallenge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__DroppedPartChallenge__Sequence__init(ariac_msgs__msg__DroppedPartChallenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__DroppedPartChallenge * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__DroppedPartChallenge *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__DroppedPartChallenge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__DroppedPartChallenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__DroppedPartChallenge__fini(&data[i - 1]);
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
ariac_msgs__msg__DroppedPartChallenge__Sequence__fini(ariac_msgs__msg__DroppedPartChallenge__Sequence * array)
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
      ariac_msgs__msg__DroppedPartChallenge__fini(&array->data[i]);
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

ariac_msgs__msg__DroppedPartChallenge__Sequence *
ariac_msgs__msg__DroppedPartChallenge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__DroppedPartChallenge__Sequence * array = (ariac_msgs__msg__DroppedPartChallenge__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__DroppedPartChallenge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__DroppedPartChallenge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__DroppedPartChallenge__Sequence__destroy(ariac_msgs__msg__DroppedPartChallenge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__DroppedPartChallenge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__DroppedPartChallenge__Sequence__are_equal(const ariac_msgs__msg__DroppedPartChallenge__Sequence * lhs, const ariac_msgs__msg__DroppedPartChallenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__DroppedPartChallenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__DroppedPartChallenge__Sequence__copy(
  const ariac_msgs__msg__DroppedPartChallenge__Sequence * input,
  ariac_msgs__msg__DroppedPartChallenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__DroppedPartChallenge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__DroppedPartChallenge * data =
      (ariac_msgs__msg__DroppedPartChallenge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__DroppedPartChallenge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__DroppedPartChallenge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__DroppedPartChallenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
