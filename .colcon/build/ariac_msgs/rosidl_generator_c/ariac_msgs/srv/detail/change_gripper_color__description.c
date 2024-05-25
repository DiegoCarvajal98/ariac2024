// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:srv/ChangeGripperColor.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/srv/detail/change_gripper_color__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__ChangeGripperColor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0x7a, 0xd3, 0xe8, 0x0e, 0xba, 0x10, 0xd2,
      0x12, 0xd5, 0x79, 0x62, 0xdb, 0xb1, 0xb3, 0x47,
      0xb0, 0xf1, 0x8a, 0x6a, 0x16, 0x44, 0xb3, 0x61,
      0xa5, 0x69, 0x7f, 0xd1, 0x89, 0x87, 0xad, 0x5b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__ChangeGripperColor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x83, 0x86, 0x20, 0x8c, 0xf5, 0x4d, 0x03, 0x77,
      0x1b, 0x17, 0xfb, 0x2d, 0x0e, 0xe1, 0x01, 0x1e,
      0x5b, 0x29, 0x20, 0xf2, 0xb7, 0x15, 0xd5, 0xba,
      0x45, 0x4e, 0xbd, 0xf0, 0x18, 0x3f, 0x9a, 0x34,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__ChangeGripperColor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbe, 0x6c, 0xf9, 0x0b, 0xbb, 0x18, 0x85, 0x88,
      0x9f, 0x4d, 0xc2, 0x6a, 0x75, 0xb7, 0xad, 0x7b,
      0x75, 0x31, 0x2c, 0x55, 0x7c, 0x18, 0xff, 0x0b,
      0x59, 0x15, 0x26, 0xca, 0x1c, 0xa3, 0x50, 0x87,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__ChangeGripperColor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0xc6, 0x53, 0x50, 0xed, 0x29, 0x6d, 0xca,
      0x05, 0xd4, 0x3c, 0xea, 0x13, 0x8b, 0x75, 0x9c,
      0xc0, 0x10, 0xef, 0x45, 0xf8, 0x23, 0x76, 0x00,
      0x4b, 0xb8, 0xcb, 0x2f, 0xcb, 0xc8, 0xc2, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
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

static char ariac_msgs__srv__ChangeGripperColor__TYPE_NAME[] = "ariac_msgs/srv/ChangeGripperColor";
static char ariac_msgs__srv__ChangeGripperColor_Event__TYPE_NAME[] = "ariac_msgs/srv/ChangeGripperColor_Event";
static char ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME[] = "ariac_msgs/srv/ChangeGripperColor_Request";
static char ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME[] = "ariac_msgs/srv/ChangeGripperColor_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__request_message[] = "request_message";
static char ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__response_message[] = "response_message";
static char ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__ChangeGripperColor__FIELDS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__ChangeGripperColor_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__ChangeGripperColor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
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
ariac_msgs__srv__ChangeGripperColor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__ChangeGripperColor__TYPE_NAME, 33, 33},
      {ariac_msgs__srv__ChangeGripperColor__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__ChangeGripperColor__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__srv__ChangeGripperColor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__ChangeGripperColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__ChangeGripperColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__r[] = "r";
static char ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__g[] = "g";
static char ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__b[] = "b";
static char ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__alpha[] = "alpha";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__ChangeGripperColor_Request__FIELDS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__FIELD_NAME__alpha, 5, 5},
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
ariac_msgs__srv__ChangeGripperColor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
      {ariac_msgs__srv__ChangeGripperColor_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__ChangeGripperColor_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__ChangeGripperColor_Response__FIELDS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor_Response__FIELD_NAME__success, 7, 7},
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
ariac_msgs__srv__ChangeGripperColor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
      {ariac_msgs__srv__ChangeGripperColor_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__info[] = "info";
static char ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__request[] = "request";
static char ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__ChangeGripperColor_Event__FIELDS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__ChangeGripperColor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
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
ariac_msgs__srv__ChangeGripperColor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__ChangeGripperColor_Event__TYPE_NAME, 39, 39},
      {ariac_msgs__srv__ChangeGripperColor_Event__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__ChangeGripperColor_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__srv__ChangeGripperColor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__ChangeGripperColor_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 r\n"
  "float64 g\n"
  "float64 b\n"
  "float64 alpha\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__ChangeGripperColor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__ChangeGripperColor__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__ChangeGripperColor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__ChangeGripperColor_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__ChangeGripperColor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__ChangeGripperColor_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__ChangeGripperColor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__ChangeGripperColor_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__ChangeGripperColor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__ChangeGripperColor__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__srv__ChangeGripperColor_Event__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__ChangeGripperColor_Request__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__ChangeGripperColor_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__ChangeGripperColor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__ChangeGripperColor_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__ChangeGripperColor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__ChangeGripperColor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__ChangeGripperColor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__ChangeGripperColor_Event__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__srv__ChangeGripperColor_Request__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__ChangeGripperColor_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
