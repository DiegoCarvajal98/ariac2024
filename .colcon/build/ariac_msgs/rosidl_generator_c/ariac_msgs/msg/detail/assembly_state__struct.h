// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/AssemblyState in the package ariac_msgs.
/**
  * Assembly state message
  * This structure contains the state of each assembly slot for a given model
 */
typedef struct ariac_msgs__msg__AssemblyState
{
  bool battery_attached;
  bool pump_attached;
  bool regulator_attached;
  bool sensor_attached;
} ariac_msgs__msg__AssemblyState;

// Struct for a sequence of ariac_msgs__msg__AssemblyState.
typedef struct ariac_msgs__msg__AssemblyState__Sequence
{
  ariac_msgs__msg__AssemblyState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__AssemblyState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_STATE__STRUCT_H_
