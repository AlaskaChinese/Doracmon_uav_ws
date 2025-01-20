// Generated by gencpp from file airsim_ros/TakeoffGroupRequest.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_MESSAGE_TAKEOFFGROUPREQUEST_H
#define AIRSIM_ROS_MESSAGE_TAKEOFFGROUPREQUEST_H


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
struct TakeoffGroupRequest_
{
  typedef TakeoffGroupRequest_<ContainerAllocator> Type;

  TakeoffGroupRequest_()
    : vehicle_names()
    , waitOnLastTask(false)  {
    }
  TakeoffGroupRequest_(const ContainerAllocator& _alloc)
    : vehicle_names(_alloc)
    , waitOnLastTask(false)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _vehicle_names_type;
  _vehicle_names_type vehicle_names;

   typedef uint8_t _waitOnLastTask_type;
  _waitOnLastTask_type waitOnLastTask;





  typedef boost::shared_ptr< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TakeoffGroupRequest_

typedef ::airsim_ros::TakeoffGroupRequest_<std::allocator<void> > TakeoffGroupRequest;

typedef boost::shared_ptr< ::airsim_ros::TakeoffGroupRequest > TakeoffGroupRequestPtr;
typedef boost::shared_ptr< ::airsim_ros::TakeoffGroupRequest const> TakeoffGroupRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator1> & lhs, const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator2> & rhs)
{
  return lhs.vehicle_names == rhs.vehicle_names &&
    lhs.waitOnLastTask == rhs.waitOnLastTask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator1> & lhs, const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93573f0951a404e62756fb4ba226140a";
  }

  static const char* value(const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93573f0951a404e6ULL;
  static const uint64_t static_value2 = 0x2756fb4ba226140aULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros/TakeoffGroupRequest";
  }

  static const char* value(const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] vehicle_names\n"
"bool waitOnLastTask \n"
;
  }

  static const char* value(const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.vehicle_names);
      stream.next(m.waitOnLastTask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakeoffGroupRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros::TakeoffGroupRequest_<ContainerAllocator>& v)
  {
    s << indent << "vehicle_names[]" << std::endl;
    for (size_t i = 0; i < v.vehicle_names.size(); ++i)
    {
      s << indent << "  vehicle_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.vehicle_names[i]);
    }
    s << indent << "waitOnLastTask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.waitOnLastTask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_MESSAGE_TAKEOFFGROUPREQUEST_H
