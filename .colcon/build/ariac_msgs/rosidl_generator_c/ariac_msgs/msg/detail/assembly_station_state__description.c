// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/AssemblyStationState.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/assembly_station_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__AssemblyStationState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x04, 0xf6, 0x36, 0x55, 0x0e, 0x44, 0x12,
      0x9d, 0x35, 0x25, 0xbb, 0x9b, 0xbb, 0xf7, 0x84,
      0xee, 0x78, 0x8a, 0xae, 0x05, 0xd0, 0x1c, 0xfc,
      0x2a, 0x69, 0x59, 0x91, 0x39, 0x42, 0x0c, 0x2b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__AssemblyStationState__TYPE_NAME[] = "ariac_msgs/msg/AssemblyStationState";

// Define type names, field names, and default values
static char ariac_msgs__msg__AssemblyStationState__FIELD_NAME__battery_attached[] = "battery_attached";
static char ariac_msgs__msg__AssemblyStationState__FIELD_NAME__sensor_attached[] = "sensor_attached";
static char ariac_msgs__msg__AssemblyStationState__FIELD_NAME__regulator_attached[] = "regulator_attached";
static char ariac_msgs__msg__AssemblyStationState__FIELD_NAME__pump_attached[] = "pump_attached";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__AssemblyStationState__FIELDS[] = {
  {
    {ariac_msgs__msg__AssemblyStationState__FIELD_NAME__battery_attached, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyStationState__FIELD_NAME__sensor_attached, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyStationState__FIELD_NAME__regulator_attached, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyStationState__FIELD_NAME__pump_attached, 13, 13},
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
ariac_msgs__msg__AssemblyStationState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__AssemblyStationState__TYPE_NAME, 35, 35},
      {ariac_msgs__msg__AssemblyStationState__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool battery_attached\n"
  "bool sensor_attached\n"
  "bool regulator_attached\n"
  "bool pump_attached";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__AssemblyStationState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__AssemblyStationState__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__AssemblyStationState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__AssemblyStationState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
