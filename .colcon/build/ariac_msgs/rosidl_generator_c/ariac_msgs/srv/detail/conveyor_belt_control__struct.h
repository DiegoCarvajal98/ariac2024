// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:srv/ConveyorBeltControl.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__STRUCT_H_
#define ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ConveyorBeltControl in the package ariac_msgs.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Request
{
  /// desired conveyor belt power
  double power;
} ariac_msgs__srv__ConveyorBeltControl_Request;

// Struct for a sequence of ariac_msgs__srv__ConveyorBeltControl_Request.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Request__Sequence
{
  ariac_msgs__srv__ConveyorBeltControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__ConveyorBeltControl_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ConveyorBeltControl in the package ariac_msgs.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Response
{
  bool success;
} ariac_msgs__srv__ConveyorBeltControl_Response;

// Struct for a sequence of ariac_msgs__srv__ConveyorBeltControl_Response.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Response__Sequence
{
  ariac_msgs__srv__ConveyorBeltControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__ConveyorBeltControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ariac_msgs__srv__ConveyorBeltControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ariac_msgs__srv__ConveyorBeltControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ConveyorBeltControl in the package ariac_msgs.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ariac_msgs__srv__ConveyorBeltControl_Request__Sequence request;
  ariac_msgs__srv__ConveyorBeltControl_Response__Sequence response;
} ariac_msgs__srv__ConveyorBeltControl_Event;

// Struct for a sequence of ariac_msgs__srv__ConveyorBeltControl_Event.
typedef struct ariac_msgs__srv__ConveyorBeltControl_Event__Sequence
{
  ariac_msgs__srv__ConveyorBeltControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__ConveyorBeltControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__STRUCT_H_
