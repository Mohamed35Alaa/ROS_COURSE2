#include <SoftwareSerial.h>

#include <ros.h>
#include <arduino/Angles.h>


ros::NodeHandle nh;
const float pi=3.1415;

float angle1;
float angle2;
float angle3;
float angle4;
float angle5;
float angle6;

void messageCb( const arduino::Angles& angles_msg){
   angle1=((angles_msg.angle1)*180)/pi;
   angle2=((angles_msg.angle2)*180)/pi;
   angle3=((angles_msg.angle3)*180)/pi;
   angle4=((angles_msg.angle4)*180)/pi;
   angle5=((angles_msg.angle5)*180)/pi;
   angle6=((angles_msg.angle6)*180)/pi; 
}

ros::Subscriber<arduino::Angles> sub("angles", &messageCb );

void setup()
{
  Serial.begin(9600); 
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{
  Serial.println(angle1);
  Serial.println(angle2);
  Serial.println(angle3);
  Serial.println(angle4);
  Serial.println(angle5);
  Serial.println(angle6);
  nh.spinOnce();
  delay(1);
}
