// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mapping_interfaces:srv/ExecuteMappingPlan.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mapping_interfaces/srv/detail/execute_mapping_plan__struct.h"
#include "mapping_interfaces/srv/detail/execute_mapping_plan__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mapping_interfaces__srv__execute_mapping_plan__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("mapping_interfaces.srv._execute_mapping_plan", (char *)PyUnicode_1BYTE_DATA(module_attr), 44) == 0);
    assert(strncmp("ExecuteMappingPlan_Request", (char *)PyUnicode_1BYTE_DATA(name_attr), 26) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Request * ros_message = _ros_message;
  {  // planned_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "planned_poses");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_array__convert_from_py(field, &ros_message->planned_poses)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // capture_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "capture_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->capture_data = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mapping_interfaces__srv__execute_mapping_plan__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecuteMappingPlan_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mapping_interfaces.srv._execute_mapping_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecuteMappingPlan_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Request * ros_message = (mapping_interfaces__srv__ExecuteMappingPlan_Request *)raw_ros_message;
  {  // planned_poses
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_array__convert_to_py(&ros_message->planned_poses);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "planned_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // capture_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->capture_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "capture_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mapping_interfaces/srv/detail/execute_mapping_plan__struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/execute_mapping_plan__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mapping_interfaces__srv__execute_mapping_plan__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("mapping_interfaces.srv._execute_mapping_plan", (char *)PyUnicode_1BYTE_DATA(module_attr), 44) == 0);
    assert(strncmp("ExecuteMappingPlan_Response", (char *)PyUnicode_1BYTE_DATA(name_attr), 27) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // completed_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "completed_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->completed_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // failed_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "failed_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failed_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mapping_interfaces__srv__execute_mapping_plan__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecuteMappingPlan_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mapping_interfaces.srv._execute_mapping_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecuteMappingPlan_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Response * ros_message = (mapping_interfaces__srv__ExecuteMappingPlan_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // completed_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->completed_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "completed_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failed_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->failed_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failed_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mapping_interfaces/srv/detail/execute_mapping_plan__struct.h"
// already included above
// #include "mapping_interfaces/srv/detail/execute_mapping_plan__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes


// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool service_msgs__msg__service_event_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * service_msgs__msg__service_event_info__convert_to_py(void * raw_ros_message);
bool mapping_interfaces__srv__execute_mapping_plan__request__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mapping_interfaces__srv__execute_mapping_plan__request__convert_to_py(void * raw_ros_message);
bool mapping_interfaces__srv__execute_mapping_plan__response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * mapping_interfaces__srv__execute_mapping_plan__response__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mapping_interfaces__srv__execute_mapping_plan__event__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
    if (class_attr == NULL) {
      return false;
    }
    PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
    if (name_attr == NULL) {
      Py_DECREF(class_attr);
      return false;
    }
    PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
    if (module_attr == NULL) {
      Py_DECREF(name_attr);
      Py_DECREF(class_attr);
      return false;
    }

    // PyUnicode_1BYTE_DATA is just a cast
    assert(strncmp("mapping_interfaces.srv._execute_mapping_plan", (char *)PyUnicode_1BYTE_DATA(module_attr), 44) == 0);
    assert(strncmp("ExecuteMappingPlan_Event", (char *)PyUnicode_1BYTE_DATA(name_attr), 24) == 0);

    Py_DECREF(module_attr);
    Py_DECREF(name_attr);
    Py_DECREF(class_attr);
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Event * ros_message = _ros_message;
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!service_msgs__msg__service_event_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // request
    PyObject * field = PyObject_GetAttrString(_pymsg, "request");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'request'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence__init(&(ros_message->request), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mapping_interfaces__srv__ExecuteMappingPlan_Request__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mapping_interfaces__srv__ExecuteMappingPlan_Request * dest = ros_message->request.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mapping_interfaces__srv__execute_mapping_plan__request__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // response
    PyObject * field = PyObject_GetAttrString(_pymsg, "response");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'response'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence__init(&(ros_message->response), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create mapping_interfaces__srv__ExecuteMappingPlan_Response__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    mapping_interfaces__srv__ExecuteMappingPlan_Response * dest = ros_message->response.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!mapping_interfaces__srv__execute_mapping_plan__response__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mapping_interfaces__srv__execute_mapping_plan__event__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ExecuteMappingPlan_Event */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mapping_interfaces.srv._execute_mapping_plan");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ExecuteMappingPlan_Event");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mapping_interfaces__srv__ExecuteMappingPlan_Event * ros_message = (mapping_interfaces__srv__ExecuteMappingPlan_Event *)raw_ros_message;
  {  // info
    PyObject * field = NULL;
    field = service_msgs__msg__service_event_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request
    PyObject * field = NULL;
    size_t size = ros_message->request.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mapping_interfaces__srv__ExecuteMappingPlan_Request * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->request.data[i]);
      PyObject * pyitem = mapping_interfaces__srv__execute_mapping_plan__request__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // response
    PyObject * field = NULL;
    size_t size = ros_message->response.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    mapping_interfaces__srv__ExecuteMappingPlan_Response * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->response.data[i]);
      PyObject * pyitem = mapping_interfaces__srv__execute_mapping_plan__response__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
