#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include "std_msgs/Float32.h"

float num=0.0;

void chatterCallback(const std_msgs::Int32& msg)
{
 ROS_INFO("I heared:  [%i]",msg.data);
  num=(float)(msg.data);
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "listener");

  
  ros::NodeHandle n;
  ros::NodeHandle nh;
  
  
  ros::Subscriber sub = n.subscribe("chatter", 1000, chatterCallback);
  ros::Publisher res_pub = nh.advertise<std_msgs::Float32>("result", 50);
  ros::Rate loop_rate(10);
  while (ros::ok() && num<=99.0)
  {
    std_msgs::Float32 result;
    
    float res=(num/2);
  
    result.data=res;
    ROS_INFO("%f", result.data);
    res_pub.publish(result);
    
    ros::spinOnce();
    loop_rate.sleep();
  }
  
 
  return 0;
}