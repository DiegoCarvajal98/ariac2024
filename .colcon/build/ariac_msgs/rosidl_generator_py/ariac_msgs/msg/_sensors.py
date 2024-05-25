# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/Sensors.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Sensors(type):
    """Metaclass of message 'Sensors'."""

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
            module = import_type_support('ariac_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ariac_msgs.msg.Sensors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensors

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Sensors(metaclass=Metaclass_Sensors):
    """Message class 'Sensors'."""

    __slots__ = [
        '_break_beam',
        '_proximity',
        '_laser_profiler',
        '_lidar',
        '_camera',
        '_logical_camera',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'break_beam': 'boolean',
        'proximity': 'boolean',
        'laser_profiler': 'boolean',
        'lidar': 'boolean',
        'camera': 'boolean',
        'logical_camera': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.break_beam = kwargs.get('break_beam', bool())
        self.proximity = kwargs.get('proximity', bool())
        self.laser_profiler = kwargs.get('laser_profiler', bool())
        self.lidar = kwargs.get('lidar', bool())
        self.camera = kwargs.get('camera', bool())
        self.logical_camera = kwargs.get('logical_camera', bool())

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
        if self.break_beam != other.break_beam:
            return False
        if self.proximity != other.proximity:
            return False
        if self.laser_profiler != other.laser_profiler:
            return False
        if self.lidar != other.lidar:
            return False
        if self.camera != other.camera:
            return False
        if self.logical_camera != other.logical_camera:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def break_beam(self):
        """Message field 'break_beam'."""
        return self._break_beam

    @break_beam.setter
    def break_beam(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'break_beam' field must be of type 'bool'"
        self._break_beam = value

    @builtins.property
    def proximity(self):
        """Message field 'proximity'."""
        return self._proximity

    @proximity.setter
    def proximity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'proximity' field must be of type 'bool'"
        self._proximity = value

    @builtins.property
    def laser_profiler(self):
        """Message field 'laser_profiler'."""
        return self._laser_profiler

    @laser_profiler.setter
    def laser_profiler(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'laser_profiler' field must be of type 'bool'"
        self._laser_profiler = value

    @builtins.property
    def lidar(self):
        """Message field 'lidar'."""
        return self._lidar

    @lidar.setter
    def lidar(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'lidar' field must be of type 'bool'"
        self._lidar = value

    @builtins.property
    def camera(self):
        """Message field 'camera'."""
        return self._camera

    @camera.setter
    def camera(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'camera' field must be of type 'bool'"
        self._camera = value

    @builtins.property
    def logical_camera(self):
        """Message field 'logical_camera'."""
        return self._logical_camera

    @logical_camera.setter
    def logical_camera(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'logical_camera' field must be of type 'bool'"
        self._logical_camera = value
