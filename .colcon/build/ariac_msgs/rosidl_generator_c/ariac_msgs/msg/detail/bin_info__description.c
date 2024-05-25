// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/bin_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__BinInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x48, 0xa7, 0x41, 0x75, 0x0a, 0x8e, 0xbb, 0x67,
      0x23, 0x1f, 0x26, 0xa3, 0xda, 0x15, 0xf1, 0xf7,
      0x4e, 0x0b, 0x8e, 0x7f, 0xc8, 0xc6, 0x3f, 0xa1,
      0xd5, 0x5b, 0xbb, 0x2f, 0x68, 0x4d, 0xf9, 0x39,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ariac_msgs/msg/detail/part_lot__functions.h"
#include "ariac_msgs/msg/detail/part__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__Part__EXPECTED_HASH = {1, {
    0x14, 0x08, 0xbd, 0x14, 0x80, 0x83, 0xef, 0x91,
    0xe5, 0x07, 0xb2, 0x56, 0x5d, 0xae, 0xe2, 0xc8,
    0x09, 0xae, 0xac, 0x78, 0xb4, 0x72, 0x46, 0x8a,
    0xa2, 0x59, 0x24, 0x1f, 0xe0, 0x06, 0x86, 0x04,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__PartLot__EXPECTED_HASH = {1, {
    0xc9, 0xbf, 0x8d, 0xfd, 0x9e, 0xaf, 0x0e, 0x5d,
    0x79, 0xce, 0xcc, 0x0c, 0xfb, 0x12, 0x6e, 0xcd,
    0x0a, 0x61, 0xea, 0x52, 0x4f, 0xff, 0xc4, 0x38,
    0xdb, 0xf6, 0x8b, 0x46, 0x69, 0xd6, 0xe6, 0x76,
  }};
#endif

static char ariac_msgs__msg__BinInfo__TYPE_NAME[] = "ariac_msgs/msg/BinInfo";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";
static char ariac_msgs__msg__PartLot__TYPE_NAME[] = "ariac_msgs/msg/PartLot";

// Define type names, field names, and default values
static char ariac_msgs__msg__BinInfo__FIELD_NAME__bin_number[] = "bin_number";
static char ariac_msgs__msg__BinInfo__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__BinInfo__FIELDS[] = {
  {
    {ariac_msgs__msg__BinInfo__FIELD_NAME__bin_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__BinInfo__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ariac_msgs__msg__PartLot__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__BinInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartLot__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__BinInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__BinInfo__TYPE_NAME, 22, 22},
      {ariac_msgs__msg__BinInfo__FIELDS, 2, 2},
    },
    {ariac_msgs__msg__BinInfo__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartLot__EXPECTED_HASH, ariac_msgs__msg__PartLot__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__PartLot__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 BIN1=1\n"
  "uint8 BIN2=2\n"
  "uint8 BIN3=3\n"
  "uint8 BIN4=4\n"
  "uint8 BIN5=5\n"
  "uint8 BIN6=6\n"
  "uint8 BIN7=7\n"
  "uint8 BIN8=8\n"
  "\n"
  "uint8 bin_number\n"
  "ariac_msgs/PartLot[] parts";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__BinInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__BinInfo__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__BinInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__BinInfo__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__PartLot__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
