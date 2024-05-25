// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:srv/VacuumGripperControl.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/vacuum_gripper_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ariac_msgs__srv__VacuumGripperControl_Request__init(ariac_msgs__srv__VacuumGripperControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  return true;
}

void
ariac_msgs__srv__VacuumGripperControl_Request__fini(ariac_msgs__srv__VacuumGripperControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
}

bool
ariac_msgs__srv__VacuumGripperControl_Request__are_equal(const ariac_msgs__srv__VacuumGripperControl_Request * lhs, const ariac_msgs__srv__VacuumGripperControl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Request__copy(
  const ariac_msgs__srv__VacuumGripperControl_Request * input,
  ariac_msgs__srv__VacuumGripperControl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  return true;
}

ariac_msgs__srv__VacuumGripperControl_Request *
ariac_msgs__srv__VacuumGripperControl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Request * msg = (ariac_msgs__srv__VacuumGripperControl_Request *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__VacuumGripperControl_Request));
  bool success = ariac_msgs__srv__VacuumGripperControl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__VacuumGripperControl_Request__destroy(ariac_msgs__srv__VacuumGripperControl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__VacuumGripperControl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__init(ariac_msgs__srv__VacuumGripperControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Request * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__VacuumGripperControl_Request *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__VacuumGripperControl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__VacuumGripperControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__VacuumGripperControl_Request__fini(&data[i - 1]);
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
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__fini(ariac_msgs__srv__VacuumGripperControl_Request__Sequence * array)
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
      ariac_msgs__srv__VacuumGripperControl_Request__fini(&array->data[i]);
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

ariac_msgs__srv__VacuumGripperControl_Request__Sequence *
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence * array = (ariac_msgs__srv__VacuumGripperControl_Request__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__VacuumGripperControl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__destroy(ariac_msgs__srv__VacuumGripperControl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__VacuumGripperControl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__are_equal(const ariac_msgs__srv__VacuumGripperControl_Request__Sequence * lhs, const ariac_msgs__srv__VacuumGripperControl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Request__Sequence__copy(
  const ariac_msgs__srv__VacuumGripperControl_Request__Sequence * input,
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__VacuumGripperControl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__VacuumGripperControl_Request * data =
      (ariac_msgs__srv__VacuumGripperControl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__VacuumGripperControl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__VacuumGripperControl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ariac_msgs__srv__VacuumGripperControl_Response__init(ariac_msgs__srv__VacuumGripperControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
ariac_msgs__srv__VacuumGripperControl_Response__fini(ariac_msgs__srv__VacuumGripperControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
ariac_msgs__srv__VacuumGripperControl_Response__are_equal(const ariac_msgs__srv__VacuumGripperControl_Response * lhs, const ariac_msgs__srv__VacuumGripperControl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Response__copy(
  const ariac_msgs__srv__VacuumGripperControl_Response * input,
  ariac_msgs__srv__VacuumGripperControl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

ariac_msgs__srv__VacuumGripperControl_Response *
ariac_msgs__srv__VacuumGripperControl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Response * msg = (ariac_msgs__srv__VacuumGripperControl_Response *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__VacuumGripperControl_Response));
  bool success = ariac_msgs__srv__VacuumGripperControl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__VacuumGripperControl_Response__destroy(ariac_msgs__srv__VacuumGripperControl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__VacuumGripperControl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__init(ariac_msgs__srv__VacuumGripperControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Response * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__VacuumGripperControl_Response *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__VacuumGripperControl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__VacuumGripperControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__VacuumGripperControl_Response__fini(&data[i - 1]);
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
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__fini(ariac_msgs__srv__VacuumGripperControl_Response__Sequence * array)
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
      ariac_msgs__srv__VacuumGripperControl_Response__fini(&array->data[i]);
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

ariac_msgs__srv__VacuumGripperControl_Response__Sequence *
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence * array = (ariac_msgs__srv__VacuumGripperControl_Response__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__VacuumGripperControl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__destroy(ariac_msgs__srv__VacuumGripperControl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__VacuumGripperControl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__are_equal(const ariac_msgs__srv__VacuumGripperControl_Response__Sequence * lhs, const ariac_msgs__srv__VacuumGripperControl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Response__Sequence__copy(
  const ariac_msgs__srv__VacuumGripperControl_Response__Sequence * input,
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__VacuumGripperControl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__VacuumGripperControl_Response * data =
      (ariac_msgs__srv__VacuumGripperControl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__VacuumGripperControl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__VacuumGripperControl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__functions.h"

bool
ariac_msgs__srv__VacuumGripperControl_Event__init(ariac_msgs__srv__VacuumGripperControl_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ariac_msgs__srv__VacuumGripperControl_Event__fini(msg);
    return false;
  }
  // request
  if (!ariac_msgs__srv__VacuumGripperControl_Request__Sequence__init(&msg->request, 0)) {
    ariac_msgs__srv__VacuumGripperControl_Event__fini(msg);
    return false;
  }
  // response
  if (!ariac_msgs__srv__VacuumGripperControl_Response__Sequence__init(&msg->response, 0)) {
    ariac_msgs__srv__VacuumGripperControl_Event__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__VacuumGripperControl_Event__fini(ariac_msgs__srv__VacuumGripperControl_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence__fini(&msg->request);
  // response
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence__fini(&msg->response);
}

bool
ariac_msgs__srv__VacuumGripperControl_Event__are_equal(const ariac_msgs__srv__VacuumGripperControl_Event * lhs, const ariac_msgs__srv__VacuumGripperControl_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ariac_msgs__srv__VacuumGripperControl_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ariac_msgs__srv__VacuumGripperControl_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Event__copy(
  const ariac_msgs__srv__VacuumGripperControl_Event * input,
  ariac_msgs__srv__VacuumGripperControl_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ariac_msgs__srv__VacuumGripperControl_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ariac_msgs__srv__VacuumGripperControl_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__VacuumGripperControl_Event *
ariac_msgs__srv__VacuumGripperControl_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Event * msg = (ariac_msgs__srv__VacuumGripperControl_Event *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__VacuumGripperControl_Event));
  bool success = ariac_msgs__srv__VacuumGripperControl_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__VacuumGripperControl_Event__destroy(ariac_msgs__srv__VacuumGripperControl_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__VacuumGripperControl_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__init(ariac_msgs__srv__VacuumGripperControl_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Event * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__VacuumGripperControl_Event *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__VacuumGripperControl_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__VacuumGripperControl_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__VacuumGripperControl_Event__fini(&data[i - 1]);
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
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__fini(ariac_msgs__srv__VacuumGripperControl_Event__Sequence * array)
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
      ariac_msgs__srv__VacuumGripperControl_Event__fini(&array->data[i]);
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

ariac_msgs__srv__VacuumGripperControl_Event__Sequence *
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__VacuumGripperControl_Event__Sequence * array = (ariac_msgs__srv__VacuumGripperControl_Event__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__VacuumGripperControl_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__VacuumGripperControl_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__destroy(ariac_msgs__srv__VacuumGripperControl_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__VacuumGripperControl_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__are_equal(const ariac_msgs__srv__VacuumGripperControl_Event__Sequence * lhs, const ariac_msgs__srv__VacuumGripperControl_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__VacuumGripperControl_Event__Sequence__copy(
  const ariac_msgs__srv__VacuumGripperControl_Event__Sequence * input,
  ariac_msgs__srv__VacuumGripperControl_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__VacuumGripperControl_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__VacuumGripperControl_Event * data =
      (ariac_msgs__srv__VacuumGripperControl_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__VacuumGripperControl_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__VacuumGripperControl_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__VacuumGripperControl_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
