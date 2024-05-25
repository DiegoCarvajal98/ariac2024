// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/ConveyorParts.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/conveyor_parts__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/conveyor_parts__functions.h"
#include "ariac_msgs/msg/detail/conveyor_parts__struct.h"


// Include directives for member types
// Member `parts`
#include "ariac_msgs/msg/part_lot.h"
// Member `parts`
#include "ariac_msgs/msg/detail/part_lot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__ConveyorParts__init(message_memory);
}

void ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_fini_function(void * message_memory)
{
  ariac_msgs__msg__ConveyorParts__fini(message_memory);
}

size_t ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__size_function__ConveyorParts__parts(
  const void * untyped_member)
{
  const ariac_msgs__msg__PartLot__Sequence * member =
    (const ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return member->size;
}

const void * ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_const_function__ConveyorParts__parts(
  const void * untyped_member, size_t index)
{
  const ariac_msgs__msg__PartLot__Sequence * member =
    (const ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_function__ConveyorParts__parts(
  void * untyped_member, size_t index)
{
  ariac_msgs__msg__PartLot__Sequence * member =
    (ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  return &member->data[index];
}

void ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__fetch_function__ConveyorParts__parts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ariac_msgs__msg__PartLot * item =
    ((const ariac_msgs__msg__PartLot *)
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_const_function__ConveyorParts__parts(untyped_member, index));
  ariac_msgs__msg__PartLot * value =
    (ariac_msgs__msg__PartLot *)(untyped_value);
  *value = *item;
}

void ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__assign_function__ConveyorParts__parts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ariac_msgs__msg__PartLot * item =
    ((ariac_msgs__msg__PartLot *)
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_function__ConveyorParts__parts(untyped_member, index));
  const ariac_msgs__msg__PartLot * value =
    (const ariac_msgs__msg__PartLot *)(untyped_value);
  *item = *value;
}

bool ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__resize_function__ConveyorParts__parts(
  void * untyped_member, size_t size)
{
  ariac_msgs__msg__PartLot__Sequence * member =
    (ariac_msgs__msg__PartLot__Sequence *)(untyped_member);
  ariac_msgs__msg__PartLot__Sequence__fini(member);
  return ariac_msgs__msg__PartLot__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_member_array[1] = {
  {
    "parts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__ConveyorParts, parts),  // bytes offset in struct
    NULL,  // default value
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__size_function__ConveyorParts__parts,  // size() function pointer
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_const_function__ConveyorParts__parts,  // get_const(index) function pointer
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__get_function__ConveyorParts__parts,  // get(index) function pointer
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__fetch_function__ConveyorParts__parts,  // fetch(index, &value) function pointer
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__assign_function__ConveyorParts__parts,  // assign(index, value) function pointer
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__resize_function__ConveyorParts__parts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_members = {
  "ariac_msgs__msg",  // message namespace
  "ConveyorParts",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__msg__ConveyorParts),
  ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_member_array,  // message members
  ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_init_function,  // function to initialize message memory (memory has to be allocated)
  ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_type_support_handle = {
  0,
  &ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_members,
  get_message_typesupport_handle_function,
  &ariac_msgs__msg__ConveyorParts__get_type_hash,
  &ariac_msgs__msg__ConveyorParts__get_type_description,
  &ariac_msgs__msg__ConveyorParts__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, ConveyorParts)() {
  ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, PartLot)();
  if (!ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_type_support_handle.typesupport_identifier) {
    ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ariac_msgs__msg__ConveyorParts__rosidl_typesupport_introspection_c__ConveyorParts_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
