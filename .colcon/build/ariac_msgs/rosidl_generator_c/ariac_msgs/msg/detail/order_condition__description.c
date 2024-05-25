// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/OrderCondition.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/order_condition__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__OrderCondition__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x76, 0x06, 0x1a, 0x81, 0xc8, 0x5f, 0x5c,
      0x95, 0xce, 0xb4, 0xf2, 0x2c, 0xa2, 0x2e, 0x46,
      0x22, 0xca, 0xd3, 0xb1, 0x0b, 0xda, 0x3f, 0x50,
      0x78, 0xb6, 0xe0, 0x91, 0x53, 0x3d, 0xc9, 0xba,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ariac_msgs/msg/detail/combined_task__functions.h"
#include "ariac_msgs/msg/detail/condition__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ariac_msgs/msg/detail/kitting_task__functions.h"
#include "ariac_msgs/msg/detail/assembly_part__functions.h"
#include "ariac_msgs/msg/detail/part__functions.h"
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
#include "ariac_msgs/msg/detail/submission_condition__functions.h"
#include "ariac_msgs/msg/detail/part_place_condition__functions.h"
#include "ariac_msgs/msg/detail/assembly_task__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "ariac_msgs/msg/detail/kitting_part__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "ariac_msgs/msg/detail/time_condition__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__AssemblyPart__EXPECTED_HASH = {1, {
    0xd2, 0x98, 0x45, 0xb3, 0x32, 0x09, 0xbd, 0xc9,
    0xae, 0x9d, 0x75, 0x27, 0x23, 0xbf, 0xe2, 0x03,
    0xeb, 0x98, 0x94, 0x75, 0x1f, 0xae, 0xcc, 0x80,
    0xe1, 0x4b, 0xfb, 0x13, 0xc2, 0x27, 0xfd, 0x55,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__AssemblyTask__EXPECTED_HASH = {1, {
    0xe5, 0x61, 0xed, 0xc3, 0xa1, 0xdf, 0x32, 0x6d,
    0xe8, 0xa0, 0x14, 0x2a, 0xdc, 0x1e, 0x66, 0xf1,
    0x22, 0x93, 0xc6, 0x44, 0x68, 0xe4, 0x68, 0x7b,
    0xea, 0x7f, 0xfa, 0x29, 0x92, 0xd6, 0xfc, 0x6a,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__CombinedTask__EXPECTED_HASH = {1, {
    0x4a, 0x82, 0x89, 0x6a, 0x90, 0x13, 0x42, 0xc0,
    0x5c, 0xdb, 0x24, 0x13, 0x03, 0x2f, 0x39, 0x6b,
    0xa4, 0xff, 0xcb, 0xc8, 0x5b, 0x2b, 0x08, 0xf3,
    0x50, 0x29, 0x42, 0x59, 0x13, 0x48, 0xf7, 0xaf,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__Condition__EXPECTED_HASH = {1, {
    0x03, 0xe7, 0xa4, 0x90, 0x8b, 0x49, 0xae, 0xb8,
    0xd5, 0xc2, 0xb5, 0x6e, 0x89, 0xc2, 0x4a, 0x2b,
    0xe9, 0x12, 0x02, 0x7a, 0x0e, 0x65, 0x5b, 0x03,
    0x29, 0x26, 0xdf, 0xbf, 0x8a, 0xa8, 0x07, 0x9d,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__KittingPart__EXPECTED_HASH = {1, {
    0x06, 0x84, 0x40, 0x09, 0xb8, 0x4b, 0xed, 0x42,
    0x81, 0xf7, 0x47, 0x41, 0xed, 0xe1, 0xf5, 0x35,
    0x94, 0x28, 0x3d, 0x44, 0x25, 0xd4, 0xbe, 0x1f,
    0xc2, 0x43, 0x01, 0xda, 0xe4, 0x27, 0xd8, 0xb5,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__KittingTask__EXPECTED_HASH = {1, {
    0x7a, 0x5f, 0xab, 0x13, 0xf1, 0xae, 0xe7, 0x91,
    0x6b, 0x13, 0x6f, 0x4b, 0x92, 0xa1, 0xf5, 0xf4,
    0xec, 0xd4, 0x7e, 0xaf, 0xda, 0xea, 0xf7, 0x8e,
    0x7e, 0x27, 0xf3, 0x0b, 0xa8, 0x86, 0xd7, 0x32,
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
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__PoseStamped__EXPECTED_HASH = {1, {
    0x10, 0xf3, 0x78, 0x6d, 0x7d, 0x40, 0xfd, 0x2b,
    0x54, 0x36, 0x78, 0x35, 0x61, 0x4b, 0xff, 0x85,
    0xd4, 0xad, 0x3b, 0x5d, 0xab, 0x62, 0xbf, 0x8b,
    0xca, 0x0c, 0xc2, 0x32, 0xd7, 0x3b, 0x4c, 0xd8,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ariac_msgs__msg__OrderCondition__TYPE_NAME[] = "ariac_msgs/msg/OrderCondition";
static char ariac_msgs__msg__AssemblyPart__TYPE_NAME[] = "ariac_msgs/msg/AssemblyPart";
static char ariac_msgs__msg__AssemblyTask__TYPE_NAME[] = "ariac_msgs/msg/AssemblyTask";
static char ariac_msgs__msg__CombinedTask__TYPE_NAME[] = "ariac_msgs/msg/CombinedTask";
static char ariac_msgs__msg__Condition__TYPE_NAME[] = "ariac_msgs/msg/Condition";
static char ariac_msgs__msg__KittingPart__TYPE_NAME[] = "ariac_msgs/msg/KittingPart";
static char ariac_msgs__msg__KittingTask__TYPE_NAME[] = "ariac_msgs/msg/KittingTask";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";
static char ariac_msgs__msg__PartPlaceCondition__TYPE_NAME[] = "ariac_msgs/msg/PartPlaceCondition";
static char ariac_msgs__msg__SubmissionCondition__TYPE_NAME[] = "ariac_msgs/msg/SubmissionCondition";
static char ariac_msgs__msg__TimeCondition__TYPE_NAME[] = "ariac_msgs/msg/TimeCondition";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__PoseStamped__TYPE_NAME[] = "geometry_msgs/msg/PoseStamped";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__id[] = "id";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__type[] = "type";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__priority[] = "priority";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__kitting_task[] = "kitting_task";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__assembly_task[] = "assembly_task";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__combined_task[] = "combined_task";
static char ariac_msgs__msg__OrderCondition__FIELD_NAME__condition[] = "condition";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__OrderCondition__FIELDS[] = {
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__priority, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__kitting_task, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__KittingTask__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__assembly_task, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__AssemblyTask__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__combined_task, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__CombinedTask__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__OrderCondition__FIELD_NAME__condition, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__Condition__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__OrderCondition__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__AssemblyPart__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AssemblyTask__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__CombinedTask__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Condition__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__KittingPart__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__KittingTask__TYPE_NAME, 26, 26},
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
    {ariac_msgs__msg__SubmissionCondition__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__TimeCondition__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__PoseStamped__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__OrderCondition__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__OrderCondition__TYPE_NAME, 29, 29},
      {ariac_msgs__msg__OrderCondition__FIELDS, 7, 7},
    },
    {ariac_msgs__msg__OrderCondition__REFERENCED_TYPE_DESCRIPTIONS, 17, 17},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__AssemblyPart__EXPECTED_HASH, ariac_msgs__msg__AssemblyPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__AssemblyPart__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__AssemblyTask__EXPECTED_HASH, ariac_msgs__msg__AssemblyTask__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__AssemblyTask__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__CombinedTask__EXPECTED_HASH, ariac_msgs__msg__CombinedTask__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__msg__CombinedTask__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__Condition__EXPECTED_HASH, ariac_msgs__msg__Condition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ariac_msgs__msg__Condition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__KittingPart__EXPECTED_HASH, ariac_msgs__msg__KittingPart__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ariac_msgs__msg__KittingPart__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__KittingTask__EXPECTED_HASH, ariac_msgs__msg__KittingTask__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ariac_msgs__msg__KittingTask__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPlaceCondition__EXPECTED_HASH, ariac_msgs__msg__PartPlaceCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ariac_msgs__msg__PartPlaceCondition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__SubmissionCondition__EXPECTED_HASH, ariac_msgs__msg__SubmissionCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ariac_msgs__msg__SubmissionCondition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__TimeCondition__EXPECTED_HASH, ariac_msgs__msg__TimeCondition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ariac_msgs__msg__TimeCondition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__PoseStamped__EXPECTED_HASH, geometry_msgs__msg__PoseStamped__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = geometry_msgs__msg__PoseStamped__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 KITTING=0\n"
  "uint8 ASSEMBLY=1\n"
  "uint8 COMBINED=2\n"
  "\n"
  "string id\n"
  "uint8 type\n"
  "bool priority\n"
  "ariac_msgs/KittingTask kitting_task \n"
  "ariac_msgs/AssemblyTask assembly_task\n"
  "ariac_msgs/CombinedTask combined_task\n"
  "ariac_msgs/Condition condition";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__OrderCondition__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__OrderCondition__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 229, 229},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__OrderCondition__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[18];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 18, 18};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__OrderCondition__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__AssemblyPart__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__AssemblyTask__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__msg__CombinedTask__get_individual_type_description_source(NULL);
    sources[4] = *ariac_msgs__msg__Condition__get_individual_type_description_source(NULL);
    sources[5] = *ariac_msgs__msg__KittingPart__get_individual_type_description_source(NULL);
    sources[6] = *ariac_msgs__msg__KittingTask__get_individual_type_description_source(NULL);
    sources[7] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[8] = *ariac_msgs__msg__PartPlaceCondition__get_individual_type_description_source(NULL);
    sources[9] = *ariac_msgs__msg__SubmissionCondition__get_individual_type_description_source(NULL);
    sources[10] = *ariac_msgs__msg__TimeCondition__get_individual_type_description_source(NULL);
    sources[11] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[12] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[13] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[14] = *geometry_msgs__msg__PoseStamped__get_individual_type_description_source(NULL);
    sources[15] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[16] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[17] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
