// Generated by gencpp from file airsim_ros/Reset.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_MESSAGE_RESET_H
#define AIRSIM_ROS_MESSAGE_RESET_H

#include <ros/service_traits.h>


#include <airsim_ros/ResetRequest.h>
#include <airsim_ros/ResetResponse.h>


namespace airsim_ros
{

struct Reset
{

typedef ResetRequest Request;
typedef ResetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Reset
} // namespace airsim_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::airsim_ros::Reset > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::airsim_ros::Reset&) { return value(); }
};

template<>
struct DataType< ::airsim_ros::Reset > {
  static const char* value()
  {
    return "airsim_ros/Reset";
  }

  static const char* value(const ::airsim_ros::Reset&) { return value(); }
};


// service_traits::MD5Sum< ::airsim_ros::ResetRequest> should match
// service_traits::MD5Sum< ::airsim_ros::Reset >
template<>
struct MD5Sum< ::airsim_ros::ResetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::airsim_ros::Reset >::value();
  }
  static const char* value(const ::airsim_ros::ResetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::airsim_ros::ResetRequest> should match
// service_traits::DataType< ::airsim_ros::Reset >
template<>
struct DataType< ::airsim_ros::ResetRequest>
{
  static const char* value()
  {
    return DataType< ::airsim_ros::Reset >::value();
  }
  static const char* value(const ::airsim_ros::ResetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::airsim_ros::ResetResponse> should match
// service_traits::MD5Sum< ::airsim_ros::Reset >
template<>
struct MD5Sum< ::airsim_ros::ResetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::airsim_ros::Reset >::value();
  }
  static const char* value(const ::airsim_ros::ResetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::airsim_ros::ResetResponse> should match
// service_traits::DataType< ::airsim_ros::Reset >
template<>
struct DataType< ::airsim_ros::ResetResponse>
{
  static const char* value()
  {
    return DataType< ::airsim_ros::Reset >::value();
  }
  static const char* value(const ::airsim_ros::ResetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AIRSIM_ROS_MESSAGE_RESET_H
