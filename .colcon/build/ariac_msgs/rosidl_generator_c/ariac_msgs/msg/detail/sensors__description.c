// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/sensors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__Sensors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x8e, 0x03, 0x30, 0x08, 0xff, 0x53, 0xbe,
      0x54, 0x6c, 0xeb, 0xde, 0xf6, 0xa9, 0x4e, 0x9e,
      0xe0, 0x27, 0xfe, 0x08, 0x1c, 0xc8, 0x82, 0x5b,
      0x72, 0xba, 0x8a, 0xce, 0x09, 0xf6, 0xc0, 0xa7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__Sensors__TYPE_NAME[] = "ariac_msgs/msg/Sensors";

// Define type names, field names, and default values
static char ariac_msgs__msg__Sensors__FIELD_NAME__break_beam[] = "break_beam";
static char ariac_msgs__msg__Sensors__FIELD_NAME__proximity[] = "proximity";
static char ariac_msgs__msg__Sensors__FIELD_NAME__laser_profiler[] = "laser_profiler";
static char ariac_msgs__msg__Sensors__FIELD_NAME__lidar[] = "lidar";
static char ariac_msgs__msg__Sensors__FIELD_NAME__camera[] = "camera";
static char ariac_msgs__msg__Sensors__FIELD_NAME__logical_camera[] = "logical_camera";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__Sensors__FIELDS[] = {
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__break_beam, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__proximity, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__laser_profiler, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__lidar, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__camera, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__FIELD_NAME__logical_camera, 14, 14},
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
ariac_msgs__msg__Sensors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__Sensors__TYPE_NAME, 22, 22},
      {ariac_msgs__msg__Sensors__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool break_beam\n"
  "bool proximity\n"
  "bool laser_profiler\n"
  "bool lidar\n"
  "bool camera\n"
  "bool logical_camera";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__Sensors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__Sensors__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 93, 93},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__Sensors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__Sensors__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
