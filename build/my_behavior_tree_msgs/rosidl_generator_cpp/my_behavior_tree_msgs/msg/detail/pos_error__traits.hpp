// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_behavior_tree_msgs:msg/PosError.idl
// generated code does not contain a copyright notice

#ifndef MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__TRAITS_HPP_
#define MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_behavior_tree_msgs/msg/detail/pos_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_behavior_tree_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PosError & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_error
  {
    out << "linear_error: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_error, out);
    out << ", ";
  }

  // member: angular_error
  {
    out << "angular_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_error, out);
    out << ", ";
  }

  // member: angular_error_to_target
  {
    out << "angular_error_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_error_to_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_error: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_error, out);
    out << "\n";
  }

  // member: angular_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_error, out);
    out << "\n";
  }

  // member: angular_error_to_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_error_to_target: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_error_to_target, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosError & msg, bool use_flow_style = false)
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

}  // namespace my_behavior_tree_msgs

namespace rosidl_generator_traits
{

[[deprecated("use my_behavior_tree_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_behavior_tree_msgs::msg::PosError & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_behavior_tree_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_behavior_tree_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_behavior_tree_msgs::msg::PosError & msg)
{
  return my_behavior_tree_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_behavior_tree_msgs::msg::PosError>()
{
  return "my_behavior_tree_msgs::msg::PosError";
}

template<>
inline const char * name<my_behavior_tree_msgs::msg::PosError>()
{
  return "my_behavior_tree_msgs/msg/PosError";
}

template<>
struct has_fixed_size<my_behavior_tree_msgs::msg::PosError>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_behavior_tree_msgs::msg::PosError>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_behavior_tree_msgs::msg::PosError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__TRAITS_HPP_
