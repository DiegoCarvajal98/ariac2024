// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/time_condition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__TimeCondition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xf5, 0xc2, 0x7a, 0x80, 0x0c, 0xa8, 0xb9,
      0xef, 0x10, 0x98, 0x5d, 0x5e, 0x0a, 0x35, 0xf6,
      0x8f, 0xea, 0x2e, 0x84, 0x75, 0xc5, 0xb8, 0x3b,
      0xc2, 0xf2, 0xa2, 0xbc, 0x0f, 0x00, 0x47, 0x6f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__TimeCondition__TYPE_NAME[] = "ariac_msgs/msg/TimeCondition";

// Define type names, field names, and default values
static char ariac_msgs__msg__TimeCondition__FIELD_NAME__seconds[] = "seconds";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__TimeCondition__FIELDS[] = {
  {
    {ariac_msgs__msg__TimeCondition__FIELD_NAME__seconds, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__TimeCondition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__TimeCondition__TYPE_NAME, 28, 28},
      {ariac_msgs__msg__TimeCondition__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 seconds";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__TimeCondition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__TimeCondition__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__TimeCondition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__TimeCondition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
