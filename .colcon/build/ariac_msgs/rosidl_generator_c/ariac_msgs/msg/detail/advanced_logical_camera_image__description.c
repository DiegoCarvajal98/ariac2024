// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/msg/detail/advanced_logical_camera_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__msg__AdvancedLogicalCameraImage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x46, 0xb6, 0x0b, 0x0a, 0xe0, 0x49, 0x4e, 0x4c,
      0xb5, 0xf5, 0xf1, 0xa6, 0x5b, 0x89, 0x4c, 0xac,
      0x9b, 0x2e, 0x22, 0x0d, 0x21, 0x15, 0xb7, 0xec,
      0xf4, 0x22, 0x28, 0x76, 0x68, 0xe0, 0xb1, 0x2c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ariac_msgs/msg/detail/part__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "ariac_msgs/msg/detail/kit_tray_pose__functions.h"
#include "ariac_msgs/msg/detail/part_pose__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__KitTrayPose__EXPECTED_HASH = {1, {
    0x9a, 0xa5, 0xca, 0x08, 0x7e, 0xb5, 0xe0, 0xd3,
    0x78, 0xe2, 0x76, 0xec, 0xf1, 0x1a, 0x76, 0x45,
    0x30, 0x12, 0x80, 0x5f, 0xc9, 0x3e, 0x70, 0xcd,
    0x10, 0xbf, 0x72, 0xa4, 0x2c, 0xb0, 0xb1, 0x68,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__Part__EXPECTED_HASH = {1, {
    0x14, 0x08, 0xbd, 0x14, 0x80, 0x83, 0xef, 0x91,
    0xe5, 0x07, 0xb2, 0x56, 0x5d, 0xae, 0xe2, 0xc8,
    0x09, 0xae, 0xac, 0x78, 0xb4, 0x72, 0x46, 0x8a,
    0xa2, 0x59, 0x24, 0x1f, 0xe0, 0x06, 0x86, 0x04,
  }};
static const rosidl_type_hash_t ariac_msgs__msg__PartPose__EXPECTED_HASH = {1, {
    0xb0, 0x13, 0xa2, 0x40, 0x4c, 0x94, 0xbb, 0xfc,
    0xf6, 0x8f, 0x71, 0xa5, 0x12, 0x0e, 0x5f, 0xb5,
    0x92, 0x25, 0xfc, 0x02, 0x7f, 0x6d, 0xe1, 0xea,
    0x12, 0xd2, 0x22, 0x79, 0x3a, 0xe7, 0xf2, 0x80,
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
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ariac_msgs__msg__AdvancedLogicalCameraImage__TYPE_NAME[] = "ariac_msgs/msg/AdvancedLogicalCameraImage";
static char ariac_msgs__msg__KitTrayPose__TYPE_NAME[] = "ariac_msgs/msg/KitTrayPose";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";
static char ariac_msgs__msg__PartPose__TYPE_NAME[] = "ariac_msgs/msg/PartPose";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__header[] = "header";
static char ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__part_poses[] = "part_poses";
static char ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__tray_poses[] = "tray_poses";
static char ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__sensor_pose[] = "sensor_pose";

static rosidl_runtime_c__type_description__Field ariac_msgs__msg__AdvancedLogicalCameraImage__FIELDS[] = {
  {
    {ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__part_poses, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__tray_poses, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ariac_msgs__msg__KitTrayPose__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__AdvancedLogicalCameraImage__FIELD_NAME__sensor_pose, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__msg__AdvancedLogicalCameraImage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__KitTrayPose__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
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
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__msg__AdvancedLogicalCameraImage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__msg__AdvancedLogicalCameraImage__TYPE_NAME, 41, 41},
      {ariac_msgs__msg__AdvancedLogicalCameraImage__FIELDS, 4, 4},
    },
    {ariac_msgs__msg__AdvancedLogicalCameraImage__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__KitTrayPose__EXPECTED_HASH, ariac_msgs__msg__KitTrayPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__KitTrayPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPose__EXPECTED_HASH, ariac_msgs__msg__PartPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__msg__PartPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ariac_msgs/PartPose[] part_poses\n"
  "ariac_msgs/KitTrayPose[] tray_poses\n"
  "geometry_msgs/Pose sensor_pose";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__msg__AdvancedLogicalCameraImage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__msg__AdvancedLogicalCameraImage__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 122, 122},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__msg__AdvancedLogicalCameraImage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__msg__AdvancedLogicalCameraImage__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__KitTrayPose__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__msg__PartPose__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
