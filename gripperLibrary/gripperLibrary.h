/*  
 * gripperLibrary.h 
 * Autor: Pedro henrique Pereira da Silva
 * Date: 25/06/2022
 * 
 */

 #ifndef gripperLibrary
 #define gripperLibrary
 #include <Servo.h>

 class Gripper{
  public:
    Gripper();
    void setServosPins();
    void setServosPins(int pinGripper, int pinArmTop, int pinArmMiddle, int pinArmDown);
    void setPinBase(int pin, bool hasBase);
    void gripperMoviment(int angle);
    void armTopMovement(int angle);
    void armMiddleMovement(int angle);
    void armDownMovement(int angle);
    void baseMovement(int angle);

  private:
    bool _hasBase;
    Servo gripper;
    Servo armTop;
    Servo armMiddle;
    Servo armDown;
    Servo base;
  
  };

 
 

 #endif
