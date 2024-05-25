// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__PerformQualityCheck__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x61, 0x45, 0x38, 0x55, 0xc7, 0x17, 0xbc,
      0xd6, 0x19, 0xf7, 0xc8, 0x0c, 0x99, 0x60, 0x21,
      0x7f, 0x57, 0x0e, 0x4c, 0xab, 0x51, 0xb3, 0x42,
      0x69, 0x1e, 0x4d, 0x23, 0x93, 0xfc, 0xd1, 0xee,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__PerformQualityCheck_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xe3, 0x25, 0x1a, 0xdf, 0xa5, 0xbd, 0xf6,
      0x4e, 0xcf, 0x0b, 0xfd, 0xc9, 0x2c, 0xa3, 0x9c,
      0x00, 0x8c, 0xc7, 0x89, 0x55, 0xff, 0x1d, 0x5f,
      0xfb, 0x6e, 0xc2, 0xcc, 0x45, 0x68, 0xfe, 0x31,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__PerformQualityCheck_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xbc, 0x22, 0xfc, 0x49, 0x36, 0x1e, 0x7c,
      0xb5, 0xd4, 0x7e, 0x19, 0x75, 0x0c, 0x71, 0xd4,
      0x55, 0xd0, 0xac, 0xd3, 0x8f, 0x10, 0x5f, 0xca,
      0x5d, 0x9a, 0x50, 0xef, 0x19, 0x5d, 0x73, 0x78,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__PerformQualityCheck_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x3d, 0x2a, 0xfa, 0x6b, 0x55, 0x92, 0xde,
      0x05, 0x29, 0x69, 0x01, 0x4d, 0xc2, 0x04, 0xce,
      0xf1, 0x83, 0xe8, 0x8f, 0x63, 0x27, 0x03, 0x1e,
      0x86, 0xd8, 0x71, 0xfc, 0x01, 0x7b, 0x68, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ariac_msgs/msg/detail/quality_issue__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ariac_msgs__msg__QualityIssue__EXPECTED_HASH = {1, {
    0x22, 0x87, 0x58, 0xc1, 0x3c, 0x9c, 0x8c, 0xaf,
    0x53, 0x66, 0xbb, 0xb1, 0x86, 0xa6, 0x1b, 0x69,
    0x93, 0x18, 0x36, 0x2d, 0xff, 0x66, 0x88, 0x02,
    0xb7, 0x63, 0x39, 0x2b, 0xb1, 0xf9, 0x96, 0x62,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ariac_msgs__srv__PerformQualityCheck__TYPE_NAME[] = "ariac_msgs/srv/PerformQualityCheck";
static char ariac_msgs__msg__QualityIssue__TYPE_NAME[] = "ariac_msgs/msg/QualityIssue";
static char ariac_msgs__srv__PerformQualityCheck_Event__TYPE_NAME[] = "ariac_msgs/srv/PerformQualityCheck_Event";
static char ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME[] = "ariac_msgs/srv/PerformQualityCheck_Request";
static char ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME[] = "ariac_msgs/srv/PerformQualityCheck_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__request_message[] = "request_message";
static char ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__response_message[] = "response_message";
static char ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__PerformQualityCheck__FIELDS[] = {
  {
    {ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__PerformQualityCheck_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__PerformQualityCheck__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__PerformQualityCheck__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__PerformQualityCheck__TYPE_NAME, 34, 34},
      {ariac_msgs__srv__PerformQualityCheck__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__PerformQualityCheck__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__QualityIssue__EXPECTED_HASH, ariac_msgs__msg__QualityIssue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__QualityIssue__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__PerformQualityCheck_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__PerformQualityCheck_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ariac_msgs__srv__PerformQualityCheck_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__PerformQualityCheck_Request__FIELD_NAME__order_id[] = "order_id";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__PerformQualityCheck_Request__FIELDS[] = {
  {
    {ariac_msgs__srv__PerformQualityCheck_Request__FIELD_NAME__order_id, 8, 8},
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
ariac_msgs__srv__PerformQualityCheck_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
      {ariac_msgs__srv__PerformQualityCheck_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__valid_id[] = "valid_id";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__all_passed[] = "all_passed";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__incorrect_tray[] = "incorrect_tray";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant1[] = "quadrant1";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant2[] = "quadrant2";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant3[] = "quadrant3";
static char ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant4[] = "quadrant4";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__PerformQualityCheck_Response__FIELDS[] = {
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__valid_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__all_passed, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__incorrect_tray, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant1, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant2, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant3, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__FIELD_NAME__quadrant4, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__PerformQualityCheck_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__PerformQualityCheck_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
      {ariac_msgs__srv__PerformQualityCheck_Response__FIELDS, 7, 7},
    },
    {ariac_msgs__srv__PerformQualityCheck_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__QualityIssue__EXPECTED_HASH, ariac_msgs__msg__QualityIssue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__QualityIssue__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__info[] = "info";
static char ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__request[] = "request";
static char ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__PerformQualityCheck_Event__FIELDS[] = {
  {
    {ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__PerformQualityCheck_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__msg__QualityIssue__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ariac_msgs__srv__PerformQualityCheck_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__PerformQualityCheck_Event__TYPE_NAME, 40, 40},
      {ariac_msgs__srv__PerformQualityCheck_Event__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__PerformQualityCheck_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&ariac_msgs__msg__QualityIssue__EXPECTED_HASH, ariac_msgs__msg__QualityIssue__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__msg__QualityIssue__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__PerformQualityCheck_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__PerformQualityCheck_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string order_id\n"
  "---\n"
  "bool valid_id\n"
  "bool all_passed\n"
  "bool incorrect_tray\n"
  "ariac_msgs/QualityIssue quadrant1\n"
  "ariac_msgs/QualityIssue quadrant2\n"
  "ariac_msgs/QualityIssue quadrant3\n"
  "ariac_msgs/QualityIssue quadrant4";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__PerformQualityCheck__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__PerformQualityCheck__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 205, 205},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__PerformQualityCheck_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__PerformQualityCheck_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__PerformQualityCheck_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__PerformQualityCheck_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__PerformQualityCheck_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__PerformQualityCheck_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__PerformQualityCheck__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__PerformQualityCheck__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__QualityIssue__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__PerformQualityCheck_Event__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__PerformQualityCheck_Request__get_individual_type_description_source(NULL);
    sources[4] = *ariac_msgs__srv__PerformQualityCheck_Response__get_individual_type_description_source(NULL);
    sources[5] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__PerformQualityCheck_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__PerformQualityCheck_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__PerformQualityCheck_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__PerformQualityCheck_Response__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__QualityIssue__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__PerformQualityCheck_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__PerformQualityCheck_Event__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__msg__QualityIssue__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__PerformQualityCheck_Request__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__PerformQualityCheck_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
