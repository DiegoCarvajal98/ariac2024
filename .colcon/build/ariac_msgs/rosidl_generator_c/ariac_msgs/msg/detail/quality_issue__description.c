// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/quality_issue__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__QualityIssue__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0x87, 0x58, 0xc1, 0x3c, 0x9c, 0x8c, 0xaf,
      0x53, 0x66, 0xbb, 0xb1, 0x86, 0xa6, 0x1b, 0x69,
      0x93, 0x18, 0x36, 0x2d, 0xff, 0x66, 0x88, 0x02,
      0xb7, 0x63, 0x39, 0x2b, 0xb1, 0xf9, 0x96, 0x62,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__QualityIssue__TYPE_NAME[] = "ariac_msgs/msg/QualityIssue";

// Define type names, field names, and default values
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__all_passed[] = "all_passed";
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__missing_part[] = "missing_part";
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__flipped_part[] = "flipped_part";
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__faulty_part[] = "faulty_part";
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__incorrect_part_type[] = "incorrect_part_type";
static char ariac_msgs__msg__QualityIssue__FIELD_NAME__incorrect_part_color[] = "incorrect_part_color";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__QualityIssue__FIELDS[] = {
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__all_passed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__missing_part, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__flipped_part, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__faulty_part, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__incorrect_part_type, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__QualityIssue__FIELD_NAME__incorrect_part_color, 20, 20},
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
ariac_msgs__msg__QualityIssue__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
      {ariac_msgs__msg__QualityIssue__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool all_passed\n"
  "bool missing_part\n"
  "bool flipped_part\n"
  "bool faulty_part\n"
  "bool incorrect_part_type\n"
  "bool incorrect_part_color";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__QualityIssue__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 119, 119},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__QualityIssue__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__QualityIssue__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
