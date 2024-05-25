// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/SubmitOrder.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ariac_msgs/srv/detail/submit_order__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ariac_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitOrder_Request & msg,
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
  const SubmitOrder_Request & msg,
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

inline std::string to_yaml(const SubmitOrder_Request & msg, bool use_flow_style = false)
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
  const ariac_msgs::srv::SubmitOrder_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::SubmitOrder_Request & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::SubmitOrder_Request>()
{
  return "ariac_msgs::srv::SubmitOrder_Request";
}

template<>
inline const char * name<ariac_msgs::srv::SubmitOrder_Request>()
{
  return "ariac_msgs/srv/SubmitOrder_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::SubmitOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::SubmitOrder_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::SubmitOrder_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ariac_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitOrder_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmitOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmitOrder_Response & msg, bool use_flow_style = false)
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
  const ariac_msgs::srv::SubmitOrder_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::SubmitOrder_Response & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::SubmitOrder_Response>()
{
  return "ariac_msgs::srv::SubmitOrder_Response";
}

template<>
inline const char * name<ariac_msgs::srv::SubmitOrder_Response>()
{
  return "ariac_msgs/srv/SubmitOrder_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::SubmitOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::SubmitOrder_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::SubmitOrder_Response>
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
  const SubmitOrder_Event & msg,
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
  const SubmitOrder_Event & msg,
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

inline std::string to_yaml(const SubmitOrder_Event & msg, bool use_flow_style = false)
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
  const ariac_msgs::srv::SubmitOrder_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ariac_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ariac_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const ariac_msgs::srv::SubmitOrder_Event & msg)
{
  return ariac_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ariac_msgs::srv::SubmitOrder_Event>()
{
  return "ariac_msgs::srv::SubmitOrder_Event";
}

template<>
inline const char * name<ariac_msgs::srv::SubmitOrder_Event>()
{
  return "ariac_msgs/srv/SubmitOrder_Event";
}

template<>
struct has_fixed_size<ariac_msgs::srv::SubmitOrder_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::SubmitOrder_Event>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::srv::SubmitOrder_Request>::value && has_bounded_size<ariac_msgs::srv::SubmitOrder_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<ariac_msgs::srv::SubmitOrder_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::SubmitOrder>()
{
  return "ariac_msgs::srv::SubmitOrder";
}

template<>
inline const char * name<ariac_msgs::srv::SubmitOrder>()
{
  return "ariac_msgs/srv/SubmitOrder";
}

template<>
struct has_fixed_size<ariac_msgs::srv::SubmitOrder>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::SubmitOrder_Request>::value &&
    has_fixed_size<ariac_msgs::srv::SubmitOrder_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::SubmitOrder>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::SubmitOrder_Request>::value &&
    has_bounded_size<ariac_msgs::srv::SubmitOrder_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::SubmitOrder>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::SubmitOrder_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::SubmitOrder_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__SUBMIT_ORDER__TRAITS_HPP_
