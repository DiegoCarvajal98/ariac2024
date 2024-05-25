// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/vacuum_gripper_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__msg__VacuumGripperState__init(ariac_msgs__msg__VacuumGripperState * msg)
{
  if (!msg) {
    return false;
  }
  // enabled
  // attached
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    ariac_msgs__msg__VacuumGripperState__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__VacuumGripperState__fini(ariac_msgs__msg__VacuumGripperState * msg)
{
  if (!msg) {
    return;
  }
  // enabled
  // attached
  // type
  rosidl_runtime_c__String__fini(&msg->type);
}

bool
ariac_msgs__msg__VacuumGripperState__are_equal(const ariac_msgs__msg__VacuumGripperState * lhs, const ariac_msgs__msg__VacuumGripperState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // attached
  if (lhs->attached != rhs->attached) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__VacuumGripperState__copy(
  const ariac_msgs__msg__VacuumGripperState * input,
  ariac_msgs__msg__VacuumGripperState * output)
{
  if (!input || !output) {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // attached
  output->attached = input->attached;
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__VacuumGripperState *
ariac_msgs__msg__VacuumGripperState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__VacuumGripperState * msg = (ariac_msgs__msg__VacuumGripperState *)allocator.allocate(sizeof(ariac_msgs__msg__VacuumGripperState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__VacuumGripperState));
  bool success = ariac_msgs__msg__VacuumGripperState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__VacuumGripperState__destroy(ariac_msgs__msg__VacuumGripperState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__VacuumGripperState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__VacuumGripperState__Sequence__init(ariac_msgs__msg__VacuumGripperState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__VacuumGripperState * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__VacuumGripperState *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__VacuumGripperState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__VacuumGripperState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__VacuumGripperState__fini(&data[i - 1]);
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
ariac_msgs__msg__VacuumGripperState__Sequence__fini(ariac_msgs__msg__VacuumGripperState__Sequence * array)
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
      ariac_msgs__msg__VacuumGripperState__fini(&array->data[i]);
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

ariac_msgs__msg__VacuumGripperState__Sequence *
ariac_msgs__msg__VacuumGripperState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__VacuumGripperState__Sequence * array = (ariac_msgs__msg__VacuumGripperState__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__VacuumGripperState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__VacuumGripperState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__VacuumGripperState__Sequence__destroy(ariac_msgs__msg__VacuumGripperState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__VacuumGripperState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__VacuumGripperState__Sequence__are_equal(const ariac_msgs__msg__VacuumGripperState__Sequence * lhs, const ariac_msgs__msg__VacuumGripperState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__VacuumGripperState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__VacuumGripperState__Sequence__copy(
  const ariac_msgs__msg__VacuumGripperState__Sequence * input,
  ariac_msgs__msg__VacuumGripperState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__VacuumGripperState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__VacuumGripperState * data =
      (ariac_msgs__msg__VacuumGripperState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__VacuumGripperState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__VacuumGripperState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__VacuumGripperState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
