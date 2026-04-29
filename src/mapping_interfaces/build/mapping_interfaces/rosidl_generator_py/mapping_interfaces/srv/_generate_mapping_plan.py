# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mapping_interfaces:srv/GenerateMappingPlan.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenerateMappingPlan_Request(type):
    """Metaclass of message 'GenerateMappingPlan_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mapping_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mapping_interfaces.srv.GenerateMappingPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_mapping_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_mapping_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_mapping_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_mapping_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_mapping_plan__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateMappingPlan_Request(metaclass=Metaclass_GenerateMappingPlan_Request):
    """Message class 'GenerateMappingPlan_Request'."""

    __slots__ = [
        '_planning_frame',
        '_radius',
        '_start_angle_deg',
        '_end_angle_deg',
        '_num_views',
        '_height',
        '_face_outward',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'planning_frame': 'string',
        'radius': 'float',
        'start_angle_deg': 'float',
        'end_angle_deg': 'float',
        'num_views': 'int32',
        'height': 'float',
        'face_outward': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.planning_frame = kwargs.get('planning_frame', str())
        self.radius = kwargs.get('radius', float())
        self.start_angle_deg = kwargs.get('start_angle_deg', float())
        self.end_angle_deg = kwargs.get('end_angle_deg', float())
        self.num_views = kwargs.get('num_views', int())
        self.height = kwargs.get('height', float())
        self.face_outward = kwargs.get('face_outward', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.planning_frame != other.planning_frame:
            return False
        if self.radius != other.radius:
            return False
        if self.start_angle_deg != other.start_angle_deg:
            return False
        if self.end_angle_deg != other.end_angle_deg:
            return False
        if self.num_views != other.num_views:
            return False
        if self.height != other.height:
            return False
        if self.face_outward != other.face_outward:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def planning_frame(self):
        """Message field 'planning_frame'."""
        return self._planning_frame

    @planning_frame.setter
    def planning_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'planning_frame' field must be of type 'str'"
        self._planning_frame = value

    @builtins.property
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._radius = value

    @builtins.property
    def start_angle_deg(self):
        """Message field 'start_angle_deg'."""
        return self._start_angle_deg

    @start_angle_deg.setter
    def start_angle_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'start_angle_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'start_angle_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._start_angle_deg = value

    @builtins.property
    def end_angle_deg(self):
        """Message field 'end_angle_deg'."""
        return self._end_angle_deg

    @end_angle_deg.setter
    def end_angle_deg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'end_angle_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'end_angle_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._end_angle_deg = value

    @builtins.property
    def num_views(self):
        """Message field 'num_views'."""
        return self._num_views

    @num_views.setter
    def num_views(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_views' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_views' field must be an integer in [-2147483648, 2147483647]"
        self._num_views = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height = value

    @builtins.property
    def face_outward(self):
        """Message field 'face_outward'."""
        return self._face_outward

    @face_outward.setter
    def face_outward(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'face_outward' field must be of type 'bool'"
        self._face_outward = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateMappingPlan_Response(type):
    """Metaclass of message 'GenerateMappingPlan_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mapping_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mapping_interfaces.srv.GenerateMappingPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_mapping_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_mapping_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_mapping_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_mapping_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_mapping_plan__response

            from geometry_msgs.msg import PoseArray
            if PoseArray.__class__._TYPE_SUPPORT is None:
                PoseArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateMappingPlan_Response(metaclass=Metaclass_GenerateMappingPlan_Response):
    """Message class 'GenerateMappingPlan_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_planned_poses',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'planned_poses': 'geometry_msgs/PoseArray',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        from geometry_msgs.msg import PoseArray
        self.planned_poses = kwargs.get('planned_poses', PoseArray())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.planned_poses != other.planned_poses:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def planned_poses(self):
        """Message field 'planned_poses'."""
        return self._planned_poses

    @planned_poses.setter
    def planned_poses(self, value):
        if self._check_fields:
            from geometry_msgs.msg import PoseArray
            assert \
                isinstance(value, PoseArray), \
                "The 'planned_poses' field must be a sub message of type 'PoseArray'"
        self._planned_poses = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GenerateMappingPlan_Event(type):
    """Metaclass of message 'GenerateMappingPlan_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mapping_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mapping_interfaces.srv.GenerateMappingPlan_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__generate_mapping_plan__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__generate_mapping_plan__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__generate_mapping_plan__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__generate_mapping_plan__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__generate_mapping_plan__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenerateMappingPlan_Event(metaclass=Metaclass_GenerateMappingPlan_Event):
    """Message class 'GenerateMappingPlan_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mapping_interfaces/GenerateMappingPlan_Request, 1>',
        'response': 'sequence<mapping_interfaces/GenerateMappingPlan_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mapping_interfaces', 'srv'], 'GenerateMappingPlan_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mapping_interfaces', 'srv'], 'GenerateMappingPlan_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mapping_interfaces.srv import GenerateMappingPlan_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GenerateMappingPlan_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'GenerateMappingPlan_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mapping_interfaces.srv import GenerateMappingPlan_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, GenerateMappingPlan_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'GenerateMappingPlan_Response'"
        self._response = value


class Metaclass_GenerateMappingPlan(type):
    """Metaclass of service 'GenerateMappingPlan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mapping_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mapping_interfaces.srv.GenerateMappingPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__generate_mapping_plan

            from mapping_interfaces.srv import _generate_mapping_plan
            if _generate_mapping_plan.Metaclass_GenerateMappingPlan_Request._TYPE_SUPPORT is None:
                _generate_mapping_plan.Metaclass_GenerateMappingPlan_Request.__import_type_support__()
            if _generate_mapping_plan.Metaclass_GenerateMappingPlan_Response._TYPE_SUPPORT is None:
                _generate_mapping_plan.Metaclass_GenerateMappingPlan_Response.__import_type_support__()
            if _generate_mapping_plan.Metaclass_GenerateMappingPlan_Event._TYPE_SUPPORT is None:
                _generate_mapping_plan.Metaclass_GenerateMappingPlan_Event.__import_type_support__()


class GenerateMappingPlan(metaclass=Metaclass_GenerateMappingPlan):
    from mapping_interfaces.srv._generate_mapping_plan import GenerateMappingPlan_Request as Request
    from mapping_interfaces.srv._generate_mapping_plan import GenerateMappingPlan_Response as Response
    from mapping_interfaces.srv._generate_mapping_plan import GenerateMappingPlan_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
