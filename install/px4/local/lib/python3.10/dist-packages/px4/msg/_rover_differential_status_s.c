// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4:msg/RoverDifferentialStatus.idl
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
#include "px4/msg/detail/rover_differential_status__struct.h"
#include "px4/msg/detail/rover_differential_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4__msg__rover_differential_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("px4.msg._rover_differential_status.RoverDifferentialStatus", full_classname_dest, 58) == 0);
  }
  px4__msg__RoverDifferentialStatus * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // actual_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // desired_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "desired_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->desired_yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // forward_speed_normalized
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_speed_normalized");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forward_speed_normalized = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_diff_normalized
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_diff_normalized");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_diff_normalized = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_yaw_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_yaw_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_yaw_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_yaw_rate_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_yaw_rate_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_yaw_rate_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pid_throttle_integral
    PyObject * field = PyObject_GetAttrString(_pymsg, "pid_throttle_integral");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pid_throttle_integral = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4__msg__rover_differential_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoverDifferentialStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4.msg._rover_differential_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoverDifferentialStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4__msg__RoverDifferentialStatus * ros_message = (px4__msg__RoverDifferentialStatus *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // desired_yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->desired_yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "desired_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_speed_normalized
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forward_speed_normalized);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_speed_normalized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_diff_normalized
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_diff_normalized);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_diff_normalized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_yaw_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_yaw_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_yaw_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_yaw_rate_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_yaw_rate_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_yaw_rate_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pid_throttle_integral
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pid_throttle_integral);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pid_throttle_integral", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}