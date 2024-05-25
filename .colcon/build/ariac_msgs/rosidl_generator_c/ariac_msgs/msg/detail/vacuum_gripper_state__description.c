// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/vacuum_gripper_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__VacuumGripperState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x86, 0xa7, 0xcd, 0x58, 0x1d, 0x28, 0xd8, 0x22,
      0x24, 0xd2, 0x70, 0x4b, 0x4c, 0xed, 0xf7, 0xd5,
      0x9c, 0xa5, 0x3f, 0x95, 0x3b, 0x4b, 0xa8, 0xad,
      0x46, 0x1a, 0xeb, 0x9a, 0x40, 0xd7, 0xab, 0x55,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__VacuumGripperState__TYPE_NAME[] = "ariac_msgs/msg/VacuumGripperState";

// Define type names, field names, and default values
static char ariac_msgs__msg__VacuumGripperState__FIELD_NAME__enabled[] = "enabled";
static char ariac_msgs__msg__VacuumGripperState__FIELD_NAME__attached[] = "attached";
static char ariac_msgs__msg__VacuumGripperState__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__VacuumGripperState__FIELDS[] = {
  {
    {ariac_msgs__msg__VacuumGripperState__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__VacuumGripperState__FIELD_NAME__attached, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__VacuumGripperState__FIELD_NAME__type, 4, 4},
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
ariac_msgs__msg__VacuumGripperState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__VacuumGripperState__TYPE_NAME, 33, 33},
      {ariac_msgs__msg__VacuumGripperState__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool enabled # is the suction enabled?\n"
  "bool attached # is an object attached to the gripper?\n"
  "string type # type of the gripper";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__VacuumGripperState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__VacuumGripperState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 126, 126},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__VacuumGripperState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__VacuumGripperState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
