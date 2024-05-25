// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/challenge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `faulty_part_challenge`
#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"
// Member `dropped_part_challenge`
#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"
// Member `sensor_blackout_challenge`
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"
// Member `robot_malfunction_challenge`
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__functions.h"

bool
ariac_msgs__msg__Challenge__init(ariac_msgs__msg__Challenge * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__init(&msg->faulty_part_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__init(&msg->dropped_part_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__init(&msg->sensor_blackout_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__init(&msg->robot_malfunction_challenge)) {
    ariac_msgs__msg__Challenge__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__Challenge__fini(ariac_msgs__msg__Challenge * msg)
{
  if (!msg) {
    return;
  }
  // type
  // faulty_part_challenge
  ariac_msgs__msg__FaultyPartChallenge__fini(&msg->faulty_part_challenge);
  // dropped_part_challenge
  ariac_msgs__msg__DroppedPartChallenge__fini(&msg->dropped_part_challenge);
  // sensor_blackout_challenge
  ariac_msgs__msg__SensorBlackoutChallenge__fini(&msg->sensor_blackout_challenge);
  // robot_malfunction_challenge
  ariac_msgs__msg__RobotMalfunctionChallenge__fini(&msg->robot_malfunction_challenge);
}

bool
ariac_msgs__msg__Challenge__are_equal(const ariac_msgs__msg__Challenge * lhs, const ariac_msgs__msg__Challenge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__are_equal(
      &(lhs->faulty_part_challenge), &(rhs->faulty_part_challenge)))
  {
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__are_equal(
      &(lhs->dropped_part_challenge), &(rhs->dropped_part_challenge)))
  {
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__are_equal(
      &(lhs->sensor_blackout_challenge), &(rhs->sensor_blackout_challenge)))
  {
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__are_equal(
      &(lhs->robot_malfunction_challenge), &(rhs->robot_malfunction_challenge)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__Challenge__copy(
  const ariac_msgs__msg__Challenge * input,
  ariac_msgs__msg__Challenge * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // faulty_part_challenge
  if (!ariac_msgs__msg__FaultyPartChallenge__copy(
      &(input->faulty_part_challenge), &(output->faulty_part_challenge)))
  {
    return false;
  }
  // dropped_part_challenge
  if (!ariac_msgs__msg__DroppedPartChallenge__copy(
      &(input->dropped_part_challenge), &(output->dropped_part_challenge)))
  {
    return false;
  }
  // sensor_blackout_challenge
  if (!ariac_msgs__msg__SensorBlackoutChallenge__copy(
      &(input->sensor_blackout_challenge), &(output->sensor_blackout_challenge)))
  {
    return false;
  }
  // robot_malfunction_challenge
  if (!ariac_msgs__msg__RobotMalfunctionChallenge__copy(
      &(input->robot_malfunction_challenge), &(output->robot_malfunction_challenge)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__Challenge *
ariac_msgs__msg__Challenge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Challenge * msg = (ariac_msgs__msg__Challenge *)allocator.allocate(sizeof(ariac_msgs__msg__Challenge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__Challenge));
  bool success = ariac_msgs__msg__Challenge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__Challenge__destroy(ariac_msgs__msg__Challenge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__Challenge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__Challenge__Sequence__init(ariac_msgs__msg__Challenge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Challenge * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__Challenge *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__Challenge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__Challenge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__Challenge__fini(&data[i - 1]);
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
ariac_msgs__msg__Challenge__Sequence__fini(ariac_msgs__msg__Challenge__Sequence * array)
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
      ariac_msgs__msg__Challenge__fini(&array->data[i]);
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

ariac_msgs__msg__Challenge__Sequence *
ariac_msgs__msg__Challenge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__Challenge__Sequence * array = (ariac_msgs__msg__Challenge__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__Challenge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__Challenge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__Challenge__Sequence__destroy(ariac_msgs__msg__Challenge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__Challenge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__Challenge__Sequence__are_equal(const ariac_msgs__msg__Challenge__Sequence * lhs, const ariac_msgs__msg__Challenge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__Challenge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__Challenge__Sequence__copy(
  const ariac_msgs__msg__Challenge__Sequence * input,
  ariac_msgs__msg__Challenge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__Challenge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__Challenge * data =
      (ariac_msgs__msg__Challenge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__Challenge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__Challenge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__Challenge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
