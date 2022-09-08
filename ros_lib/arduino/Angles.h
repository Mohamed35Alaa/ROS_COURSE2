#ifndef _ROS_arduino_Angles_h
#define _ROS_arduino_Angles_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace arduino
{

  class Angles : public ros::Msg
  {
    public:
      typedef float _angle1_type;
      _angle1_type angle1;
      typedef float _angle2_type;
      _angle2_type angle2;
      typedef float _angle3_type;
      _angle3_type angle3;
      typedef float _angle4_type;
      _angle4_type angle4;
      typedef float _angle5_type;
      _angle5_type angle5;
      typedef float _angle6_type;
      _angle6_type angle6;

    Angles():
      angle1(0),
      angle2(0),
      angle3(0),
      angle4(0),
      angle5(0),
      angle6(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_angle1;
      u_angle1.real = this->angle1;
      *(outbuffer + offset + 0) = (u_angle1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle1);
      union {
        float real;
        uint32_t base;
      } u_angle2;
      u_angle2.real = this->angle2;
      *(outbuffer + offset + 0) = (u_angle2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle2);
      union {
        float real;
        uint32_t base;
      } u_angle3;
      u_angle3.real = this->angle3;
      *(outbuffer + offset + 0) = (u_angle3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle3);
      union {
        float real;
        uint32_t base;
      } u_angle4;
      u_angle4.real = this->angle4;
      *(outbuffer + offset + 0) = (u_angle4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle4);
      union {
        float real;
        uint32_t base;
      } u_angle5;
      u_angle5.real = this->angle5;
      *(outbuffer + offset + 0) = (u_angle5.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle5.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle5.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle5.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle5);
      union {
        float real;
        uint32_t base;
      } u_angle6;
      u_angle6.real = this->angle6;
      *(outbuffer + offset + 0) = (u_angle6.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angle6.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angle6.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angle6.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->angle6);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_angle1;
      u_angle1.base = 0;
      u_angle1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle1 = u_angle1.real;
      offset += sizeof(this->angle1);
      union {
        float real;
        uint32_t base;
      } u_angle2;
      u_angle2.base = 0;
      u_angle2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle2 = u_angle2.real;
      offset += sizeof(this->angle2);
      union {
        float real;
        uint32_t base;
      } u_angle3;
      u_angle3.base = 0;
      u_angle3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle3 = u_angle3.real;
      offset += sizeof(this->angle3);
      union {
        float real;
        uint32_t base;
      } u_angle4;
      u_angle4.base = 0;
      u_angle4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle4 = u_angle4.real;
      offset += sizeof(this->angle4);
      union {
        float real;
        uint32_t base;
      } u_angle5;
      u_angle5.base = 0;
      u_angle5.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle5.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle5.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle5.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle5 = u_angle5.real;
      offset += sizeof(this->angle5);
      union {
        float real;
        uint32_t base;
      } u_angle6;
      u_angle6.base = 0;
      u_angle6.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angle6.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angle6.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angle6.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->angle6 = u_angle6.real;
      offset += sizeof(this->angle6);
     return offset;
    }

    const char * getType(){ return "arduino/Angles"; };
    const char * getMD5(){ return "7b8924dacc5d17a1ac2153b9050c8263"; };

  };

}
#endif
