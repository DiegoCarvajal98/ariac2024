// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/part_place_condition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__PartPlaceCondition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x43, 0xbd, 0xde, 0xd7, 0x0f, 0x9e, 0x00,
      0xf3, 0x48, 0x53, 0xd8, 0x0d, 0x05, 0x98, 0x68,
      0xed, 0xaf, 0x60, 0x9a, 0xdf, 0x21, 0x47, 0x7d,
      0xb6, 0x3d, 0x83, 0x68, 0x53, 0xe0, 0x02, 0xc0,
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

static char ariac_msgs__msg__PartPlaceCondition__TYPE_NAME[] = "ariac_msgs/msg/PartPlaceCondition";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";

// Define type names, field names, and default values
static char ariac_msgs__msg__PartPlaceCondition__FIELD_NAME__part[] = "part";
static char ariac_msgs__msg__PartPlaceCondition__FIELD_NAME__agv[] = "agv";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__PartPlaceCondition__FIELDS[] = {
  {
    {ariac_msgs__msg__PartPlaceCondition__FIELD_NAME__part, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPlaceCondition__FIELD_NAME__agv, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__PartPlaceCondition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__PartPlaceCondition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__PartPlaceCondition__TYPE_NAME, 33, 33},
      {ariac_msgs__msg__PartPlaceCondition__FIELDS, 2, 2},
    },
    {ariac_msgs__msg__PartPlaceCondition__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "ariac_msgs/Part part\n"
  "uint8 agv # tray content topic";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__PartPlaceCondition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__PartPlaceCondition__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__PartPlaceCondition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__PartPlaceCondition__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
