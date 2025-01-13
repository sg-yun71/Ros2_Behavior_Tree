// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_behavior_tree_msgs:msg/PosError.idl
// generated code does not contain a copyright notice
#include "my_behavior_tree_msgs/msg/detail/pos_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_behavior_tree_msgs__msg__PosError__init(my_behavior_tree_msgs__msg__PosError * msg)
{
  if (!msg) {
    return false;
  }
  // linear_error
  // angular_error
  // angular_error_to_target
  return true;
}

void
my_behavior_tree_msgs__msg__PosError__fini(my_behavior_tree_msgs__msg__PosError * msg)
{
  if (!msg) {
    return;
  }
  // linear_error
  // angular_error
  // angular_error_to_target
}

bool
my_behavior_tree_msgs__msg__PosError__are_equal(const my_behavior_tree_msgs__msg__PosError * lhs, const my_behavior_tree_msgs__msg__PosError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_error
  if (lhs->linear_error != rhs->linear_error) {
    return false;
  }
  // angular_error
  if (lhs->angular_error != rhs->angular_error) {
    return false;
  }
  // angular_error_to_target
  if (lhs->angular_error_to_target != rhs->angular_error_to_target) {
    return false;
  }
  return true;
}

bool
my_behavior_tree_msgs__msg__PosError__copy(
  const my_behavior_tree_msgs__msg__PosError * input,
  my_behavior_tree_msgs__msg__PosError * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_error
  output->linear_error = input->linear_error;
  // angular_error
  output->angular_error = input->angular_error;
  // angular_error_to_target
  output->angular_error_to_target = input->angular_error_to_target;
  return true;
}

my_behavior_tree_msgs__msg__PosError *
my_behavior_tree_msgs__msg__PosError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_behavior_tree_msgs__msg__PosError * msg = (my_behavior_tree_msgs__msg__PosError *)allocator.allocate(sizeof(my_behavior_tree_msgs__msg__PosError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_behavior_tree_msgs__msg__PosError));
  bool success = my_behavior_tree_msgs__msg__PosError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_behavior_tree_msgs__msg__PosError__destroy(my_behavior_tree_msgs__msg__PosError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_behavior_tree_msgs__msg__PosError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_behavior_tree_msgs__msg__PosError__Sequence__init(my_behavior_tree_msgs__msg__PosError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_behavior_tree_msgs__msg__PosError * data = NULL;

  if (size) {
    data = (my_behavior_tree_msgs__msg__PosError *)allocator.zero_allocate(size, sizeof(my_behavior_tree_msgs__msg__PosError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_behavior_tree_msgs__msg__PosError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_behavior_tree_msgs__msg__PosError__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_behavior_tree_msgs__msg__PosError__Sequence__fini(my_behavior_tree_msgs__msg__PosError__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_behavior_tree_msgs__msg__PosError__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_behavior_tree_msgs__msg__PosError__Sequence *
my_behavior_tree_msgs__msg__PosError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_behavior_tree_msgs__msg__PosError__Sequence * array = (my_behavior_tree_msgs__msg__PosError__Sequence *)allocator.allocate(sizeof(my_behavior_tree_msgs__msg__PosError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_behavior_tree_msgs__msg__PosError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_behavior_tree_msgs__msg__PosError__Sequence__destroy(my_behavior_tree_msgs__msg__PosError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_behavior_tree_msgs__msg__PosError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_behavior_tree_msgs__msg__PosError__Sequence__are_equal(const my_behavior_tree_msgs__msg__PosError__Sequence * lhs, const my_behavior_tree_msgs__msg__PosError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_behavior_tree_msgs__msg__PosError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_behavior_tree_msgs__msg__PosError__Sequence__copy(
  const my_behavior_tree_msgs__msg__PosError__Sequence * input,
  my_behavior_tree_msgs__msg__PosError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_behavior_tree_msgs__msg__PosError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_behavior_tree_msgs__msg__PosError * data =
      (my_behavior_tree_msgs__msg__PosError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_behavior_tree_msgs__msg__PosError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_behavior_tree_msgs__msg__PosError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_behavior_tree_msgs__msg__PosError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
