/*
 * 
 * lib_btt.cpp 
 * Autor: Pedro H. P. Silva
 * Creation date: 17/05/22
 * Objective: library for the button control (with debounce)
 * Update in __/__/____, by ________, for __________.
 * 
 */

#include "lib_btt.h"
#include "Arduino.h"

Btt::Btt(int pin, int type){
  _pin = pin;
  _type = type;
  if(type == 1){
    pinMode(pin,INPUT);
    // 1 == pressed, 0 == released
  }else{
    pinMode(pin,INPUT_PULLUP);
    // 0 == pressed, 1 == released
    stateButton = 1;
    lastStateButton = 1;
  }
}

void Btt::clicked(void func()){
  stateButton = digitalRead(_pin);
  if((stateButton == _type) && (lastStateButton != stateButton)){
    del = millis();
    bttClicked = true;
  }
  if((millis() - del > debounce) && (bttClicked == true)){
    func();
    bttClicked = false;
  }

  lastStateButton = stateButton;
}
