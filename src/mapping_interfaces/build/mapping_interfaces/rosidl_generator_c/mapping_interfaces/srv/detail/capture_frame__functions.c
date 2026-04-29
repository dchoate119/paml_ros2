// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mapping_interfaces:srv/CaptureFrame.idl
// generated code does not contain a copyright notice
#include "mapping_interfaces/srv/detail/capture_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mapping_interfaces__srv__CaptureFrame_Request__init(mapping_interfaces__srv__CaptureFrame_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mapping_interfaces__srv__CaptureFrame_Request__fini(mapping_interfaces__srv__CaptureFrame_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mapping_interfaces__srv__CaptureFrame_Request__are_equal(const mapping_interfaces__srv__CaptureFrame_Request * lhs, const mapping_interfaces__srv__CaptureFrame_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Request__copy(
  const mapping_interfaces__srv__CaptureFrame_Request * input,
  mapping_interfaces__srv__CaptureFrame_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mapping_interfaces__srv__CaptureFrame_Request *
mapping_interfaces__srv__CaptureFrame_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Request * msg = (mapping_interfaces__srv__CaptureFrame_Request *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__CaptureFrame_Request));
  bool success = mapping_interfaces__srv__CaptureFrame_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__CaptureFrame_Request__destroy(mapping_interfaces__srv__CaptureFrame_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__CaptureFrame_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__CaptureFrame_Request__Sequence__init(mapping_interfaces__srv__CaptureFrame_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Request * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__CaptureFrame_Request *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__CaptureFrame_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__CaptureFrame_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__CaptureFrame_Request__fini(&data[i - 1]);
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
mapping_interfaces__srv__CaptureFrame_Request__Sequence__fini(mapping_interfaces__srv__CaptureFrame_Request__Sequence * array)
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
      mapping_interfaces__srv__CaptureFrame_Request__fini(&array->data[i]);
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

mapping_interfaces__srv__CaptureFrame_Request__Sequence *
mapping_interfaces__srv__CaptureFrame_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Request__Sequence * array = (mapping_interfaces__srv__CaptureFrame_Request__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__CaptureFrame_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__CaptureFrame_Request__Sequence__destroy(mapping_interfaces__srv__CaptureFrame_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__CaptureFrame_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__CaptureFrame_Request__Sequence__are_equal(const mapping_interfaces__srv__CaptureFrame_Request__Sequence * lhs, const mapping_interfaces__srv__CaptureFrame_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Request__Sequence__copy(
  const mapping_interfaces__srv__CaptureFrame_Request__Sequence * input,
  mapping_interfaces__srv__CaptureFrame_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__CaptureFrame_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__CaptureFrame_Request * data =
      (mapping_interfaces__srv__CaptureFrame_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__CaptureFrame_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__CaptureFrame_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `rgb`
// Member `depth`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `camera_pose`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
mapping_interfaces__srv__CaptureFrame_Response__init(mapping_interfaces__srv__CaptureFrame_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__init(&msg->rgb)) {
    mapping_interfaces__srv__CaptureFrame_Response__fini(msg);
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__init(&msg->depth)) {
    mapping_interfaces__srv__CaptureFrame_Response__fini(msg);
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__TransformStamped__init(&msg->camera_pose)) {
    mapping_interfaces__srv__CaptureFrame_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mapping_interfaces__srv__CaptureFrame_Response__fini(msg);
    return false;
  }
  return true;
}

void
mapping_interfaces__srv__CaptureFrame_Response__fini(mapping_interfaces__srv__CaptureFrame_Response * msg)
{
  if (!msg) {
    return;
  }
  // rgb
  sensor_msgs__msg__Image__fini(&msg->rgb);
  // depth
  sensor_msgs__msg__Image__fini(&msg->depth);
  // camera_pose
  geometry_msgs__msg__TransformStamped__fini(&msg->camera_pose);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
mapping_interfaces__srv__CaptureFrame_Response__are_equal(const mapping_interfaces__srv__CaptureFrame_Response * lhs, const mapping_interfaces__srv__CaptureFrame_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->rgb), &(rhs->rgb)))
  {
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->depth), &(rhs->depth)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->camera_pose), &(rhs->camera_pose)))
  {
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
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Response__copy(
  const mapping_interfaces__srv__CaptureFrame_Response * input,
  mapping_interfaces__srv__CaptureFrame_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // rgb
  if (!sensor_msgs__msg__Image__copy(
      &(input->rgb), &(output->rgb)))
  {
    return false;
  }
  // depth
  if (!sensor_msgs__msg__Image__copy(
      &(input->depth), &(output->depth)))
  {
    return false;
  }
  // camera_pose
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->camera_pose), &(output->camera_pose)))
  {
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
  return true;
}

mapping_interfaces__srv__CaptureFrame_Response *
mapping_interfaces__srv__CaptureFrame_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Response * msg = (mapping_interfaces__srv__CaptureFrame_Response *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__CaptureFrame_Response));
  bool success = mapping_interfaces__srv__CaptureFrame_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__CaptureFrame_Response__destroy(mapping_interfaces__srv__CaptureFrame_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__CaptureFrame_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__CaptureFrame_Response__Sequence__init(mapping_interfaces__srv__CaptureFrame_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Response * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__CaptureFrame_Response *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__CaptureFrame_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__CaptureFrame_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__CaptureFrame_Response__fini(&data[i - 1]);
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
mapping_interfaces__srv__CaptureFrame_Response__Sequence__fini(mapping_interfaces__srv__CaptureFrame_Response__Sequence * array)
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
      mapping_interfaces__srv__CaptureFrame_Response__fini(&array->data[i]);
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

mapping_interfaces__srv__CaptureFrame_Response__Sequence *
mapping_interfaces__srv__CaptureFrame_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Response__Sequence * array = (mapping_interfaces__srv__CaptureFrame_Response__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__CaptureFrame_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__CaptureFrame_Response__Sequence__destroy(mapping_interfaces__srv__CaptureFrame_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__CaptureFrame_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__CaptureFrame_Response__Sequence__are_equal(const mapping_interfaces__srv__CaptureFrame_Response__Sequence * lhs, const mapping_interfaces__srv__CaptureFrame_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Response__Sequence__copy(
  const mapping_interfaces__srv__CaptureFrame_Response__Sequence * input,
  mapping_interfaces__srv__CaptureFrame_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__CaptureFrame_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__CaptureFrame_Response * data =
      (mapping_interfaces__srv__CaptureFrame_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__CaptureFrame_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__CaptureFrame_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Response__copy(
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
// #include "mapping_interfaces/srv/detail/capture_frame__functions.h"

bool
mapping_interfaces__srv__CaptureFrame_Event__init(mapping_interfaces__srv__CaptureFrame_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mapping_interfaces__srv__CaptureFrame_Event__fini(msg);
    return false;
  }
  // request
  if (!mapping_interfaces__srv__CaptureFrame_Request__Sequence__init(&msg->request, 0)) {
    mapping_interfaces__srv__CaptureFrame_Event__fini(msg);
    return false;
  }
  // response
  if (!mapping_interfaces__srv__CaptureFrame_Response__Sequence__init(&msg->response, 0)) {
    mapping_interfaces__srv__CaptureFrame_Event__fini(msg);
    return false;
  }
  return true;
}

void
mapping_interfaces__srv__CaptureFrame_Event__fini(mapping_interfaces__srv__CaptureFrame_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mapping_interfaces__srv__CaptureFrame_Request__Sequence__fini(&msg->request);
  // response
  mapping_interfaces__srv__CaptureFrame_Response__Sequence__fini(&msg->response);
}

bool
mapping_interfaces__srv__CaptureFrame_Event__are_equal(const mapping_interfaces__srv__CaptureFrame_Event * lhs, const mapping_interfaces__srv__CaptureFrame_Event * rhs)
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
  if (!mapping_interfaces__srv__CaptureFrame_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__CaptureFrame_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Event__copy(
  const mapping_interfaces__srv__CaptureFrame_Event * input,
  mapping_interfaces__srv__CaptureFrame_Event * output)
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
  if (!mapping_interfaces__srv__CaptureFrame_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mapping_interfaces__srv__CaptureFrame_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mapping_interfaces__srv__CaptureFrame_Event *
mapping_interfaces__srv__CaptureFrame_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Event * msg = (mapping_interfaces__srv__CaptureFrame_Event *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mapping_interfaces__srv__CaptureFrame_Event));
  bool success = mapping_interfaces__srv__CaptureFrame_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mapping_interfaces__srv__CaptureFrame_Event__destroy(mapping_interfaces__srv__CaptureFrame_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mapping_interfaces__srv__CaptureFrame_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mapping_interfaces__srv__CaptureFrame_Event__Sequence__init(mapping_interfaces__srv__CaptureFrame_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Event * data = NULL;

  if (size) {
    data = (mapping_interfaces__srv__CaptureFrame_Event *)allocator.zero_allocate(size, sizeof(mapping_interfaces__srv__CaptureFrame_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mapping_interfaces__srv__CaptureFrame_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mapping_interfaces__srv__CaptureFrame_Event__fini(&data[i - 1]);
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
mapping_interfaces__srv__CaptureFrame_Event__Sequence__fini(mapping_interfaces__srv__CaptureFrame_Event__Sequence * array)
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
      mapping_interfaces__srv__CaptureFrame_Event__fini(&array->data[i]);
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

mapping_interfaces__srv__CaptureFrame_Event__Sequence *
mapping_interfaces__srv__CaptureFrame_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mapping_interfaces__srv__CaptureFrame_Event__Sequence * array = (mapping_interfaces__srv__CaptureFrame_Event__Sequence *)allocator.allocate(sizeof(mapping_interfaces__srv__CaptureFrame_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mapping_interfaces__srv__CaptureFrame_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mapping_interfaces__srv__CaptureFrame_Event__Sequence__destroy(mapping_interfaces__srv__CaptureFrame_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mapping_interfaces__srv__CaptureFrame_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mapping_interfaces__srv__CaptureFrame_Event__Sequence__are_equal(const mapping_interfaces__srv__CaptureFrame_Event__Sequence * lhs, const mapping_interfaces__srv__CaptureFrame_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mapping_interfaces__srv__CaptureFrame_Event__Sequence__copy(
  const mapping_interfaces__srv__CaptureFrame_Event__Sequence * input,
  mapping_interfaces__srv__CaptureFrame_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mapping_interfaces__srv__CaptureFrame_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mapping_interfaces__srv__CaptureFrame_Event * data =
      (mapping_interfaces__srv__CaptureFrame_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mapping_interfaces__srv__CaptureFrame_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mapping_interfaces__srv__CaptureFrame_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mapping_interfaces__srv__CaptureFrame_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
