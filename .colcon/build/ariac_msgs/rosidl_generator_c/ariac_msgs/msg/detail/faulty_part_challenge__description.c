// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/faulty_part_challenge__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__FaultyPartChallenge__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x1a, 0x0e, 0xcb, 0x42, 0x0b, 0x83, 0x2f,
      0x0c, 0x1e, 0x15, 0xbe, 0x21, 0xaf, 0xe1, 0x1f,
      0x59, 0x8c, 0x69, 0x34, 0x42, 0xc7, 0x55, 0xcd,
      0x2c, 0x90, 0xdb, 0xe1, 0x50, 0x95, 0xd2, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__FaultyPartChallenge__TYPE_NAME[] = "ariac_msgs/msg/FaultyPartChallenge";

// Define type names, field names, and default values
static char ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__order_id[] = "order_id";
static char ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant1[] = "quadrant1";
static char ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant2[] = "quadrant2";
static char ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant3[] = "quadrant3";
static char ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant4[] = "quadrant4";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__FaultyPartChallenge__FIELDS[] = {
  {
    {ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__order_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__FaultyPartChallenge__FIELD_NAME__quadrant4, 9, 9},
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
ariac_msgs__msg__FaultyPartChallenge__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__FaultyPartChallenge__TYPE_NAME, 34, 34},
      {ariac_msgs__msg__FaultyPartChallenge__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string order_id\n"
  "bool quadrant1\n"
  "bool quadrant2\n"
  "bool quadrant3\n"
  "bool quadrant4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__FaultyPartChallenge__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__FaultyPartChallenge__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__FaultyPartChallenge__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__FaultyPartChallenge__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
