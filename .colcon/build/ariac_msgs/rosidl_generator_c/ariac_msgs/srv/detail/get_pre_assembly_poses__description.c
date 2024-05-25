// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:srv/GetPreAssemblyPoses.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/srv/detail/get_pre_assembly_poses__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__GetPreAssemblyPoses__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x64, 0x13, 0x07, 0xb6, 0xb5, 0x10, 0xbb, 0xb1,
      0x1b, 0x55, 0xe5, 0x96, 0x8c, 0xb8, 0x8f, 0x98,
      0x5a, 0x45, 0x21, 0x8c, 0x11, 0xa1, 0x24, 0x6a,
      0xd1, 0x40, 0x64, 0xba, 0x5b, 0x2c, 0x42, 0x80,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__GetPreAssemblyPoses_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4b, 0xc4, 0x67, 0xd0, 0x08, 0x6d, 0x51, 0xa8,
      0xe3, 0xd8, 0xb3, 0x13, 0xf0, 0x59, 0x4a, 0x00,
      0xde, 0x78, 0x04, 0xdc, 0xe4, 0xe9, 0xac, 0xb8,
      0xd7, 0xc7, 0xb7, 0xad, 0xe2, 0x7f, 0xfa, 0x4f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__GetPreAssemblyPoses_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x3e, 0xf6, 0x80, 0x5d, 0x96, 0xb0, 0x7e,
      0x2b, 0x0d, 0x7d, 0x88, 0xd6, 0x0d, 0x49, 0xfa,
      0xdc, 0x88, 0xae, 0x55, 0x7f, 0x73, 0x85, 0x51,
      0x24, 0x43, 0x9b, 0xa8, 0xe4, 0x1b, 0xb0, 0x12,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__GetPreAssemblyPoses_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0x4a, 0x75, 0x1a, 0x03, 0x90, 0xd6, 0xa7,
      0xa7, 0x1a, 0x10, 0x75, 0x5a, 0x29, 0x05, 0x18,
      0x2e, 0x19, 0x81, 0xcd, 0xb6, 0x83, 0x60, 0xf9,
      0x0e, 0x82, 0x9b, 0x2b, 0x99, 0x53, 0x88, 0xe2,
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
#include "ariac_msgs/msg/detail/part_pose__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ariac_msgs__srv__GetPreAssemblyPoses__TYPE_NAME[] = "ariac_msgs/srv/GetPreAssemblyPoses";
static char ariac_msgs__msg__Part__TYPE_NAME[] = "ariac_msgs/msg/Part";
static char ariac_msgs__msg__PartPose__TYPE_NAME[] = "ariac_msgs/msg/PartPose";
static char ariac_msgs__srv__GetPreAssemblyPoses_Event__TYPE_NAME[] = "ariac_msgs/srv/GetPreAssemblyPoses_Event";
static char ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME[] = "ariac_msgs/srv/GetPreAssemblyPoses_Request";
static char ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME[] = "ariac_msgs/srv/GetPreAssemblyPoses_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__request_message[] = "request_message";
static char ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__response_message[] = "response_message";
static char ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__GetPreAssemblyPoses__FIELDS[] = {
  {
    {ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__GetPreAssemblyPoses_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__GetPreAssemblyPoses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__GetPreAssemblyPoses__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__GetPreAssemblyPoses__TYPE_NAME, 34, 34},
      {ariac_msgs__srv__GetPreAssemblyPoses__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__GetPreAssemblyPoses__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPose__EXPECTED_HASH, ariac_msgs__msg__PartPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__PartPose__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__GetPreAssemblyPoses_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ariac_msgs__srv__GetPreAssemblyPoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ariac_msgs__srv__GetPreAssemblyPoses_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__GetPreAssemblyPoses_Request__FIELD_NAME__order_id[] = "order_id";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__GetPreAssemblyPoses_Request__FIELDS[] = {
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Request__FIELD_NAME__order_id, 8, 8},
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
ariac_msgs__srv__GetPreAssemblyPoses_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
      {ariac_msgs__srv__GetPreAssemblyPoses_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__valid_id[] = "valid_id";
static char ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__agv_at_station[] = "agv_at_station";
static char ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__parts[] = "parts";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELDS[] = {
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__valid_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__agv_at_station, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELD_NAME__parts, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__GetPreAssemblyPoses_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__GetPreAssemblyPoses_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
      {ariac_msgs__srv__GetPreAssemblyPoses_Response__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPose__EXPECTED_HASH, ariac_msgs__msg__PartPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__PartPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__info[] = "info";
static char ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__request[] = "request";
static char ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELDS[] = {
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__GetPreAssemblyPoses_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__Part__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__msg__PartPose__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
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
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__GetPreAssemblyPoses_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__GetPreAssemblyPoses_Event__TYPE_NAME, 40, 40},
      {ariac_msgs__srv__GetPreAssemblyPoses_Event__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__Part__EXPECTED_HASH, ariac_msgs__msg__Part__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__Part__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ariac_msgs__msg__PartPose__EXPECTED_HASH, ariac_msgs__msg__PartPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__msg__PartPose__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__GetPreAssemblyPoses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ariac_msgs__srv__GetPreAssemblyPoses_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string order_id\n"
  "---\n"
  "bool valid_id\n"
  "bool agv_at_station\n"
  "ariac_msgs/PartPose[] parts";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__GetPreAssemblyPoses__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__GetPreAssemblyPoses__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 81, 81},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__GetPreAssemblyPoses_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__GetPreAssemblyPoses_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__GetPreAssemblyPoses_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__GetPreAssemblyPoses_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__GetPreAssemblyPoses_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__GetPreAssemblyPoses_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__GetPreAssemblyPoses__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__PartPose__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__GetPreAssemblyPoses_Event__get_individual_type_description_source(NULL);
    sources[4] = *ariac_msgs__srv__GetPreAssemblyPoses_Request__get_individual_type_description_source(NULL);
    sources[5] = *ariac_msgs__srv__GetPreAssemblyPoses_Response__get_individual_type_description_source(NULL);
    sources[6] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[9] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[10] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__GetPreAssemblyPoses_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__GetPreAssemblyPoses_Response__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__PartPose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__GetPreAssemblyPoses_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__GetPreAssemblyPoses_Event__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__Part__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__msg__PartPose__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__GetPreAssemblyPoses_Request__get_individual_type_description_source(NULL);
    sources[4] = *ariac_msgs__srv__GetPreAssemblyPoses_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[7] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[8] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[9] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
