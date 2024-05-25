// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:srv/VacuumGripperControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/srv/detail/vacuum_gripper_control__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/srv/detail/vacuum_gripper_control__functions.h"
#include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__VacuumGripperControl_Request__init(message_memory);
}

void ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_fini_function(void * message_memory)
{
  ariac_msgs__srv__VacuumGripperControl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_member_array[1] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__VacuumGripperControl_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_members = {
  "ariac_msgs__srv",  // message namespace
  "VacuumGripperControl_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__VacuumGripperControl_Request),
  ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_member_array,  // message members
  ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle = {
  0,
  &ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__VacuumGripperControl_Request__get_type_hash,
  &ariac_msgs__srv__VacuumGripperControl_Request__get_type_description,
  &ariac_msgs__srv__VacuumGripperControl_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Request)() {
  if (!ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__VacuumGripperControl_Response__init(message_memory);
}

void ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_fini_function(void * message_memory)
{
  ariac_msgs__srv__VacuumGripperControl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__VacuumGripperControl_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_members = {
  "ariac_msgs__srv",  // message namespace
  "VacuumGripperControl_Response",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__VacuumGripperControl_Response),
  ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_member_array,  // message members
  ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle = {
  0,
  &ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__VacuumGripperControl_Response__get_type_hash,
  &ariac_msgs__srv__VacuumGripperControl_Response__get_type_description,
  &ariac_msgs__srv__VacuumGripperControl_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Response)() {
  if (!ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ariac_msgs/srv/vacuum_gripper_control.h"
// Member `request`
// Member `response`
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__VacuumGripperControl_Event__init(message_memory);
}

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_fini_function(void * message_memory)
{
  ariac_msgs__srv__VacuumGripperControl_Event__fini(message_memory);
}

size_t ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__size_function__VacuumGripperControl_Event__request(
  const void * untyped_member)
{
  const ariac_msgs__srv__VacuumGripperControl_Request__Sequence * member =
    (const ariac_msgs__srv__VacuumGripperControl_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__request(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__srv__VacuumGripperControl_Request__Sequence * member =
    (const ariac_msgs__srv__VacuumGripperControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__request(
  void * untyped_member, size_t index)
{
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence * member =
    (ariac_msgs__srv__VacuumGripperControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__fetch_function__VacuumGripperControl_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__srv__VacuumGripperControl_Request * item =
    ((const ariac_msgs__srv__VacuumGripperControl_Request *)
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__request(untyped_member, index));
  ariac_msgs__srv__VacuumGripperControl_Request * value =
    (ariac_msgs__srv__VacuumGripperControl_Request *)(untyped_value);
  *value = *item;
}

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__assign_function__VacuumGripperControl_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__srv__VacuumGripperControl_Request * item =
    ((ariac_msgs__srv__VacuumGripperControl_Request *)
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__request(untyped_member, index));
  const ariac_msgs__srv__VacuumGripperControl_Request * value =
    (const ariac_msgs__srv__VacuumGripperControl_Request *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__resize_function__VacuumGripperControl_Event__request(
  void * untyped_member, size_t size)
{
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence * member =
    (ariac_msgs__srv__VacuumGripperControl_Request__Sequence *)(untyped_member);
  ariac_msgs__srv__VacuumGripperControl_Request__Sequence__fini(member);
  return ariac_msgs__srv__VacuumGripperControl_Request__Sequence__init(member, size);
}

size_t ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__size_function__VacuumGripperControl_Event__response(
  const void * untyped_member)
{
  const ariac_msgs__srv__VacuumGripperControl_Response__Sequence * member =
    (const ariac_msgs__srv__VacuumGripperControl_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__response(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__srv__VacuumGripperControl_Response__Sequence * member =
    (const ariac_msgs__srv__VacuumGripperControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__response(
  void * untyped_member, size_t index)
{
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence * member =
    (ariac_msgs__srv__VacuumGripperControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__fetch_function__VacuumGripperControl_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__srv__VacuumGripperControl_Response * item =
    ((const ariac_msgs__srv__VacuumGripperControl_Response *)
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__response(untyped_member, index));
  ariac_msgs__srv__VacuumGripperControl_Response * value =
    (ariac_msgs__srv__VacuumGripperControl_Response *)(untyped_value);
  *value = *item;
}

void ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__assign_function__VacuumGripperControl_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__srv__VacuumGripperControl_Response * item =
    ((ariac_msgs__srv__VacuumGripperControl_Response *)
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__response(untyped_member, index));
  const ariac_msgs__srv__VacuumGripperControl_Response * value =
    (const ariac_msgs__srv__VacuumGripperControl_Response *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__resize_function__VacuumGripperControl_Event__response(
  void * untyped_member, size_t size)
{
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence * member =
    (ariac_msgs__srv__VacuumGripperControl_Response__Sequence *)(untyped_member);
  ariac_msgs__srv__VacuumGripperControl_Response__Sequence__fini(member);
  return ariac_msgs__srv__VacuumGripperControl_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__VacuumGripperControl_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs__srv__VacuumGripperControl_Event, request),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__size_function__VacuumGripperControl_Event__request,  // size() function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__request,  // get_const(index) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__request,  // get(index) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__fetch_function__VacuumGripperControl_Event__request,  // fetch(index, &value) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__assign_function__VacuumGripperControl_Event__request,  // assign(index, value) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__resize_function__VacuumGripperControl_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ariac_msgs__srv__VacuumGripperControl_Event, response),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__size_function__VacuumGripperControl_Event__response,  // size() function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_const_function__VacuumGripperControl_Event__response,  // get_const(index) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__get_function__VacuumGripperControl_Event__response,  // get(index) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__fetch_function__VacuumGripperControl_Event__response,  // fetch(index, &value) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__assign_function__VacuumGripperControl_Event__response,  // assign(index, value) function pointer
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__resize_function__VacuumGripperControl_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_members = {
  "ariac_msgs__srv",  // message namespace
  "VacuumGripperControl_Event",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__srv__VacuumGripperControl_Event),
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_member_array,  // message members
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_type_support_handle = {
  0,
  &ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__srv__VacuumGripperControl_Event__get_type_hash,
  &ariac_msgs__srv__VacuumGripperControl_Event__get_type_description,
  &ariac_msgs__srv__VacuumGripperControl_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Event)() {
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Request)();
  ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Response)();
  if (!ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/vacuum_gripper_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_members = {
  "ariac_msgs__srv",  // service namespace
  "VacuumGripperControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle,
  NULL,  // response message
  // ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle
  NULL  // event_message
  // ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle
};


static rosidl_service_type_support_t ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_type_support_handle = {
  0,
  &ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_members,
  get_service_typesupport_handle_function,
  &ariac_msgs__srv__VacuumGripperControl_Request__rosidl_typesupport_introspection_c__VacuumGripperControl_Request_message_type_support_handle,
  &ariac_msgs__srv__VacuumGripperControl_Response__rosidl_typesupport_introspection_c__VacuumGripperControl_Response_message_type_support_handle,
  &ariac_msgs__srv__VacuumGripperControl_Event__rosidl_typesupport_introspection_c__VacuumGripperControl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ariac_msgs,
    srv,
    VacuumGripperControl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ariac_msgs,
    srv,
    VacuumGripperControl
  ),
  &ariac_msgs__srv__VacuumGripperControl__get_type_hash,
  &ariac_msgs__srv__VacuumGripperControl__get_type_description,
  &ariac_msgs__srv__VacuumGripperControl__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl)() {
  if (!ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, VacuumGripperControl_Event)()->data;
  }

  return &ariac_msgs__srv__detail__vacuum_gripper_control__rosidl_typesupport_introspection_c__VacuumGripperControl_service_type_support_handle;
}
