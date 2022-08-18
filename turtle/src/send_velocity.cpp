#include "ros/ros.h"
#include "geometry_msgs/Twist.h"


int main(int argc, char **argv)
{

  ros::init(argc, argv,"vel");
  ros::NodeHandle vel;
  ros::Publisher vel_pub = vel.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 100);
    while(ros::ok){
    geometry_msgs::Twist msg;
    msg.linear.x = 1;
    msg.linear.y = 0;
    msg.linear.z = 0;
    msg.angular.x = 0;
    msg.angular.y = 0;
    msg.angular.z = 1;
    msg.angular.x = 0;
    msg.angular.y = 0;
    msg.angular.z = 1;
    vel_pub.publish(msg);
    ros::spinOnce();
    }
  return 0;
}