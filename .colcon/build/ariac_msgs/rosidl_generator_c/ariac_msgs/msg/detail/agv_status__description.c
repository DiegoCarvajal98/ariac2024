// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/agv_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__AGVStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x20, 0x93, 0xe9, 0xd4, 0x9c, 0x77, 0xf5,
      0x4a, 0x46, 0x32, 0xc3, 0x65, 0x5f, 0x12, 0x52,
      0xd3, 0xad, 0xeb, 0x80, 0xfd, 0x82, 0xdd, 0x79,
      0xf9, 0x02, 0xbf, 0xbc, 0x23, 0xf2, 0x8c, 0x3c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__AGVStatus__TYPE_NAME[] = "ariac_msgs/msg/AGVStatus";

// Define type names, field names, and default values
static char ariac_msgs__msg__AGVStatus__FIELD_NAME__location[] = "location";
static char ariac_msgs__msg__AGVStatus__FIELD_NAME__position[] = "position";
static char ariac_msgs__msg__AGVStatus__FIELD_NAME__velocity[] = "velocity";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__AGVStatus__FIELDS[] = {
  {
    {ariac_msgs__msg__AGVStatus__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AGVStatus__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AGVStatus__FIELD_NAME__velocity, 8, 8},
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
ariac_msgs__msg__AGVStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__AGVStatus__TYPE_NAME, 24, 24},
      {ariac_msgs__msg__AGVStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 KITTING=0\n"
  "uint8 ASSEMBLY_FRONT=1\n"
  "uint8 ASSEMBLY_BACK=2\n"
  "uint8 WAREHOUSE=3\n"
  "uint8 UNKNOWN=99\n"
  "\n"
  "int8 location # KITTING, ASSEMBLY_FRONT, ASSEMBLY_BACK, WAREHOUSE, UNKNOWN\n"
  "float64 position\n"
  "float64 velocity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__AGVStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__AGVStatus__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 205, 205},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__AGVStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__AGVStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
