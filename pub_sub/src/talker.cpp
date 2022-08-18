#include "ros/ros.h"
#include "std_msgs/Float32.h"




int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "talker");

  
  ros::NodeHandle n;

  
  ros::Publisher float_pub = n.advertise<std_msgs::Float32>("chatter", 50);

  ros::Rate loop_rate(10);

 
  float count = 0.0;
  while (ros::ok())
  {
   
    std_msgs::Float32 msg;

    msg.data = count;

    ROS_INFO("%f", msg.data);

    
    float_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}