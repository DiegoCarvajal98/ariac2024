// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/CombinedTask.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/combined_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/detail/assembly_part__functions.h"

bool
ariac_msgs__msg__CombinedTask__init(ariac_msgs__msg__CombinedTask * msg)
{
  if (!msg) {
    return false;
  }
  // station
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__init(&msg->parts, 0)) {
    ariac_msgs__msg__CombinedTask__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__CombinedTask__fini(ariac_msgs__msg__CombinedTask * msg)
{
  if (!msg) {
    return;
  }
  // station
  // parts
  ariac_msgs__msg__AssemblyPart__Sequence__fini(&msg->parts);
}

bool
ariac_msgs__msg__CombinedTask__are_equal(const ariac_msgs__msg__CombinedTask * lhs, const ariac_msgs__msg__CombinedTask * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // station
  if (lhs->station != rhs->station) {
    return false;
  }
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__are_equal(
      &(lhs->parts), &(rhs->parts)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__CombinedTask__copy(
  const ariac_msgs__msg__CombinedTask * input,
  ariac_msgs__msg__CombinedTask * output)
{
  if (!input || !output) {
    return false;
  }
  // station
  output->station = input->station;
  // parts
  if (!ariac_msgs__msg__AssemblyPart__Sequence__copy(
      &(input->parts), &(output->parts)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__CombinedTask *
ariac_msgs__msg__CombinedTask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__CombinedTask * msg = (ariac_msgs__msg__CombinedTask *)allocator.allocate(sizeof(ariac_msgs__msg__CombinedTask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__CombinedTask));
  bool success = ariac_msgs__msg__CombinedTask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__CombinedTask__destroy(ariac_msgs__msg__CombinedTask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__CombinedTask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__CombinedTask__Sequence__init(ariac_msgs__msg__CombinedTask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__CombinedTask * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__CombinedTask *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__CombinedTask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__CombinedTask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__CombinedTask__fini(&data[i - 1]);
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
ariac_msgs__msg__CombinedTask__Sequence__fini(ariac_msgs__msg__CombinedTask__Sequence * array)
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
      ariac_msgs__msg__CombinedTask__fini(&array->data[i]);
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

ariac_msgs__msg__CombinedTask__Sequence *
ariac_msgs__msg__CombinedTask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__CombinedTask__Sequence * array = (ariac_msgs__msg__CombinedTask__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__CombinedTask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__CombinedTask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__CombinedTask__Sequence__destroy(ariac_msgs__msg__CombinedTask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__CombinedTask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__CombinedTask__Sequence__are_equal(const ariac_msgs__msg__CombinedTask__Sequence * lhs, const ariac_msgs__msg__CombinedTask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__CombinedTask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__CombinedTask__Sequence__copy(
  const ariac_msgs__msg__CombinedTask__Sequence * input,
  ariac_msgs__msg__CombinedTask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__CombinedTask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__CombinedTask * data =
      (ariac_msgs__msg__CombinedTask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__CombinedTask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__CombinedTask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__CombinedTask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
