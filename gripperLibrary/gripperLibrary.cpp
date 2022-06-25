/*  
 * gripperLibrary.cpp 
 * Autor: Pedro henrique Pereira da Silva
 * Date: 25/06/2022
 * 
 */

 #include "Arduino.h"
 #include "gripperLibrary.h"
 #include <Servo.h>

 Gripper::Gripper(){}
 
 void Gripper::setServosPins(int pinGripper, int pinArmTop, int pinArmMiddle, int pinArmDown){
  gripper.attach(pinGripper);
  armTop.attach(pinArmTop);
  armMiddle.attach(pinArmMiddle);
  armDown.attach(pinArmDown);
}

void Gripper::setPinBase(int pin, bool hasBase ){
  if(hasBase){
    base.attach(pin);
   }
   _hasBase = hasBase;
}

void Gripper::gripperMoviment(int angle){
  gripper.write(angle);  
  while(gripper.read() != angle){
    delayMicroseconds(1);  
  }
}

void Gripper::armTopMovement(int angle){
  armTop.write(angle);  
  while(armTop.read() != angle){
    delayMicroseconds(1);  
  }
}

void Gripper::armMiddleMovement(int angle){
  armMiddle.write(angle);  
  while(armMiddle.read() != angle){
    delayMicroseconds(1);  
  }
}

void Gripper::armDownMovement(int angle){
  armDown.write(angle);  
  while(armDown.read() != angle){
    delayMicroseconds(1);  
  }
}

void Gripper::baseMovement(int angle){
  if(_hasBase){
    base.write(angle);  
    while(base.read() != angle){
      delayMicroseconds(1);  
    }
  }
}
