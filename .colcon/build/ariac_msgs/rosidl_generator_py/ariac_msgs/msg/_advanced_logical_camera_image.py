# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdvancedLogicalCameraImage(type):
    """Metaclass of message 'AdvancedLogicalCameraImage'."""

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
                'ariac_msgs.msg.AdvancedLogicalCameraImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__advanced_logical_camera_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__advanced_logical_camera_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__advanced_logical_camera_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__advanced_logical_camera_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__advanced_logical_camera_image

            from ariac_msgs.msg import KitTrayPose
            if KitTrayPose.__class__._TYPE_SUPPORT is None:
                KitTrayPose.__class__.__import_type_support__()

            from ariac_msgs.msg import PartPose
            if PartPose.__class__._TYPE_SUPPORT is None:
                PartPose.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdvancedLogicalCameraImage(metaclass=Metaclass_AdvancedLogicalCameraImage):
    """Message class 'AdvancedLogicalCameraImage'."""

    __slots__ = [
        '_header',
        '_part_poses',
        '_tray_poses',
        '_sensor_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'part_poses': 'sequence<ariac_msgs/PartPose>',
        'tray_poses': 'sequence<ariac_msgs/KitTrayPose>',
        'sensor_pose': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'PartPose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ariac_msgs', 'msg'], 'KitTrayPose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.part_poses = kwargs.get('part_poses', [])
        self.tray_poses = kwargs.get('tray_poses', [])
        from geometry_msgs.msg import Pose
        self.sensor_pose = kwargs.get('sensor_pose', Pose())

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
        if self.header != other.header:
            return False
        if self.part_poses != other.part_poses:
            return False
        if self.tray_poses != other.tray_poses:
            return False
        if self.sensor_pose != other.sensor_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def part_poses(self):
        """Message field 'part_poses'."""
        return self._part_poses

    @part_poses.setter
    def part_poses(self, value):
        if self._check_fields:
            from ariac_msgs.msg import PartPose
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
                 all(isinstance(v, PartPose) for v in value) and
                 True), \
                "The 'part_poses' field must be a set or sequence and each value of type 'PartPose'"
        self._part_poses = value

    @builtins.property
    def tray_poses(self):
        """Message field 'tray_poses'."""
        return self._tray_poses

    @tray_poses.setter
    def tray_poses(self, value):
        if self._check_fields:
            from ariac_msgs.msg import KitTrayPose
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
                 all(isinstance(v, KitTrayPose) for v in value) and
                 True), \
                "The 'tray_poses' field must be a set or sequence and each value of type 'KitTrayPose'"
        self._tray_poses = value

    @builtins.property
    def sensor_pose(self):
        """Message field 'sensor_pose'."""
        return self._sensor_pose

    @sensor_pose.setter
    def sensor_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'sensor_pose' field must be a sub message of type 'Pose'"
        self._sensor_pose = value
