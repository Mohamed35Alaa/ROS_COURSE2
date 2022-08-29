#include "ros/ros.h"
#include "arduino/Angles.h"




int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "angles_sen");

  
  ros::NodeHandle n;

  
  ros::Publisher angles_pub = n.advertise<arduino::Angles>("angles", 50);

  ros::Rate loop_rate(10);

 
  
  while (ros::ok())
  {
   
    arduino::Angles Angles;

    Angles.angle1=5;
    Angles.angle2=10;
    Angles.angle3=15;
    Angles.angle4=20;
    Angles.angle5=25;
    Angles.angle6=30;

   

    
    angles_pub.publish(Angles);
    ROS_INFO("%f", Angles.angle1);
    ROS_INFO("%f", Angles.angle2);
    ROS_INFO("%f", Angles.angle3);
    ROS_INFO("%f", Angles.angle4);
    ROS_INFO("%f", Angles.angle5);
    ROS_INFO("%f", Angles.angle6);


    ros::spinOnce();

    loop_rate.sleep();
    
  }


  return 0;
}