// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/CompetitionState.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/competition_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__CompetitionState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xef, 0x0c, 0x3b, 0x54, 0x39, 0xaa, 0x6a, 0xef,
      0xdb, 0xb7, 0xb0, 0xd4, 0xdd, 0xfb, 0xc2, 0xf9,
      0x78, 0xb2, 0x43, 0xe9, 0xbb, 0x73, 0xc2, 0x77,
      0xcc, 0x79, 0x02, 0xd4, 0xf4, 0x19, 0x4f, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ariac_msgs__msg__CompetitionState__TYPE_NAME[] = "ariac_msgs/msg/CompetitionState";

// Define type names, field names, and default values
static char ariac_msgs__msg__CompetitionState__FIELD_NAME__competition_state[] = "competition_state";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__CompetitionState__FIELDS[] = {
  {
    {ariac_msgs__msg__CompetitionState__FIELD_NAME__competition_state, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__CompetitionState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__CompetitionState__TYPE_NAME, 31, 31},
      {ariac_msgs__msg__CompetitionState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 IDLE=0   # Competition cannot be started yet by the competitor\n"
  "uint8 READY=1  # Competition can be started by the competitor\n"
  "uint8 STARTED=2 # Competition has been started\n"
  "uint8 ORDER_ANNOUNCEMENTS_DONE=3 # All order announcements have been made\n"
  "uint8 ENDED=4 # Competition has ended\n"
  "\n"
  "uint8 competition_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__CompetitionState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__CompetitionState__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 314, 314},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__CompetitionState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__CompetitionState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
