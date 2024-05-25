// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/part_place_condition__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"
#include "ariac_msgs/msg/detail/part_place_condition__struct.h"


// Include directives for member types
// Member `part`
#include "ariac_msgs/msg/part.h"
// Member `part`
#include "ariac_msgs/msg/detail/part__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__PartPlaceCondition__init(message_memory);
}

void ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_fini_function(void * message_memory)
{
  ariac_msgs__msg__PartPlaceCondition__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_member_array[2] = {
  {
    "part",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__PartPlaceCondition, part),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "agv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__PartPlaceCondition, agv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_members = {
  "ariac_msgs__msg",  // message namespace
  "PartPlaceCondition",  // message name
  2,  // number of fields
  sizeof(ariac_msgs__msg__PartPlaceCondition),
  ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_member_array,  // message members
  ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_type_support_handle = {
  0,
  &ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__PartPlaceCondition__get_type_hash,
  &ariac_msgs__msg__PartPlaceCondition__get_type_description,
  &ariac_msgs__msg__PartPlaceCondition__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, PartPlaceCondition)() {
  ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Part)();
  if (!ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__msg__PartPlaceCondition__rosidl_typesupport_introspection_c__PartPlaceCondition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif