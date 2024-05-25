// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PerformQualityCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: order_id
  {
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerformQualityCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    rosidl_generator_traits::value_to_yaml(msg.order_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerformQualityCheck_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ariac_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ariac_msgs::srv::PerformQualityCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::PerformQualityCheck_Request & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return "ariac_msgs::srv::PerformQualityCheck_Request";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return "ariac_msgs/srv/PerformQualityCheck_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'quadrant1'
// Member 'quadrant2'
// Member 'quadrant3'
// Member 'quadrant4'
#include "ariac_msgs/msg/detail/quality_issue__traits.hpp"

namespace ariac_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PerformQualityCheck_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: valid_id
  {
    out << "valid_id: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_id, out);
    out << ", ";
  }

  // member: all_passed
  {
    out << "all_passed: ";
    rosidl_generator_traits::value_to_yaml(msg.all_passed, out);
    out << ", ";
  }

  // member: incorrect_tray
  {
    out << "incorrect_tray: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_tray, out);
    out << ", ";
  }

  // member: quadrant1
  {
    out << "quadrant1: ";
    to_flow_style_yaml(msg.quadrant1, out);
    out << ", ";
  }

  // member: quadrant2
  {
    out << "quadrant2: ";
    to_flow_style_yaml(msg.quadrant2, out);
    out << ", ";
  }

  // member: quadrant3
  {
    out << "quadrant3: ";
    to_flow_style_yaml(msg.quadrant3, out);
    out << ", ";
  }

  // member: quadrant4
  {
    out << "quadrant4: ";
    to_flow_style_yaml(msg.quadrant4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerformQualityCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_id: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_id, out);
    out << "\n";
  }

  // member: all_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_passed: ";
    rosidl_generator_traits::value_to_yaml(msg.all_passed, out);
    out << "\n";
  }

  // member: incorrect_tray
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_tray: ";
    rosidl_generator_traits::value_to_yaml(msg.incorrect_tray, out);
    out << "\n";
  }

  // member: quadrant1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant1:\n";
    to_block_style_yaml(msg.quadrant1, out, indentation + 2);
  }

  // member: quadrant2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant2:\n";
    to_block_style_yaml(msg.quadrant2, out, indentation + 2);
  }

  // member: quadrant3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant3:\n";
    to_block_style_yaml(msg.quadrant3, out, indentation + 2);
  }

  // member: quadrant4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant4:\n";
    to_block_style_yaml(msg.quadrant4, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerformQualityCheck_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ariac_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ariac_msgs::srv::PerformQualityCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::PerformQualityCheck_Response & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return "ariac_msgs::srv::PerformQualityCheck_Response";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return "ariac_msgs/srv/PerformQualityCheck_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::QualityIssue>::value> {};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::QualityIssue>::value> {};

template<>
struct is_message<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ariac_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PerformQualityCheck_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PerformQualityCheck_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PerformQualityCheck_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ariac_msgs

namespace rosidl_generator_traits
{

[[deprecated("use ariac_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ariac_msgs::srv::PerformQualityCheck_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::PerformQualityCheck_Event & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck_Event>()
{
  return "ariac_msgs::srv::PerformQualityCheck_Event";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck_Event>()
{
  return "ariac_msgs/srv/PerformQualityCheck_Event";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Event>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Request>::value && has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ariac_msgs::srv::PerformQualityCheck_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck>()
{
  return "ariac_msgs::srv::PerformQualityCheck";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck>()
{
  return "ariac_msgs/srv/PerformQualityCheck";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Request>::value &&
    has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Request>::value &&
    has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::PerformQualityCheck>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_
