// Generated by gencpp from file airsim_ros/Altimeter.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_MESSAGE_ALTIMETER_H
#define AIRSIM_ROS_MESSAGE_ALTIMETER_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace airsim_ros
{
template <class ContainerAllocator>
struct Altimeter_
{
  typedef Altimeter_<ContainerAllocator> Type;

  Altimeter_()
    : header()
    , altitude(0.0)
    , pressure(0.0)
    , qnh(0.0)  {
    }
  Altimeter_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , altitude(0.0)
    , pressure(0.0)
    , qnh(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _altitude_type;
  _altitude_type altitude;

   typedef float _pressure_type;
  _pressure_type pressure;

   typedef float _qnh_type;
  _qnh_type qnh;





  typedef boost::shared_ptr< ::airsim_ros::Altimeter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros::Altimeter_<ContainerAllocator> const> ConstPtr;

}; // struct Altimeter_

typedef ::airsim_ros::Altimeter_<std::allocator<void> > Altimeter;

typedef boost::shared_ptr< ::airsim_ros::Altimeter > AltimeterPtr;
typedef boost::shared_ptr< ::airsim_ros::Altimeter const> AltimeterConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros::Altimeter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros::Altimeter_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros::Altimeter_<ContainerAllocator1> & lhs, const ::airsim_ros::Altimeter_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.altitude == rhs.altitude &&
    lhs.pressure == rhs.pressure &&
    lhs.qnh == rhs.qnh;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros::Altimeter_<ContainerAllocator1> & lhs, const ::airsim_ros::Altimeter_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::Altimeter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::Altimeter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::Altimeter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::Altimeter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::Altimeter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::Altimeter_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros::Altimeter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c785451e2f67a76b902818138e9b53c6";
  }

  static const char* value(const ::airsim_ros::Altimeter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc785451e2f67a76bULL;
  static const uint64_t static_value2 = 0x902818138e9b53c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros::Altimeter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros/Altimeter";
  }

  static const char* value(const ::airsim_ros::Altimeter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros::Altimeter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"float32 altitude\n"
"float32 pressure\n"
"float32 qnh\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::airsim_ros::Altimeter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros::Altimeter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.altitude);
      stream.next(m.pressure);
      stream.next(m.qnh);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Altimeter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros::Altimeter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros::Altimeter_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "altitude: ";
    Printer<float>::stream(s, indent + "  ", v.altitude);
    s << indent << "pressure: ";
    Printer<float>::stream(s, indent + "  ", v.pressure);
    s << indent << "qnh: ";
    Printer<float>::stream(s, indent + "  ", v.qnh);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_MESSAGE_ALTIMETER_H
