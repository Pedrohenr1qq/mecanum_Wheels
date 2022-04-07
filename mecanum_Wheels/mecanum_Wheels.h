/*
 * Sketch: mecanum_Wheels.h
 * Date: 07/04/22
 * Author: Pedro Henrique P. da Silva
 * About: This library was criated with objective of performing certain functions with Mecanum wheels, in order to be used in robotic competitions;
 * Update in __/__/__, because: ;
 * 
 */

#ifndef mecanum_Wheels
#define mecanum_Wheels

class Mecanum{
  public:
    Mecanum(int left[6],int right[6]);  
    
  
    
  private:
    struct pont_h{
      int n1,n2,n3,n4,pwm1,pwm2;
    };
    struct pont_h pLeft;
    struct pont_h pRight;
    void clockwise_m1();
    void antiClockwise_m1();
    void clockwise_m2();
    void antiClockwise_m2();
    void clockwise_m3();
    void antiClockwise_m3();
    void clockwise_m4();
    void antiClockwise_m4();
    
};

#endif

 
