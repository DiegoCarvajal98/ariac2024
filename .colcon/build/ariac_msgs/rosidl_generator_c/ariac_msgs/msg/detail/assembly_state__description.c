// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/AssemblyState.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/assembly_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__AssemblyState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x77, 0x85, 0x60, 0x01, 0xc3, 0x5e, 0x12, 0x5f,
      0x61, 0x01, 0x55, 0x9f, 0xaa, 0x4c, 0x23, 0x38,
      0x64, 0x22, 0x56, 0x05, 0x62, 0x63, 0x23, 0x9e,
      0xc8, 0xa3, 0xf4, 0xa7, 0x4d, 0x66, 0xec, 0xef,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__AssemblyState__TYPE_NAME[] = "ariac_msgs/msg/AssemblyState";

// Define type names, field names, and default values
static char ariac_msgs__msg__AssemblyState__FIELD_NAME__battery_attached[] = "battery_attached";
static char ariac_msgs__msg__AssemblyState__FIELD_NAME__pump_attached[] = "pump_attached";
static char ariac_msgs__msg__AssemblyState__FIELD_NAME__regulator_attached[] = "regulator_attached";
static char ariac_msgs__msg__AssemblyState__FIELD_NAME__sensor_attached[] = "sensor_attached";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__AssemblyState__FIELDS[] = {
  {
    {ariac_msgs__msg__AssemblyState__FIELD_NAME__battery_attached, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyState__FIELD_NAME__pump_attached, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyState__FIELD_NAME__regulator_attached, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyState__FIELD_NAME__sensor_attached, 15, 15},
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
ariac_msgs__msg__AssemblyState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__AssemblyState__TYPE_NAME, 28, 28},
      {ariac_msgs__msg__AssemblyState__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Assembly state message\n"
  "# This structure contains the state of each assembly slot for a given model\n"
  "\n"
  "bool battery_attached\n"
  "bool pump_attached\n"
  "bool regulator_attached\n"
  "bool sensor_attached";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__AssemblyState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__AssemblyState__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 188, 188},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__AssemblyState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__AssemblyState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
