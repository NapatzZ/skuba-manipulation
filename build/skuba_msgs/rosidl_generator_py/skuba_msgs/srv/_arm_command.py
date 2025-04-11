# generated from rosidl_generator_py/resource/_idl.py.em
# with input from skuba_msgs:srv/ArmCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'positions'
# Member 'velocities'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmCommand_Request(type):
    """Metaclass of message 'ArmCommand_Request'."""

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
                'skuba_msgs.srv.ArmCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmCommand_Request(metaclass=Metaclass_ArmCommand_Request):
    """Message class 'ArmCommand_Request'."""

    __slots__ = [
        '_command_type',
        '_positions',
        '_velocities',
        '_gripper_left_position',
        '_gripper_right_position',
    ]

    _fields_and_field_types = {
        'command_type': 'string',
        'positions': 'sequence<float>',
        'velocities': 'sequence<float>',
        'gripper_left_position': 'float',
        'gripper_right_position': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_type = kwargs.get('command_type', str())
        self.positions = array.array('f', kwargs.get('positions', []))
        self.velocities = array.array('f', kwargs.get('velocities', []))
        self.gripper_left_position = kwargs.get('gripper_left_position', float())
        self.gripper_right_position = kwargs.get('gripper_right_position', float())

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
        if self.command_type != other.command_type:
            return False
        if self.positions != other.positions:
            return False
        if self.velocities != other.velocities:
            return False
        if self.gripper_left_position != other.gripper_left_position:
            return False
        if self.gripper_right_position != other.gripper_right_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command_type(self):
        """Message field 'command_type'."""
        return self._command_type

    @command_type.setter
    def command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command_type' field must be of type 'str'"
        self._command_type = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ArmCommand_Response(type):
    """Metaclass of message 'ArmCommand_Response'."""

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
                'skuba_msgs.srv.ArmCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arm_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arm_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arm_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arm_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arm_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArmCommand_Response(metaclass=Metaclass_ArmCommand_Response):
    """Message class 'ArmCommand_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
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
        if __debug__:
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
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_ArmCommand(type):
    """Metaclass of service 'ArmCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('skuba_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'skuba_msgs.srv.ArmCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arm_command

            from skuba_msgs.srv import _arm_command
            if _arm_command.Metaclass_ArmCommand_Request._TYPE_SUPPORT is None:
                _arm_command.Metaclass_ArmCommand_Request.__import_type_support__()
            if _arm_command.Metaclass_ArmCommand_Response._TYPE_SUPPORT is None:
                _arm_command.Metaclass_ArmCommand_Response.__import_type_support__()


class ArmCommand(metaclass=Metaclass_ArmCommand):
    from skuba_msgs.srv._arm_command import ArmCommand_Request as Request
    from skuba_msgs.srv._arm_command import ArmCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
