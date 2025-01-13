// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_behavior_tree_msgs:msg/PosError.idl
// generated code does not contain a copyright notice

#ifndef MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_H_
#define MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PosError in the package my_behavior_tree_msgs.
typedef struct my_behavior_tree_msgs__msg__PosError
{
  float linear_error;
  float angular_error;
  float angular_error_to_target;
} my_behavior_tree_msgs__msg__PosError;

// Struct for a sequence of my_behavior_tree_msgs__msg__PosError.
typedef struct my_behavior_tree_msgs__msg__PosError__Sequence
{
  my_behavior_tree_msgs__msg__PosError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_behavior_tree_msgs__msg__PosError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_BEHAVIOR_TREE_MSGS__MSG__DETAIL__POS_ERROR__STRUCT_H_
