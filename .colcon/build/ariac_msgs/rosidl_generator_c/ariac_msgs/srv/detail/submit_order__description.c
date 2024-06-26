// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ariac_msgs:srv/SubmitOrder.idl
// generated code does not contain a copyright notice

#include "ariac_msgs/srv/detail/submit_order__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__SubmitOrder__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xf1, 0x90, 0xdf, 0x86, 0x9b, 0x2f, 0xa4,
      0x9a, 0x0f, 0x19, 0xed, 0x9a, 0x02, 0xa4, 0x8e,
      0x51, 0x52, 0x2f, 0xd1, 0xca, 0x3f, 0x2a, 0xa8,
      0xa9, 0xba, 0x34, 0x59, 0xd5, 0x71, 0xf6, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__SubmitOrder_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x2c, 0xb1, 0x1b, 0x2a, 0xaa, 0x8f, 0xf4,
      0xd0, 0x66, 0xee, 0x2c, 0x79, 0xc6, 0xa3, 0xdd,
      0xe5, 0x4f, 0x6e, 0xec, 0x9b, 0x0a, 0x08, 0x4b,
      0x46, 0x25, 0xa3, 0xba, 0x6c, 0x24, 0xff, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__SubmitOrder_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xc1, 0xe8, 0x98, 0xc4, 0x3b, 0x04, 0xb0,
      0x20, 0x2e, 0xc6, 0x6a, 0x41, 0xea, 0xf7, 0x1f,
      0xd4, 0xb8, 0x19, 0x1e, 0x4a, 0x2b, 0x12, 0xd5,
      0x4f, 0x24, 0x00, 0x71, 0x2c, 0xe6, 0x0e, 0x6f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
const rosidl_type_hash_t *
ariac_msgs__srv__SubmitOrder_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x0e, 0x4c, 0x9a, 0x4d, 0x49, 0xeb, 0x70,
      0xde, 0xd5, 0x24, 0x44, 0x69, 0x97, 0xdb, 0xa7,
      0xa5, 0x46, 0x94, 0x7e, 0x1f, 0x44, 0x9e, 0x27,
      0x89, 0xe1, 0x19, 0xc1, 0xe6, 0xea, 0x11, 0x7e,
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

static char ariac_msgs__srv__SubmitOrder__TYPE_NAME[] = "ariac_msgs/srv/SubmitOrder";
static char ariac_msgs__srv__SubmitOrder_Event__TYPE_NAME[] = "ariac_msgs/srv/SubmitOrder_Event";
static char ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME[] = "ariac_msgs/srv/SubmitOrder_Request";
static char ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME[] = "ariac_msgs/srv/SubmitOrder_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ariac_msgs__srv__SubmitOrder__FIELD_NAME__request_message[] = "request_message";
static char ariac_msgs__srv__SubmitOrder__FIELD_NAME__response_message[] = "response_message";
static char ariac_msgs__srv__SubmitOrder__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__SubmitOrder__FIELDS[] = {
  {
    {ariac_msgs__srv__SubmitOrder__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ariac_msgs__srv__SubmitOrder_Event__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__SubmitOrder__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__srv__SubmitOrder_Event__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
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
ariac_msgs__srv__SubmitOrder__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__SubmitOrder__TYPE_NAME, 26, 26},
      {ariac_msgs__srv__SubmitOrder__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__SubmitOrder__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__srv__SubmitOrder_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__SubmitOrder_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ariac_msgs__srv__SubmitOrder_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__SubmitOrder_Request__FIELD_NAME__order_id[] = "order_id";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__SubmitOrder_Request__FIELDS[] = {
  {
    {ariac_msgs__srv__SubmitOrder_Request__FIELD_NAME__order_id, 8, 8},
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
ariac_msgs__srv__SubmitOrder_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
      {ariac_msgs__srv__SubmitOrder_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__SubmitOrder_Response__FIELD_NAME__success[] = "success";
static char ariac_msgs__srv__SubmitOrder_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__SubmitOrder_Response__FIELDS[] = {
  {
    {ariac_msgs__srv__SubmitOrder_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Response__FIELD_NAME__message, 7, 7},
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
ariac_msgs__srv__SubmitOrder_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
      {ariac_msgs__srv__SubmitOrder_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__info[] = "info";
static char ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__request[] = "request";
static char ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ariac_msgs__srv__SubmitOrder_Event__FIELDS[] = {
  {
    {ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ariac_msgs__srv__SubmitOrder_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
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
ariac_msgs__srv__SubmitOrder_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ariac_msgs__srv__SubmitOrder_Event__TYPE_NAME, 32, 32},
      {ariac_msgs__srv__SubmitOrder_Event__FIELDS, 3, 3},
    },
    {ariac_msgs__srv__SubmitOrder_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = ariac_msgs__srv__SubmitOrder_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ariac_msgs__srv__SubmitOrder_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string order_id\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__SubmitOrder__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__SubmitOrder__TYPE_NAME, 26, 26},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__SubmitOrder_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__SubmitOrder_Request__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__SubmitOrder_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__SubmitOrder_Response__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ariac_msgs__srv__SubmitOrder_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ariac_msgs__srv__SubmitOrder_Event__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__SubmitOrder__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__SubmitOrder__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__srv__SubmitOrder_Event__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__SubmitOrder_Request__get_individual_type_description_source(NULL);
    sources[3] = *ariac_msgs__srv__SubmitOrder_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__SubmitOrder_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__SubmitOrder_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__SubmitOrder_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__SubmitOrder_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ariac_msgs__srv__SubmitOrder_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ariac_msgs__srv__SubmitOrder_Event__get_individual_type_description_source(NULL),
    sources[1] = *ariac_msgs__srv__SubmitOrder_Request__get_individual_type_description_source(NULL);
    sources[2] = *ariac_msgs__srv__SubmitOrder_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
