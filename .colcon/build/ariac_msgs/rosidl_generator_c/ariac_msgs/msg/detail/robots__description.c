// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/Robots.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/robots__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__Robots__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcf, 0x38, 0xe8, 0x95, 0x2f, 0xe5, 0x24, 0x6f,
      0xbd, 0x8c, 0xdb, 0xeb, 0x5d, 0x9a, 0xc8, 0xb4,
      0x74, 0x0c, 0xb3, 0x4f, 0x98, 0x30, 0xed, 0xdf,
      0x48, 0x23, 0x61, 0xd1, 0x10, 0xeb, 0x77, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__Robots__TYPE_NAME[] = "ariac_msgs/msg/Robots";

// Define type names, field names, and default values
static char ariac_msgs__msg__Robots__FIELD_NAME__floor_robot[] = "floor_robot";
static char ariac_msgs__msg__Robots__FIELD_NAME__ceiling_robot[] = "ceiling_robot";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__Robots__FIELDS[] = {
  {
    {ariac_msgs__msg__Robots__FIELD_NAME__floor_robot, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Robots__FIELD_NAME__ceiling_robot, 13, 13},
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
ariac_msgs__msg__Robots__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__Robots__TYPE_NAME, 21, 21},
      {ariac_msgs__msg__Robots__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool floor_robot\n"
  "bool ceiling_robot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__Robots__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__Robots__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__Robots__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__Robots__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
