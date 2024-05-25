// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/ConveyorBeltState.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/conveyor_belt_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__ConveyorBeltState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x12, 0xa0, 0x1f, 0xd6, 0x6a, 0x35, 0x70,
      0x2e, 0x0d, 0xd1, 0x29, 0xdd, 0xdd, 0x49, 0x15,
      0xc5, 0xcd, 0x8a, 0x2d, 0x77, 0x55, 0x1c, 0x37,
      0x02, 0x74, 0x13, 0xe5, 0xa0, 0x72, 0x69, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__ConveyorBeltState__TYPE_NAME[] = "ariac_msgs/msg/ConveyorBeltState";

// Define type names, field names, and default values
static char ariac_msgs__msg__ConveyorBeltState__FIELD_NAME__power[] = "power";
static char ariac_msgs__msg__ConveyorBeltState__FIELD_NAME__enabled[] = "enabled";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__ConveyorBeltState__FIELDS[] = {
  {
    {ariac_msgs__msg__ConveyorBeltState__FIELD_NAME__power, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__ConveyorBeltState__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__ConveyorBeltState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__ConveyorBeltState__TYPE_NAME, 32, 32},
      {ariac_msgs__msg__ConveyorBeltState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Conveyor belt state message\n"
  "\n"
  "float64 power  # power of the belt (percentage, in +Y direction of belt frame)\n"
  "bool enabled  # true if the power of the belt can be modified; false if the belt is stopped";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__ConveyorBeltState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__ConveyorBeltState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 201, 201},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__ConveyorBeltState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__ConveyorBeltState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
