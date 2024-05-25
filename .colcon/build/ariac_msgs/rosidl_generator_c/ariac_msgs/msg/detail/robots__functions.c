// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/robots__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ariac_msgs__msg__Robots__init(ariac_msgs__msg__Robots * msg)
{
  if (!msg) {
    return false;
  }
  // floor_robot
  // ceiling_robot
  return true;
}

void
ariac_msgs__msg__Robots__fini(ariac_msgs__msg__Robots * msg)
{
  if (!msg) {
    return;
  }
  // floor_robot
  // ceiling_robot
}

bool
ariac_msgs__msg__Robots__are_equal(const ariac_msgs__msg__Robots * lhs, const ariac_msgs__msg__Robots * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // floor_robot
  if (lhs->floor_robot != rhs->floor_robot) {
    return false;
  }
  // ceiling_robot
  if (lhs->ceiling_robot != rhs->ceiling_robot) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Robots__copy(
  const ariac_msgs__msg__Robots * input,
  ariac_msgs__msg__Robots * output)
{
  if (!input || !output) {
    return false;
  }
  // floor_robot
  output->floor_robot = input->floor_robot;
  // ceiling_robot
  output->ceiling_robot = input->ceiling_robot;
  return true;
}

ariac_msgs__msg__Robots *
ariac_msgs__msg__Robots__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Robots * msg = (ariac_msgs__msg__Robots *)allocator.allocate(sizeof(ariac_msgs__msg__Robots), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Robots));
  bool success = ariac_msgs__msg__Robots__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Robots__destroy(ariac_msgs__msg__Robots * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__Robots__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__Robots__Sequence__init(ariac_msgs__msg__Robots__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Robots * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__Robots *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__Robots), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Robots__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Robots__fini(&data[i - 1]);
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
ariac_msgs__msg__Robots__Sequence__fini(ariac_msgs__msg__Robots__Sequence * array)
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
      ariac_msgs__msg__Robots__fini(&array->data[i]);
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

ariac_msgs__msg__Robots__Sequence *
ariac_msgs__msg__Robots__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Robots__Sequence * array = (ariac_msgs__msg__Robots__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__Robots__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Robots__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Robots__Sequence__destroy(ariac_msgs__msg__Robots__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__Robots__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__Robots__Sequence__are_equal(const ariac_msgs__msg__Robots__Sequence * lhs, const ariac_msgs__msg__Robots__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Robots__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Robots__Sequence__copy(
  const ariac_msgs__msg__Robots__Sequence * input,
  ariac_msgs__msg__Robots__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Robots);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__Robots * data =
      (ariac_msgs__msg__Robots *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Robots__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Robots__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__Robots__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
