#include <lib_btt.h>

#define PIN 8

/*
 * Type: 1 for INPUT; 0 for INPUT_PULLUP.
 */

Btt button(PIN,0);

void setup(){
  Serial.begin(9600);
}

void loop(){
  button.clicked(show);
}

void show(){
  Serial.println("Hello world");
}
