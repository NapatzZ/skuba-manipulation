# generated from rosidl_generator_py/resource/_idl.py.em
# with input from skuba_msgs:msg/ArmState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'positions'
# Member 'velocities'
# Member 'efforts'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmState(type):
    """Metaclass of message 'ArmState'."""

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
            module = import_type_support('skuba_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'skuba_msgs.msg.ArmState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arm_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmState(metaclass=Metaclass_ArmState):
    """Message class 'ArmState'."""

    __slots__ = [
        '_positions',
        '_velocities',
        '_efforts',
        '_gripper_left_position',
        '_gripper_right_position',
        '_is_moving',
        '_is_error',
        '_error_message',
    ]

    _fields_and_field_types = {
        'positions': 'sequence<float>',
        'velocities': 'sequence<float>',
        'efforts': 'sequence<float>',
        'gripper_left_position': 'float',
        'gripper_right_position': 'float',
        'is_moving': 'boolean',
        'is_error': 'boolean',
        'error_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.positions = array.array('f', kwargs.get('positions', []))
        self.velocities = array.array('f', kwargs.get('velocities', []))
        self.efforts = array.array('f', kwargs.get('efforts', []))
        self.gripper_left_position = kwargs.get('gripper_left_position', float())
        self.gripper_right_position = kwargs.get('gripper_right_position', float())
        self.is_moving = kwargs.get('is_moving', bool())
        self.is_error = kwargs.get('is_error', bool())
        self.error_message = kwargs.get('error_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.positions != other.positions:
            return False
        if self.velocities != other.velocities:
            return False
        if self.efforts != other.efforts:
            return False
        if self.gripper_left_position != other.gripper_left_position:
            return False
        if self.gripper_right_position != other.gripper_right_position:
            return False
        if self.is_moving != other.is_moving:
            return False
        if self.is_error != other.is_error:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def positions(self):
        """Message field 'positions'."""
        return self._positions

    @positions.setter
    def positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'positions' array.array() must have the type code of 'f'"
            self._positions = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'positions' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._positions = array.array('f', value)

    @builtins.property
    def velocities(self):
        """Message field 'velocities'."""
        return self._velocities

    @velocities.setter
    def velocities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'velocities' array.array() must have the type code of 'f'"
            self._velocities = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocities' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocities = array.array('f', value)

    @builtins.property
    def efforts(self):
        """Message field 'efforts'."""
        return self._efforts

    @efforts.setter
    def efforts(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'efforts' array.array() must have the type code of 'f'"
            self._efforts = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'efforts' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._efforts = array.array('f', value)

    @builtins.property
    def gripper_left_position(self):
        """Message field 'gripper_left_position'."""
        return self._gripper_left_position

    @gripper_left_position.setter
    def gripper_left_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_left_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gripper_left_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gripper_left_position = value

    @builtins.property
    def gripper_right_position(self):
        """Message field 'gripper_right_position'."""
        return self._gripper_right_position

    @gripper_right_position.setter
    def gripper_right_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gripper_right_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gripper_right_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gripper_right_position = value

    @builtins.property
    def is_moving(self):
        """Message field 'is_moving'."""
        return self._is_moving

    @is_moving.setter
    def is_moving(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_moving' field must be of type 'bool'"
        self._is_moving = value

    @builtins.property
    def is_error(self):
        """Message field 'is_error'."""
        return self._is_error

    @is_error.setter
    def is_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_error' field must be of type 'bool'"
        self._is_error = value

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value
