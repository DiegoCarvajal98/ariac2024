// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/advanced_logical_camera_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `part_poses`
#include "ariac_msgs/msg/detail/part_pose__functions.h"
// Member `tray_poses`
#include "ariac_msgs/msg/detail/kit_tray_pose__functions.h"
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__init(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__init(&msg->part_poses, 0)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__init(&msg->tray_poses, 0)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__init(&msg->sensor_pose)) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__fini(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // part_poses
  ariac_msgs__msg__PartPose__Sequence__fini(&msg->part_poses);
  // tray_poses
  ariac_msgs__msg__KitTrayPose__Sequence__fini(&msg->tray_poses);
  // sensor_pose
  geometry_msgs__msg__Pose__fini(&msg->sensor_pose);
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__are_equal(const ariac_msgs__msg__AdvancedLogicalCameraImage * lhs, const ariac_msgs__msg__AdvancedLogicalCameraImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__are_equal(
      &(lhs->part_poses), &(rhs->part_poses)))
  {
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__are_equal(
      &(lhs->tray_poses), &(rhs->tray_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->sensor_pose), &(rhs->sensor_pose)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__copy(
  const ariac_msgs__msg__AdvancedLogicalCameraImage * input,
  ariac_msgs__msg__AdvancedLogicalCameraImage * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // part_poses
  if (!ariac_msgs__msg__PartPose__Sequence__copy(
      &(input->part_poses), &(output->part_poses)))
  {
    return false;
  }
  // tray_poses
  if (!ariac_msgs__msg__KitTrayPose__Sequence__copy(
      &(input->tray_poses), &(output->tray_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->sensor_pose), &(output->sensor_pose)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__AdvancedLogicalCameraImage *
ariac_msgs__msg__AdvancedLogicalCameraImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AdvancedLogicalCameraImage * msg = (ariac_msgs__msg__AdvancedLogicalCameraImage *)allocator.allocate(sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage));
  bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__destroy(ariac_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AdvancedLogicalCameraImage * data = NULL;

  if (size) {
    data = (ariac_msgs__msg__AdvancedLogicalCameraImage *)allocator.zero_allocate(size, sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&data[i - 1]);
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
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
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
      ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&array->data[i]);
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

ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence *
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array = (ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence *)allocator.allocate(sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__destroy(ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__are_equal(const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * lhs, const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__AdvancedLogicalCameraImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence__copy(
  const ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * input,
  ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__AdvancedLogicalCameraImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__msg__AdvancedLogicalCameraImage * data =
      (ariac_msgs__msg__AdvancedLogicalCameraImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__AdvancedLogicalCameraImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__AdvancedLogicalCameraImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__AdvancedLogicalCameraImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
