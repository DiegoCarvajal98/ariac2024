// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__SensorBlackoutChallenge__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf9, 0x7f, 0xee, 0x9b, 0x00, 0x51, 0x33, 0xe9,
      0x39, 0x6b, 0x39, 0x91, 0x31, 0x16, 0xfe, 0xb2,
      0xe3, 0x77, 0xf9, 0x1b, 0xa4, 0x26, 0x11, 0x9b,
      0xff, 0xbc, 0x6c, 0x7f, 0xd8, 0x63, 0x0a, 0xae,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ariac_msgs/msg/detail/condition__functions.h"
#include "ariac_msgs/msg/detail/part__functions.h"
#include "ariac_msgs/msg/detail/sensors__functions.h"
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"
#include "ariac_msgs/msg/detail/submission_condition__functions.h"
#include "ariac_msgs/msg/detail/time_condition__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__Condition__EXPECTED_HASH = {1, {
    0x03, 0xe7, 0xa4, 0x90, 0x8b, 0x49, 0xae, 0xb8,
    0xd5, 0xc2, 0xb5, 0x6e, 0x89, 0xc2, 0x4a, 0x2b,
    0xe9, 0x12, 0x02, 0x7a, 0x0e, 0x65, 0x5b, 0x03,
    0x29, 0x26, 0xdf, 0xbf, 0x8a, 0xa8, 0x07, 0x9d,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__Part__EXPECTED_HASH = {1, {
    0x14, 0x08, 0xbd, 0x14, 0x80, 0x83, 0xef, 0x91,
    0xe5, 0x07, 0xb2, 0x56, 0x5d, 0xae, 0xe2, 0xc8,
    0x09, 0xae, 0xac, 0x78, 0xb4, 0x72, 0x46, 0x8a,
    0xa2, 0x59, 0x24, 0x1f, 0xe0, 0x06, 0x86, 0x04,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__PartPlaceCondition__EXPECTED_HASH = {1, {
    0x8c, 0x43, 0xbd, 0xde, 0xd7, 0x0f, 0x9e, 0x00,
    0xf3, 0x48, 0x53, 0xd8, 0x0d, 0x05, 0x98, 0x68,
    0xed, 0xaf, 0x60, 0x9a, 0xdf, 0x21, 0x47, 0x7d,
    0xb6, 0x3d, 0x83, 0x68, 0x53, 0xe0, 0x02, 0xc0,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__Sensors__EXPECTED_HASH = {1, {
    0x02, 0x8e, 0x03, 0x30, 0x08, 0xff, 0x53, 0xbe,
    0x54, 0x6c, 0xeb, 0xde, 0xf6, 0xa9, 0x4e, 0x9e,
    0xe0, 0x27, 0xfe, 0x08, 0x1c, 0xc8, 0x82, 0x5b,
    0x72, 0xba, 0x8a, 0xce, 0x09, 0xf6, 0xc0, 0xa7,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__SubmissionCondition__EXPECTED_HASH = {1, {
    0xce, 0x04, 0x77, 0x51, 0x69, 0x3a, 0x44, 0x8f,
    0xce, 0x71, 0x83, 0x8c, 0x03, 0x2a, 0xe8, 0xc9,
    0x9b, 0x03, 0x91, 0xdf, 0x9c, 0xa9, 0x5f, 0x00,
    0x03, 0x7d, 0x51, 0xa0, 0x49, 0x6d, 0x26, 0x89,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__TimeCondition__EXPECTED_HASH = {1, {
    0xfb, 0xf5, 0xc2, 0x7a, 0x80, 0x0c, 0xa8, 0xb9,
    0xef, 0x10, 0x98, 0x5d, 0x5e, 0x0a, 0x35, 0xf6,
    0x8f, 0xea, 0x2e, 0x84, 0x75, 0xc5, 0xb8, 0x3b,
    0xc2, 0xf2, 0xa2, 0xbc, 0x0f, 0x00, 0x47, 0x6f,
  }};
#endif

static char ariac_msgs__msg__SensorBlackoutChallenge__TYPE_NAME[] = "ariac_msgs/msg/SensorBlackoutChallenge";
static char ariac_msgs__msg__Condition__TYPE_NAME[] = "ariac_msgs/msg/Condition";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";
static char ariac_msgs__msg__PartPlaceCondition__TYPE_NAME[] = "ariac_msgs/msg/PartPlaceCondition";
static char ariac_msgs__msg__Sensors__TYPE_NAME[] = "ariac_msgs/msg/Sensors";
static char ariac_msgs__msg__SubmissionCondition__TYPE_NAME[] = "ariac_msgs/msg/SubmissionCondition";
static char ariac_msgs__msg__TimeCondition__TYPE_NAME[] = "ariac_msgs/msg/TimeCondition";

// Define type names, field names, and default values
static char ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__duration[] = "duration";
static char ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__condition[] = "condition";
static char ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__sensors_to_disable[] = "sensors_to_disable";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__SensorBlackoutChallenge__FIELDS[] = {
  {
    {ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__duration, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__condition, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__Condition__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__SensorBlackoutChallenge__FIELD_NAME__sensors_to_disable, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__Sensors__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__SensorBlackoutChallenge__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Condition__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPlaceCondition__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Sensors__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__SubmissionCondition__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__TimeCondition__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__SensorBlackoutChallenge__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__SensorBlackoutChallenge__TYPE_NAME, 38, 38},
      {ariac_msgs__msg__SensorBlackoutChallenge__FIELDS, 3, 3},
    },
    {ariac_msgs__msg__SensorBlackoutChallenge__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Condition__EXPECTED_HASH, ariac_msgs__msg__Condition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Condition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPlaceCondition__EXPECTED_HASH, ariac_msgs__msg__PartPlaceCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__msg__PartPlaceCondition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__Sensors__EXPECTED_HASH, ariac_msgs__msg__Sensors__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ariac_msgs__msg__Sensors__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__SubmissionCondition__EXPECTED_HASH, ariac_msgs__msg__SubmissionCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ariac_msgs__msg__SubmissionCondition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__TimeCondition__EXPECTED_HASH, ariac_msgs__msg__TimeCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ariac_msgs__msg__TimeCondition__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 duration\n"
  "ariac_msgs/Condition condition\n"
  "ariac_msgs/Sensors sensors_to_disable";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__SensorBlackoutChallenge__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__SensorBlackoutChallenge__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__SensorBlackoutChallenge__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__SensorBlackoutChallenge__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Condition__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__msg__PartPlaceCondition__get_individual_type_description_source(NULL);
    sources[4] = *ariac_msgs__msg__Sensors__get_individual_type_description_source(NULL);
    sources[5] = *ariac_msgs__msg__SubmissionCondition__get_individual_type_description_source(NULL);
    sources[6] = *ariac_msgs__msg__TimeCondition__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
