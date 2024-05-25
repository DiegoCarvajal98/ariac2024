// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Condition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_condition`
#include "ariac_msgs/msg/detail/time_condition__functions.h"
// Member `part_place_condition`
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"
// Member `submission_condition`
#include "ariac_msgs/msg/detail/submission_condition__functions.h"

bool
ariac_msgs__msg__Condition__init(ariac_msgs__msg__Condition * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__init(&msg->time_condition)) {
    ariac_msgs__msg__Condition__fini(msg);
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__init(&msg->part_place_condition)) {
    ariac_msgs__msg__Condition__fini(msg);
    return false;
  }
  // submission_condition
  if (!ariac_msgs__msg__SubmissionCondition__init(&msg->submission_condition)) {
    ariac_msgs__msg__Condition__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__Condition__fini(ariac_msgs__msg__Condition * msg)
{
  if (!msg) {
    return;
  }
  // type
  // time_condition
  ariac_msgs__msg__TimeCondition__fini(&msg->time_condition);
  // part_place_condition
  ariac_msgs__msg__PartPlaceCondition__fini(&msg->part_place_condition);
  // submission_condition
  ariac_msgs__msg__SubmissionCondition__fini(&msg->submission_condition);
}

bool
ariac_msgs__msg__Condition__are_equal(const ariac_msgs__msg__Condition * lhs, const ariac_msgs__msg__Condition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__are_equal(
      &(lhs->time_condition), &(rhs->time_condition)))
  {
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__are_equal(
      &(lhs->part_place_condition), &(rhs->part_place_condition)))
  {
    return false;
  }
  // submission_condition
  if (!ariac_msgs__msg__SubmissionCondition__are_equal(
      &(lhs->submission_condition), &(rhs->submission_condition)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Condition__copy(
  const ariac_msgs__msg__Condition * input,
  ariac_msgs__msg__Condition * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // time_condition
  if (!ariac_msgs__msg__TimeCondition__copy(
      &(input->time_condition), &(output->time_condition)))
  {
    return false;
  }
  // part_place_condition
  if (!ariac_msgs__msg__PartPlaceCondition__copy(
      &(input->part_place_condition), &(output->part_place_condition)))
  {
    return false;
  }
  // submission_condition
  if (!ariac_msgs__msg__SubmissionCondition__copy(
      &(input->submission_condition), &(output->submission_condition)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__Condition *
ariac_msgs__msg__Condition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Condition * msg = (ariac_msgs__msg__Condition *)allocator.allocate(sizeof(ariac_msgs__msg__Condition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Condition));
  bool success = ariac_msgs__msg__Condition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Condition__destroy(ariac_msgs__msg__Condition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__Condition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__Condition__Sequence__init(ariac_msgs__msg__Condition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Condition * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__Condition *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__Condition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Condition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Condition__fini(&data[i - 1]);
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
ariac_msgs__msg__Condition__Sequence__fini(ariac_msgs__msg__Condition__Sequence * array)
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
      ariac_msgs__msg__Condition__fini(&array->data[i]);
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

ariac_msgs__msg__Condition__Sequence *
ariac_msgs__msg__Condition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Condition__Sequence * array = (ariac_msgs__msg__Condition__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__Condition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Condition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Condition__Sequence__destroy(ariac_msgs__msg__Condition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__Condition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__Condition__Sequence__are_equal(const ariac_msgs__msg__Condition__Sequence * lhs, const ariac_msgs__msg__Condition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Condition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Condition__Sequence__copy(
  const ariac_msgs__msg__Condition__Sequence * input,
  ariac_msgs__msg__Condition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Condition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__Condition * data =
      (ariac_msgs__msg__Condition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Condition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Condition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__Condition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
