// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_H_
#define ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'order_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PerformQualityCheck in the package ariac_msgs.
typedef struct ariac_msgs__srv__PerformQualityCheck_Request
{
  rosidl_runtime_c__String order_id;
} ariac_msgs__srv__PerformQualityCheck_Request;

// Struct for a sequence of ariac_msgs__srv__PerformQualityCheck_Request.
typedef struct ariac_msgs__srv__PerformQualityCheck_Request__Sequence
{
  ariac_msgs__srv__PerformQualityCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__PerformQualityCheck_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'quadrant1'
// Member 'quadrant2'
// Member 'quadrant3'
// Member 'quadrant4'
#include "ariac_msgs/msg/detail/quality_issue__struct.h"

/// Struct defined in srv/PerformQualityCheck in the package ariac_msgs.
typedef struct ariac_msgs__srv__PerformQualityCheck_Response
{
  bool valid_id;
  bool all_passed;
  bool incorrect_tray;
  ariac_msgs__msg__QualityIssue quadrant1;
  ariac_msgs__msg__QualityIssue quadrant2;
  ariac_msgs__msg__QualityIssue quadrant3;
  ariac_msgs__msg__QualityIssue quadrant4;
} ariac_msgs__srv__PerformQualityCheck_Response;

// Struct for a sequence of ariac_msgs__srv__PerformQualityCheck_Response.
typedef struct ariac_msgs__srv__PerformQualityCheck_Response__Sequence
{
  ariac_msgs__srv__PerformQualityCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__PerformQualityCheck_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ariac_msgs__srv__PerformQualityCheck_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ariac_msgs__srv__PerformQualityCheck_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PerformQualityCheck in the package ariac_msgs.
typedef struct ariac_msgs__srv__PerformQualityCheck_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence request;
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence response;
} ariac_msgs__srv__PerformQualityCheck_Event;

// Struct for a sequence of ariac_msgs__srv__PerformQualityCheck_Event.
typedef struct ariac_msgs__srv__PerformQualityCheck_Event__Sequence
{
  ariac_msgs__srv__PerformQualityCheck_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__srv__PerformQualityCheck_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__STRUCT_H_
