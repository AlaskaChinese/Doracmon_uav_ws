#include "uav_flight/uav_flight.hpp"

UAVFlight::UAVFlight(ros::NodeHandle &node_handle) : nh(node_handle)
{
    // 初始化服务客户端
    reset_client = nh.serviceClient<airsim_ros::Reset>("/airsim_node/reset");
    takeoff_client = nh.serviceClient<airsim_ros::Takeoff>("/airsim_node/drone_1/takeoff");
    land_client = nh.serviceClient<airsim_ros::Land>("/airsim_node/drone_1/land");
    // 初始化速度指令发布者
    vel_publisher = nh.advertise<airsim_ros::VelCmd>("airsim_node/drone_1/vel_cmd_body_frame", 1);
    // 初始化pwm指令发布者
    pwm_publisher = nh.advertise<airsim_ros::RotorPWM>("airsim_node/drone_1/rotor_pwm_cmd", 1);
    // 设置起飞和降落请求参数
    takeoff_srv.request.waitOnLastTask = true;
    land_srv.request.waitOnLastTask = true;

    // 初始化速度消息（全部置零）
    vel_cmd.twist.linear.x = 0;
    vel_cmd.twist.linear.y = 0;
    vel_cmd.twist.linear.z = 0;
    vel_cmd.twist.angular.x = 0;
    vel_cmd.twist.angular.y = 0;
    vel_cmd.twist.angular.z = 0;

    rotor_pwm.rotorPWM0 = 0.1;
    rotor_pwm.rotorPWM1 = 0.1;
    rotor_pwm.rotorPWM2 = 0.1;
    rotor_pwm.rotorPWM3 = 0.1;
}

UAVFlight::~UAVFlight()
{
}

bool UAVFlight::reset()
{
    ROS_INFO("Sending reset request...");
    if (reset_client.call(reset_srv))
    {
        ROS_INFO("Reset successful!");
        return true;
    }
    else
    {
        ROS_ERROR("Failed to call reset service!");
        return false;
    }
}

bool UAVFlight::takeoff()
{
    ROS_INFO("Sending takeoff request...");
    if (takeoff_client.call(takeoff_srv))
    {
        ROS_INFO("Takeoff successful!");
        return true;
    }
    else
    {
        ROS_ERROR("Failed to call takeoff service!");
        return false;
    }
}

void UAVFlight::flyForward(double speed, double duration)
{
    ROS_INFO("Flying forward: speed = %f m/s, duration = %f s", speed, duration);
    ros::Rate rate(10); // 10 Hz循环频率
    ros::Time start_time = ros::Time::now();
    while (ros::Time::now() - start_time < ros::Duration(duration))
    {
        // 设置向前（x轴正方向）飞行
        vel_cmd.twist.linear.x = speed;
        vel_cmd.twist.linear.y = 0;
        vel_cmd.twist.linear.z = 0;
        vel_cmd.twist.angular.x = 0;
        vel_cmd.twist.angular.y = 0;
        vel_cmd.twist.angular.z = 0;
        vel_publisher.publish(vel_cmd);
        rate.sleep();
    }
    // 停止运动
    vel_cmd.twist.linear.x = 0;
    vel_publisher.publish(vel_cmd);
    ROS_INFO("Forward flight completed.");
}

bool UAVFlight::land()
{
    ROS_INFO("Sending land request...");
    if (land_client.call(land_srv))
    {
        ROS_INFO("Landing successful!");
        return true;
    }
    else
    {
        ROS_ERROR("Failed to call land service!");
        return false;
    }
}

void UAVFlight::flyForwardPwm(double pwm0, double pwm1, double pwm2, double pwm3)
{
    ROS_INFO("PWM regulated flight...");
    double duration = 30.0;
    ros::Rate rate(10); // 10 Hz循环频率
    ros::Time start_time = ros::Time::now();
    while (ros::Time::now() - start_time < ros::Duration(duration))
    {
        rotor_pwm.rotorPWM0 = pwm0;
        rotor_pwm.rotorPWM1 = pwm1;
        rotor_pwm.rotorPWM2 = pwm2;
        rotor_pwm.rotorPWM3 = pwm3;
        pwm_publisher.publish(rotor_pwm);
        rate.sleep();
    }
    ROS_INFO("PWM regulated flight completed.");
}