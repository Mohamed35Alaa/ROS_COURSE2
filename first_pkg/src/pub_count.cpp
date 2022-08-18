#include "ros/ros.h"
#include "std_msgs/Int32.h"




int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "count_pub");

  
  ros::NodeHandle n;

  
  ros::Publisher int_pub = n.advertise<std_msgs::Int32>("chatter", 50);

  ros::Rate loop_rate(10);

 
  int count = 20;
  while (ros::ok() && count<=100)
  {
   
    std_msgs::Int32 msg;

    msg.data = count;

    ROS_INFO("%i", msg.data);

    
    int_pub.publish(msg);

    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}