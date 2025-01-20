// Generated by gencpp from file airsim_ros/SetGPSPositionRequest.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_MESSAGE_SETGPSPOSITIONREQUEST_H
#define AIRSIM_ROS_MESSAGE_SETGPSPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace airsim_ros
{
template <class ContainerAllocator>
struct SetGPSPositionRequest_
{
  typedef SetGPSPositionRequest_<ContainerAllocator> Type;

  SetGPSPositionRequest_()
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , yaw(0.0)
    , vehicle_name()  {
    }
  SetGPSPositionRequest_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)
    , yaw(0.0)
    , vehicle_name(_alloc)  {
  (void)_alloc;
    }



   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _vehicle_name_type;
  _vehicle_name_type vehicle_name;





  typedef boost::shared_ptr< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGPSPositionRequest_

typedef ::airsim_ros::SetGPSPositionRequest_<std::allocator<void> > SetGPSPositionRequest;

typedef boost::shared_ptr< ::airsim_ros::SetGPSPositionRequest > SetGPSPositionRequestPtr;
typedef boost::shared_ptr< ::airsim_ros::SetGPSPositionRequest const> SetGPSPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator1> & lhs, const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.altitude == rhs.altitude &&
    lhs.yaw == rhs.yaw &&
    lhs.vehicle_name == rhs.vehicle_name;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator1> & lhs, const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c24df80d52366f4d5450d446c050a5f4";
  }

  static const char* value(const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc24df80d52366f4dULL;
  static const uint64_t static_value2 = 0x5450d446c050a5f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros/SetGPSPositionRequest";
  }

  static const char* value(const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 latitude\n"
"float64 longitude\n"
"float64 altitude\n"
"float64 yaw\n"
"string vehicle_name\n"
;
  }

  static const char* value(const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
      stream.next(m.yaw);
      stream.next(m.vehicle_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGPSPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros::SetGPSPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "vehicle_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.vehicle_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_MESSAGE_SETGPSPOSITIONREQUEST_H
