# generated from rosidl_generator_py/resource/_idl.py.em
# with input from skuba_msgs:srv/IKRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IKRequest_Request(type):
    """Metaclass of message 'IKRequest_Request'."""

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
                'skuba_msgs.srv.IKRequest_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ik_request__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ik_request__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ik_request__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ik_request__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ik_request__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IKRequest_Request(metaclass=Metaclass_IKRequest_Request):
    """Message class 'IKRequest_Request'."""

    __slots__ = [
        '_target_pose',
        '_group_name',
        '_end_effector_link',
    ]

    _fields_and_field_types = {
        'target_pose': 'geometry_msgs/Pose',
        'group_name': 'string',
        'end_effector_link': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Pose
        self.target_pose = kwargs.get('target_pose', Pose())
        self.group_name = kwargs.get('group_name', str())
        self.end_effector_link = kwargs.get('end_effector_link', str())

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
        if self.target_pose != other.target_pose:
            return False
        if self.group_name != other.group_name:
            return False
        if self.end_effector_link != other.end_effector_link:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'target_pose' field must be a sub message of type 'Pose'"
        self._target_pose = value

    @builtins.property
    def group_name(self):
        """Message field 'group_name'."""
        return self._group_name

    @group_name.setter
    def group_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group_name' field must be of type 'str'"
        self._group_name = value

    @builtins.property
    def end_effector_link(self):
        """Message field 'end_effector_link'."""
        return self._end_effector_link

    @end_effector_link.setter
    def end_effector_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'end_effector_link' field must be of type 'str'"
        self._end_effector_link = value


# Import statements for member types

# Member 'joint_positions'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_IKRequest_Response(type):
    """Metaclass of message 'IKRequest_Response'."""

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
                'skuba_msgs.srv.IKRequest_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ik_request__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ik_request__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ik_request__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ik_request__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ik_request__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IKRequest_Response(metaclass=Metaclass_IKRequest_Response):
    """Message class 'IKRequest_Response'."""

    __slots__ = [
        '_joint_positions',
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'joint_positions': 'sequence<float>',
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_positions = array.array('f', kwargs.get('joint_positions', []))
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
        if self.joint_positions != other.joint_positions:
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
    def joint_positions(self):
        """Message field 'joint_positions'."""
        return self._joint_positions

    @joint_positions.setter
    def joint_positions(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_positions' array.array() must have the type code of 'f'"
            self._joint_positions = value
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
                "The 'joint_positions' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._joint_positions = array.array('f', value)

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


class Metaclass_IKRequest(type):
    """Metaclass of service 'IKRequest'."""

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
                'skuba_msgs.srv.IKRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ik_request

            from skuba_msgs.srv import _ik_request
            if _ik_request.Metaclass_IKRequest_Request._TYPE_SUPPORT is None:
                _ik_request.Metaclass_IKRequest_Request.__import_type_support__()
            if _ik_request.Metaclass_IKRequest_Response._TYPE_SUPPORT is None:
                _ik_request.Metaclass_IKRequest_Response.__import_type_support__()


class IKRequest(metaclass=Metaclass_IKRequest):
    from skuba_msgs.srv._ik_request import IKRequest_Request as Request
    from skuba_msgs.srv._ik_request import IKRequest_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
