// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/Part.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/part__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__Part__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x08, 0xbd, 0x14, 0x80, 0x83, 0xef, 0x91,
      0xe5, 0x07, 0xb2, 0x56, 0x5d, 0xae, 0xe2, 0xc8,
      0x09, 0xae, 0xac, 0x78, 0xb4, 0x72, 0x46, 0x8a,
      0xa2, 0x59, 0x24, 0x1f, 0xe0, 0x06, 0x86, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";

// Define type names, field names, and default values
static char ariac_msgs__msg__Part__FIELD_NAME__color[] = "color";
static char ariac_msgs__msg__Part__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__Part__FIELDS[] = {
  {
    {ariac_msgs__msg__Part__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Part__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__Part__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
      {ariac_msgs__msg__Part__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# part color\n"
  "uint8 RED=0\n"
  "uint8 GREEN=1\n"
  "uint8 BLUE=2\n"
  "uint8 ORANGE=3\n"
  "uint8 PURPLE=4\n"
  "\n"
  "# part type\n"
  "uint8 BATTERY=10\n"
  "uint8 PUMP=11\n"
  "uint8 SENSOR=12\n"
  "uint8 REGULATOR=13\n"
  "\n"
  "uint8 color # RED, GREEN, BLUE, ORANGE, or PURPLE\n"
  "uint8 type # BATTERY, PUMP, SENSOR, or REGULATOR\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__Part__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 262, 262},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__Part__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
