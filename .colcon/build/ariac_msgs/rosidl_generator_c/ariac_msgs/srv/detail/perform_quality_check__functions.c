// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__srv__PerformQualityCheck_Request__init(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    ariac_msgs__srv__PerformQualityCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__fini(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__are_equal(const ariac_msgs__srv__PerformQualityCheck_Request * lhs, const ariac_msgs__srv__PerformQualityCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__copy(
  const ariac_msgs__srv__PerformQualityCheck_Request * input,
  ariac_msgs__srv__PerformQualityCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__PerformQualityCheck_Request *
ariac_msgs__srv__PerformQualityCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Request * msg = (ariac_msgs__srv__PerformQualityCheck_Request *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__PerformQualityCheck_Request));
  bool success = ariac_msgs__srv__PerformQualityCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__destroy(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__PerformQualityCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__init(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Request * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__PerformQualityCheck_Request *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__PerformQualityCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__PerformQualityCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__PerformQualityCheck_Request__fini(&data[i - 1]);
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
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__fini(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array)
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
      ariac_msgs__srv__PerformQualityCheck_Request__fini(&array->data[i]);
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

ariac_msgs__srv__PerformQualityCheck_Request__Sequence *
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array = (ariac_msgs__srv__PerformQualityCheck_Request__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__PerformQualityCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__destroy(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__PerformQualityCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__are_equal(const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * lhs, const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__copy(
  const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * input,
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__PerformQualityCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__PerformQualityCheck_Request * data =
      (ariac_msgs__srv__PerformQualityCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__PerformQualityCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__PerformQualityCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `quadrant1`
// Member `quadrant2`
// Member `quadrant3`
// Member `quadrant4`
#include "ariac_msgs/msg/detail/quality_issue__functions.h"

bool
ariac_msgs__srv__PerformQualityCheck_Response__init(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid_id
  // all_passed
  // incorrect_tray
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant1)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant2)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant3)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant4)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__fini(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid_id
  // all_passed
  // incorrect_tray
  // quadrant1
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant1);
  // quadrant2
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant2);
  // quadrant3
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant3);
  // quadrant4
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant4);
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__are_equal(const ariac_msgs__srv__PerformQualityCheck_Response * lhs, const ariac_msgs__srv__PerformQualityCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid_id
  if (lhs->valid_id != rhs->valid_id) {
    return false;
  }
  // all_passed
  if (lhs->all_passed != rhs->all_passed) {
    return false;
  }
  // incorrect_tray
  if (lhs->incorrect_tray != rhs->incorrect_tray) {
    return false;
  }
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant1), &(rhs->quadrant1)))
  {
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant2), &(rhs->quadrant2)))
  {
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant3), &(rhs->quadrant3)))
  {
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant4), &(rhs->quadrant4)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__copy(
  const ariac_msgs__srv__PerformQualityCheck_Response * input,
  ariac_msgs__srv__PerformQualityCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid_id
  output->valid_id = input->valid_id;
  // all_passed
  output->all_passed = input->all_passed;
  // incorrect_tray
  output->incorrect_tray = input->incorrect_tray;
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant1), &(output->quadrant1)))
  {
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant2), &(output->quadrant2)))
  {
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant3), &(output->quadrant3)))
  {
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant4), &(output->quadrant4)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__PerformQualityCheck_Response *
ariac_msgs__srv__PerformQualityCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Response * msg = (ariac_msgs__srv__PerformQualityCheck_Response *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__PerformQualityCheck_Response));
  bool success = ariac_msgs__srv__PerformQualityCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__destroy(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__init(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Response * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__PerformQualityCheck_Response *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__PerformQualityCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__PerformQualityCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__PerformQualityCheck_Response__fini(&data[i - 1]);
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
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__fini(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array)
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
      ariac_msgs__srv__PerformQualityCheck_Response__fini(&array->data[i]);
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

ariac_msgs__srv__PerformQualityCheck_Response__Sequence *
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array = (ariac_msgs__srv__PerformQualityCheck_Response__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__PerformQualityCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__destroy(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__PerformQualityCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__are_equal(const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * lhs, const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__copy(
  const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * input,
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__PerformQualityCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__PerformQualityCheck_Response * data =
      (ariac_msgs__srv__PerformQualityCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__PerformQualityCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__PerformQualityCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Response__copy(
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
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"

bool
ariac_msgs__srv__PerformQualityCheck_Event__init(ariac_msgs__srv__PerformQualityCheck_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ariac_msgs__srv__PerformQualityCheck_Event__fini(msg);
    return false;
  }
  // request
  if (!ariac_msgs__srv__PerformQualityCheck_Request__Sequence__init(&msg->request, 0)) {
    ariac_msgs__srv__PerformQualityCheck_Event__fini(msg);
    return false;
  }
  // response
  if (!ariac_msgs__srv__PerformQualityCheck_Response__Sequence__init(&msg->response, 0)) {
    ariac_msgs__srv__PerformQualityCheck_Event__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__PerformQualityCheck_Event__fini(ariac_msgs__srv__PerformQualityCheck_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence__fini(&msg->request);
  // response
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence__fini(&msg->response);
}

bool
ariac_msgs__srv__PerformQualityCheck_Event__are_equal(const ariac_msgs__srv__PerformQualityCheck_Event * lhs, const ariac_msgs__srv__PerformQualityCheck_Event * rhs)
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
  if (!ariac_msgs__srv__PerformQualityCheck_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ariac_msgs__srv__PerformQualityCheck_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Event__copy(
  const ariac_msgs__srv__PerformQualityCheck_Event * input,
  ariac_msgs__srv__PerformQualityCheck_Event * output)
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
  if (!ariac_msgs__srv__PerformQualityCheck_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ariac_msgs__srv__PerformQualityCheck_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__PerformQualityCheck_Event *
ariac_msgs__srv__PerformQualityCheck_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Event * msg = (ariac_msgs__srv__PerformQualityCheck_Event *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__PerformQualityCheck_Event));
  bool success = ariac_msgs__srv__PerformQualityCheck_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__PerformQualityCheck_Event__destroy(ariac_msgs__srv__PerformQualityCheck_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ariac_msgs__srv__PerformQualityCheck_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__init(ariac_msgs__srv__PerformQualityCheck_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Event * data = NULL;

  if (size) {
    data = (ariac_msgs__srv__PerformQualityCheck_Event *)allocator.zero_allocate(size, sizeof(ariac_msgs__srv__PerformQualityCheck_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__PerformQualityCheck_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__PerformQualityCheck_Event__fini(&data[i - 1]);
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
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__fini(ariac_msgs__srv__PerformQualityCheck_Event__Sequence * array)
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
      ariac_msgs__srv__PerformQualityCheck_Event__fini(&array->data[i]);
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

ariac_msgs__srv__PerformQualityCheck_Event__Sequence *
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ariac_msgs__srv__PerformQualityCheck_Event__Sequence * array = (ariac_msgs__srv__PerformQualityCheck_Event__Sequence *)allocator.allocate(sizeof(ariac_msgs__srv__PerformQualityCheck_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__PerformQualityCheck_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__destroy(ariac_msgs__srv__PerformQualityCheck_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ariac_msgs__srv__PerformQualityCheck_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__are_equal(const ariac_msgs__srv__PerformQualityCheck_Event__Sequence * lhs, const ariac_msgs__srv__PerformQualityCheck_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Event__Sequence__copy(
  const ariac_msgs__srv__PerformQualityCheck_Event__Sequence * input,
  ariac_msgs__srv__PerformQualityCheck_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__PerformQualityCheck_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ariac_msgs__srv__PerformQualityCheck_Event * data =
      (ariac_msgs__srv__PerformQualityCheck_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__PerformQualityCheck_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__PerformQualityCheck_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
