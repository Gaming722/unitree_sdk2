// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot:msg/MotorCmd.idl
// generated code does not contain a copyright notice

#ifndef ROBOT__MSG__DETAIL__MOTOR_CMD__TRAITS_HPP_
#define ROBOT__MSG__DETAIL__MOTOR_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot/msg/detail/motor_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: q
  {
    if (msg.q.size() == 0) {
      out << "q: []";
    } else {
      out << "q: [";
      size_t pending_items = msg.q.size();
      for (auto item : msg.q) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tau
  {
    if (msg.tau.size() == 0) {
      out << "tau: []";
    } else {
      out << "tau: [";
      size_t pending_items = msg.tau.size();
      for (auto item : msg.tau) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MotorCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: q
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.q.size() == 0) {
      out << "q: []\n";
    } else {
      out << "q:\n";
      for (auto item : msg.q) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: tau
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tau.size() == 0) {
      out << "tau: []\n";
    } else {
      out << "tau:\n";
      for (auto item : msg.tau) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorCmd & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot

namespace rosidl_generator_traits
{

[[deprecated("use robot::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot::msg::MotorCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot::msg::MotorCmd & msg)
{
  return robot::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot::msg::MotorCmd>()
{
  return "robot::msg::MotorCmd";
}

template<>
inline const char * name<robot::msg::MotorCmd>()
{
  return "robot/msg/MotorCmd";
}

template<>
struct has_fixed_size<robot::msg::MotorCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot::msg::MotorCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot::msg::MotorCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT__MSG__DETAIL__MOTOR_CMD__TRAITS_HPP_
