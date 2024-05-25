# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/DroppedPartChallenge.idl
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


class Metaclass_DroppedPartChallenge(type):
    """Metaclass of message 'DroppedPartChallenge'."""

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
                'ariac_msgs.msg.DroppedPartChallenge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dropped_part_challenge
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dropped_part_challenge
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dropped_part_challenge
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dropped_part_challenge
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dropped_part_challenge

            from ariac_msgs.msg import Part
            if Part.__class__._TYPE_SUPPORT is None:
                Part.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DroppedPartChallenge(metaclass=Metaclass_DroppedPartChallenge):
    """Message class 'DroppedPartChallenge'."""

    __slots__ = [
        '_robot',
        '_part_to_drop',
        '_drop_after_num',
        '_drop_after_time',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'robot': 'string',
        'part_to_drop': 'ariac_msgs/Part',
        'drop_after_num': 'uint8',
        'drop_after_time': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'Part'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.robot = kwargs.get('robot', str())
        from ariac_msgs.msg import Part
        self.part_to_drop = kwargs.get('part_to_drop', Part())
        self.drop_after_num = kwargs.get('drop_after_num', int())
        self.drop_after_time = kwargs.get('drop_after_time', float())

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
        if self.robot != other.robot:
            return False
        if self.part_to_drop != other.part_to_drop:
            return False
        if self.drop_after_num != other.drop_after_num:
            return False
        if self.drop_after_time != other.drop_after_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot(self):
        """Message field 'robot'."""
        return self._robot

    @robot.setter
    def robot(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'robot' field must be of type 'str'"
        self._robot = value

    @builtins.property
    def part_to_drop(self):
        """Message field 'part_to_drop'."""
        return self._part_to_drop

    @part_to_drop.setter
    def part_to_drop(self, value):
        if self._check_fields:
            from ariac_msgs.msg import Part
            assert \
                isinstance(value, Part), \
                "The 'part_to_drop' field must be a sub message of type 'Part'"
        self._part_to_drop = value

    @builtins.property
    def drop_after_num(self):
        """Message field 'drop_after_num'."""
        return self._drop_after_num

    @drop_after_num.setter
    def drop_after_num(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'drop_after_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drop_after_num' field must be an unsigned integer in [0, 255]"
        self._drop_after_num = value

    @builtins.property
    def drop_after_time(self):
        """Message field 'drop_after_time'."""
        return self._drop_after_time

    @drop_after_time.setter
    def drop_after_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'drop_after_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'drop_after_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._drop_after_time = value
