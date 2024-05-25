# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/AssemblyTask.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'agv_numbers'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AssemblyTask(type):
    """Metaclass of message 'AssemblyTask'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'AS1': 1,
        'AS2': 2,
        'AS3': 3,
        'AS4': 4,
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
                'ariac_msgs.msg.AssemblyTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__assembly_task
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__assembly_task
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__assembly_task
            cls._TYPE_SUPPORT = module.type_support_msg__msg__assembly_task
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__assembly_task

            from ariac_msgs.msg import AssemblyPart
            if AssemblyPart.__class__._TYPE_SUPPORT is None:
                AssemblyPart.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'AS1': cls.__constants['AS1'],
            'AS2': cls.__constants['AS2'],
            'AS3': cls.__constants['AS3'],
            'AS4': cls.__constants['AS4'],
        }

    @property
    def AS1(self):
        """Message constant 'AS1'."""
        return Metaclass_AssemblyTask.__constants['AS1']

    @property
    def AS2(self):
        """Message constant 'AS2'."""
        return Metaclass_AssemblyTask.__constants['AS2']

    @property
    def AS3(self):
        """Message constant 'AS3'."""
        return Metaclass_AssemblyTask.__constants['AS3']

    @property
    def AS4(self):
        """Message constant 'AS4'."""
        return Metaclass_AssemblyTask.__constants['AS4']


class AssemblyTask(metaclass=Metaclass_AssemblyTask):
    """
    Message class 'AssemblyTask'.

    Constants:
      AS1
      AS2
      AS3
      AS4
    """

    __slots__ = [
        '_agv_numbers',
        '_station',
        '_parts',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'agv_numbers': 'sequence<uint8>',
        'station': 'uint8',
        'parts': 'sequence<ariac_msgs/AssemblyPart>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'AssemblyPart')),  # noqa: E501
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
        self.agv_numbers = array.array('B', kwargs.get('agv_numbers', []))
        self.station = kwargs.get('station', int())
        self.parts = kwargs.get('parts', [])

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
        if self.agv_numbers != other.agv_numbers:
            return False
        if self.station != other.station:
            return False
        if self.parts != other.parts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def agv_numbers(self):
        """Message field 'agv_numbers'."""
        return self._agv_numbers

    @agv_numbers.setter
    def agv_numbers(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'agv_numbers' array.array() must have the type code of 'B'"
                self._agv_numbers = value
                return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'agv_numbers' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._agv_numbers = array.array('B', value)

    @builtins.property
    def station(self):
        """Message field 'station'."""
        return self._station

    @station.setter
    def station(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'station' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'station' field must be an unsigned integer in [0, 255]"
        self._station = value

    @builtins.property
    def parts(self):
        """Message field 'parts'."""
        return self._parts

    @parts.setter
    def parts(self, value):
        if self._check_fields:
            from ariac_msgs.msg import AssemblyPart
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
                 all(isinstance(v, AssemblyPart) for v in value) and
                 True), \
                "The 'parts' field must be a set or sequence and each value of type 'AssemblyPart'"
        self._parts = value
