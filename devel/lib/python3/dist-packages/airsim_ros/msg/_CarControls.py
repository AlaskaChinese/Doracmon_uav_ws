# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from airsim_ros/CarControls.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class CarControls(genpy.Message):
  _md5sum = "2cf7bae5e8a409a1c310bfb0435ad4b6"
  _type = "airsim_ros/CarControls"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header
float32 throttle
float32 brake
float32 steering
bool handbrake
bool manual
int8 manual_gear
bool gear_immediate
================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','throttle','brake','steering','handbrake','manual','manual_gear','gear_immediate']
  _slot_types = ['std_msgs/Header','float32','float32','float32','bool','bool','int8','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,throttle,brake,steering,handbrake,manual,manual_gear,gear_immediate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CarControls, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.throttle is None:
        self.throttle = 0.
      if self.brake is None:
        self.brake = 0.
      if self.steering is None:
        self.steering = 0.
      if self.handbrake is None:
        self.handbrake = False
      if self.manual is None:
        self.manual = False
      if self.manual_gear is None:
        self.manual_gear = 0
      if self.gear_immediate is None:
        self.gear_immediate = False
    else:
      self.header = std_msgs.msg.Header()
      self.throttle = 0.
      self.brake = 0.
      self.steering = 0.
      self.handbrake = False
      self.manual = False
      self.manual_gear = 0
      self.gear_immediate = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3f2BbB().pack(_x.throttle, _x.brake, _x.steering, _x.handbrake, _x.manual, _x.manual_gear, _x.gear_immediate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.throttle, _x.brake, _x.steering, _x.handbrake, _x.manual, _x.manual_gear, _x.gear_immediate,) = _get_struct_3f2BbB().unpack(str[start:end])
      self.handbrake = bool(self.handbrake)
      self.manual = bool(self.manual)
      self.gear_immediate = bool(self.gear_immediate)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_3f2BbB().pack(_x.throttle, _x.brake, _x.steering, _x.handbrake, _x.manual, _x.manual_gear, _x.gear_immediate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 16
      (_x.throttle, _x.brake, _x.steering, _x.handbrake, _x.manual, _x.manual_gear, _x.gear_immediate,) = _get_struct_3f2BbB().unpack(str[start:end])
      self.handbrake = bool(self.handbrake)
      self.manual = bool(self.manual)
      self.gear_immediate = bool(self.gear_immediate)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3f2BbB = None
def _get_struct_3f2BbB():
    global _struct_3f2BbB
    if _struct_3f2BbB is None:
        _struct_3f2BbB = struct.Struct("<3f2BbB")
    return _struct_3f2BbB
