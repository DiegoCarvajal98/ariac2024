// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/Parts.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/parts__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__Parts__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0xa4, 0xed, 0x8b, 0x5b, 0xcd, 0x80, 0x4f,
      0x0f, 0x24, 0x04, 0x7f, 0x08, 0xe5, 0x6f, 0x94,
      0xac, 0x32, 0xec, 0xc0, 0x85, 0x0a, 0xb8, 0x0b,
      0xf0, 0x0e, 0x41, 0x10, 0xcc, 0x8a, 0xf9, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ariac_msgs/msg/detail/part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__Part__EXPECTED_HASH = {1, {
    0x14, 0x08, 0xbd, 0x14, 0x80, 0x83, 0xef, 0x91,
    0xe5, 0x07, 0xb2, 0x56, 0x5d, 0xae, 0xe2, 0xc8,
    0x09, 0xae, 0xac, 0x78, 0xb4, 0x72, 0x46, 0x8a,
    0xa2, 0x59, 0x24, 0x1f, 0xe0, 0x06, 0x86, 0x04,
  }};
#endif

static char ariac_msgs__msg__Parts__TYPE_NAME[] = "ariac_msgs/msg/Parts";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";

// Define type names, field names, and default values
static char ariac_msgs__msg__Parts__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__Parts__FIELDS[] = {
  {
    {ariac_msgs__msg__Parts__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__Parts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__Parts__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__Parts__TYPE_NAME, 20, 20},
      {ariac_msgs__msg__Parts__FIELDS, 1, 1},
    },
    {ariac_msgs__msg__Parts__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "ariac_msgs/Part[] parts";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__Parts__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__Parts__TYPE_NAME, 20, 20},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 23, 23},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__Parts__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__Parts__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
