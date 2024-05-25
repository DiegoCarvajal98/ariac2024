// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/dropped_part_challenge__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__DroppedPartChallenge__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x31, 0x86, 0xdb, 0x9b, 0x9c, 0x6e, 0x9d,
      0x90, 0x09, 0xf2, 0xd0, 0x63, 0x67, 0x06, 0xda,
      0x82, 0xce, 0xb6, 0x5b, 0xfc, 0x3d, 0xf3, 0x24,
      0xb4, 0xf6, 0xe9, 0x72, 0x9c, 0x96, 0x91, 0x00,
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

static char ariac_msgs__msg__DroppedPartChallenge__TYPE_NAME[] = "ariac_msgs/msg/DroppedPartChallenge";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";

// Define type names, field names, and default values
static char ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__robot[] = "robot";
static char ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__part_to_drop[] = "part_to_drop";
static char ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__drop_after_num[] = "drop_after_num";
static char ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__drop_after_time[] = "drop_after_time";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__DroppedPartChallenge__FIELDS[] = {
  {
    {ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__robot, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__part_to_drop, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__drop_after_num, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__DroppedPartChallenge__FIELD_NAME__drop_after_time, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__DroppedPartChallenge__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__DroppedPartChallenge__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__DroppedPartChallenge__TYPE_NAME, 35, 35},
      {ariac_msgs__msg__DroppedPartChallenge__FIELDS, 4, 4},
    },
    {ariac_msgs__msg__DroppedPartChallenge__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string robot\n"
  "ariac_msgs/Part part_to_drop\n"
  "uint8 drop_after_num\n"
  "float32 drop_after_time";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__DroppedPartChallenge__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__DroppedPartChallenge__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__DroppedPartChallenge__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__DroppedPartChallenge__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
