// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mapping_interfaces:srv/GenerateMappingPlan.idl
// generated code does not contain a copyright notice
#include "mapping_interfaces/srv/detail/generate_mapping_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `planning_frame`
#include "rosidl_runtime_c/string_functions.h"

bool
mapping_interfaces__srv__GenerateMappingPlan_Request__init(mapping_interfaces__srv__GenerateMappingPlan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // planning_frame
  if (!rosidl_runtime_c__String__init(&msg->planning_frame)) {
    mapping_interfaces__srv__GenerateMappingPlan_Request__fini(msg);
    return false;
  }
  // radius
  // start_angle_deg
  // end_angle_deg
  // num_views
  // height
  // face_outward
  return true;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Request__fini(mapping_interfaces__srv__GenerateMappingPlan_Request * msg)
{
  if (!msg) {
    return;
  }
  // planning_frame
  rosidl_runtime_c__String__fini(&msg->planning_frame);
  // radius
  // start_angle_deg
  // end_angle_deg
  // num_views
  // height
  // face_outward
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Request__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Request * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planning_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planning_frame), &(rhs->planning_frame)))
  {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  // start_angle_deg
  if (lhs->start_angle_deg != rhs->start_angle_deg) {
    return false;
  }
  // end_angle_deg
  if (lhs->end_angle_deg != rhs->end_angle_deg) {
    return false;
  }
  // num_views
  if (lhs->num_views != rhs->num_views) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // face_outward
  if (lhs->face_outward != rhs->face_outward) {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Request__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Request * input,
  mapping_interfaces__srv__GenerateMappingPlan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // planning_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->planning_frame), &(output->planning_frame)))
  {
    return false;
  }
  // radius
  output->radius = input->radius;
  // start_angle_deg
  output->start_angle_deg = input->start_angle_deg;
  // end_angle_deg
  output->end_angle_deg = input->end_angle_deg;
  // num_views
  output->num_views = input->num_views;
  // height
  output->height = input->height;
  // face_outward
  output->face_outward = input->face_outward;
  return true;
}

mapping_interfaces__srv__GenerateMappingPlan_Request *
mapping_interfaces__srv__GenerateMappingPlan_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Request * msg = (mapping_interfaces__srv__GenerateMappingPlan_Request *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request));
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Request__destroy(mapping_interfaces__srv__GenerateMappingPlan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__GenerateMappingPlan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Request * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__GenerateMappingPlan_Request *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__GenerateMappingPlan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__GenerateMappingPlan_Request__fini(&data[i - 1]);
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
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * array)
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
      mapping_interfaces__srv__GenerateMappingPlan_Request__fini(&array->data[i]);
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

mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * array = (mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__destroy(mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * input,
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__GenerateMappingPlan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__GenerateMappingPlan_Request * data =
      (mapping_interfaces__srv__GenerateMappingPlan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__GenerateMappingPlan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__GenerateMappingPlan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `planned_poses`
#include "geometry_msgs/msg/detail/pose_array__functions.h"

bool
mapping_interfaces__srv__GenerateMappingPlan_Response__init(mapping_interfaces__srv__GenerateMappingPlan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mapping_interfaces__srv__GenerateMappingPlan_Response__fini(msg);
    return false;
  }
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__init(&msg->planned_poses)) {
    mapping_interfaces__srv__GenerateMappingPlan_Response__fini(msg);
    return false;
  }
  return true;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Response__fini(mapping_interfaces__srv__GenerateMappingPlan_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // planned_poses
  geometry_msgs__msg__PoseArray__fini(&msg->planned_poses);
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Response__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Response * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Response * rhs)
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
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__are_equal(
      &(lhs->planned_poses), &(rhs->planned_poses)))
  {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Response__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Response * input,
  mapping_interfaces__srv__GenerateMappingPlan_Response * output)
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
  // planned_poses
  if (!geometry_msgs__msg__PoseArray__copy(
      &(input->planned_poses), &(output->planned_poses)))
  {
    return false;
  }
  return true;
}

mapping_interfaces__srv__GenerateMappingPlan_Response *
mapping_interfaces__srv__GenerateMappingPlan_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Response * msg = (mapping_interfaces__srv__GenerateMappingPlan_Response *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response));
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Response__destroy(mapping_interfaces__srv__GenerateMappingPlan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__GenerateMappingPlan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Response * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__GenerateMappingPlan_Response *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__GenerateMappingPlan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__GenerateMappingPlan_Response__fini(&data[i - 1]);
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
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * array)
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
      mapping_interfaces__srv__GenerateMappingPlan_Response__fini(&array->data[i]);
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

mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * array = (mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__destroy(mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * input,
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__GenerateMappingPlan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__GenerateMappingPlan_Response * data =
      (mapping_interfaces__srv__GenerateMappingPlan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__GenerateMappingPlan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__GenerateMappingPlan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Response__copy(
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
// #include "mapping_interfaces/srv/detail/generate_mapping_plan__functions.h"

bool
mapping_interfaces__srv__GenerateMappingPlan_Event__init(mapping_interfaces__srv__GenerateMappingPlan_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__fini(msg);
    return false;
  }
  // request
  if (!mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__init(&msg->request, 0)) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__fini(msg);
    return false;
  }
  // response
  if (!mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__init(&msg->response, 0)) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__fini(msg);
    return false;
  }
  return true;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Event__fini(mapping_interfaces__srv__GenerateMappingPlan_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__fini(&msg->request);
  // response
  mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__fini(&msg->response);
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Event__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Event * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Event * rhs)
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
  if (!mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Event__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Event * input,
  mapping_interfaces__srv__GenerateMappingPlan_Event * output)
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
  if (!mapping_interfaces__srv__GenerateMappingPlan_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__GenerateMappingPlan_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mapping_interfaces__srv__GenerateMappingPlan_Event *
mapping_interfaces__srv__GenerateMappingPlan_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Event * msg = (mapping_interfaces__srv__GenerateMappingPlan_Event *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event));
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Event__destroy(mapping_interfaces__srv__GenerateMappingPlan_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__init(mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Event * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__GenerateMappingPlan_Event *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__GenerateMappingPlan_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__GenerateMappingPlan_Event__fini(&data[i - 1]);
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
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__fini(mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * array)
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
      mapping_interfaces__srv__GenerateMappingPlan_Event__fini(&array->data[i]);
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

mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence *
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * array = (mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__destroy(mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__are_equal(const mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * lhs, const mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence__copy(
  const mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * input,
  mapping_interfaces__srv__GenerateMappingPlan_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__GenerateMappingPlan_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__GenerateMappingPlan_Event * data =
      (mapping_interfaces__srv__GenerateMappingPlan_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__GenerateMappingPlan_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__GenerateMappingPlan_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__GenerateMappingPlan_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
