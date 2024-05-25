// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/submission_condition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__SubmissionCondition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xce, 0x04, 0x77, 0x51, 0x69, 0x3a, 0x44, 0x8f,
      0xce, 0x71, 0x83, 0x8c, 0x03, 0x2a, 0xe8, 0xc9,
      0x9b, 0x03, 0x91, 0xdf, 0x9c, 0xa9, 0x5f, 0x00,
      0x03, 0x7d, 0x51, 0xa0, 0x49, 0x6d, 0x26, 0x89,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__SubmissionCondition__TYPE_NAME[] = "ariac_msgs/msg/SubmissionCondition";

// Define type names, field names, and default values
static char ariac_msgs__msg__SubmissionCondition__FIELD_NAME__order_id[] = "order_id";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__SubmissionCondition__FIELDS[] = {
  {
    {ariac_msgs__msg__SubmissionCondition__FIELD_NAME__order_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__SubmissionCondition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__SubmissionCondition__TYPE_NAME, 34, 34},
      {ariac_msgs__msg__SubmissionCondition__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string order_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__SubmissionCondition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__SubmissionCondition__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 15, 15},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__SubmissionCondition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__SubmissionCondition__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
