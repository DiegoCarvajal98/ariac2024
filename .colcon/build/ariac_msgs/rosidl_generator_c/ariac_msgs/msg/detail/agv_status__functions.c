// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/agv_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ariac_msgs__msg__AGVStatus__init(ariac_msgs__msg__AGVStatus * msg)
{
  if (!msg) {
    return false;
  }
  // location
  // position
  // velocity
  return true;
}

void
ariac_msgs__msg__AGVStatus__fini(ariac_msgs__msg__AGVStatus * msg)
{
  if (!msg) {
    return;
  }
  // location
  // position
  // velocity
}

bool
ariac_msgs__msg__AGVStatus__are_equal(const ariac_msgs__msg__AGVStatus * lhs, const ariac_msgs__msg__AGVStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // location
  if (lhs->location != rhs->location) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AGVStatus__copy(
  const ariac_msgs__msg__AGVStatus * input,
  ariac_msgs__msg__AGVStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // location
  output->location = input->location;
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  return true;
}

ariac_msgs__msg__AGVStatus *
ariac_msgs__msg__AGVStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AGVStatus * msg = (ariac_msgs__msg__AGVStatus *)allocator.allocate(sizeof(ariac_msgs__msg__AGVStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AGVStatus));
  bool success = ariac_msgs__msg__AGVStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AGVStatus__destroy(ariac_msgs__msg__AGVStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__AGVStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__AGVStatus__Sequence__init(ariac_msgs__msg__AGVStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AGVStatus * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__AGVStatus *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__AGVStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AGVStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AGVStatus__fini(&data[i - 1]);
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
ariac_msgs__msg__AGVStatus__Sequence__fini(ariac_msgs__msg__AGVStatus__Sequence * array)
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
      ariac_msgs__msg__AGVStatus__fini(&array->data[i]);
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

ariac_msgs__msg__AGVStatus__Sequence *
ariac_msgs__msg__AGVStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AGVStatus__Sequence * array = (ariac_msgs__msg__AGVStatus__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__AGVStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AGVStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AGVStatus__Sequence__destroy(ariac_msgs__msg__AGVStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__AGVStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__AGVStatus__Sequence__are_equal(const ariac_msgs__msg__AGVStatus__Sequence * lhs, const ariac_msgs__msg__AGVStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AGVStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AGVStatus__Sequence__copy(
  const ariac_msgs__msg__AGVStatus__Sequence * input,
  ariac_msgs__msg__AGVStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AGVStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__AGVStatus * data =
      (ariac_msgs__msg__AGVStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AGVStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AGVStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__AGVStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
