// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mapping_interfaces:srv/ExecuteMappingPlan.idl
// generated code does not contain a copyright notice
#include "mapping_interfaces/srv/detail/execute_mapping_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `planned_poses`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__init(mapping_interfaces__srv__ExecuteMappingPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__init(&msg->planned_poses)) {
    mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(msg);
    return false;
  }
  // capture_data
  return true;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(mapping_interfaces__srv__ExecuteMappingPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // planned_poses
  geometry_msgs__msg__PoseArray__fini(&msg->planned_poses);
  // capture_data
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Request * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->planned_poses), &(rhs->planned_poses)))
  {
    return false;
  }
  // capture_data
  if (lhs->capture_data != rhs->capture_data) {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Request * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->planned_poses), &(output->planned_poses)))
  {
    return false;
  }
  // capture_data
  output->capture_data = input->capture_data;
  return true;
}

mapping_interfaces__srv__ExecuteMappingPlan_Request *
mapping_interfaces__srv__ExecuteMappingPlan_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Request * msg = (mapping_interfaces__srv__ExecuteMappingPlan_Request *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Request));
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Request__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Request * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__ExecuteMappingPlan_Request *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__ExecuteMappingPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(&data[i - 1]);
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
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__fini(mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * array)
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
      mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(&array->data[i]);
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

mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence *
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * array = (mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__ExecuteMappingPlan_Request * data =
      (mapping_interfaces__srv__ExecuteMappingPlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__ExecuteMappingPlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__init(mapping_interfaces__srv__ExecuteMappingPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(msg);
    return false;
  }
  // completed_count
  // failed_index
  return true;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(mapping_interfaces__srv__ExecuteMappingPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // completed_count
  // failed_index
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Response * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // completed_count
  if (lhs->completed_count != rhs->completed_count) {
    return false;
  }
  // failed_index
  if (lhs->failed_index != rhs->failed_index) {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Response * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // completed_count
  output->completed_count = input->completed_count;
  // failed_index
  output->failed_index = input->failed_index;
  return true;
}

mapping_interfaces__srv__ExecuteMappingPlan_Response *
mapping_interfaces__srv__ExecuteMappingPlan_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Response * msg = (mapping_interfaces__srv__ExecuteMappingPlan_Response *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Response));
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Response__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Response * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__ExecuteMappingPlan_Response *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__ExecuteMappingPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(&data[i - 1]);
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
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__fini(mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * array)
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
      mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(&array->data[i]);
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

mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence *
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * array = (mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__ExecuteMappingPlan_Response * data =
      (mapping_interfaces__srv__ExecuteMappingPlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__ExecuteMappingPlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mapping_interfaces/srv/detail/execute_mapping_plan__functions.h"

bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__init(mapping_interfaces__srv__ExecuteMappingPlan_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(msg);
    return false;
  }
  // request
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(&msg->request, 0)) {
    mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(msg);
    return false;
  }
  // response
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(&msg->response, 0)) {
    mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(msg);
    return false;
  }
  return true;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(mapping_interfaces__srv__ExecuteMappingPlan_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__fini(&msg->request);
  // response
  mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__fini(&msg->response);
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Event * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Event * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mapping_interfaces__srv__ExecuteMappingPlan_Event *
mapping_interfaces__srv__ExecuteMappingPlan_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Event * msg = (mapping_interfaces__srv__ExecuteMappingPlan_Event *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Event));
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Event__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__init(mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Event * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__ExecuteMappingPlan_Event *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__ExecuteMappingPlan_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(&data[i - 1]);
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
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__fini(mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * array)
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
      mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(&array->data[i]);
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

mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence *
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * array = (mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__destroy(mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__are_equal(const mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * lhs, const mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence__copy(
  const mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * input,
  mapping_interfaces__srv__ExecuteMappingPlan_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__ExecuteMappingPlan_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__ExecuteMappingPlan_Event * data =
      (mapping_interfaces__srv__ExecuteMappingPlan_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__ExecuteMappingPlan_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__ExecuteMappingPlan_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
