#include "pinsUsed.h"
int ir1_in = 0,ir2_in = 0;

void setup() {
  Serial.begin(9600);
}

// control signals to motors
#include "motorControls.h"

void loop() {
  ir1_in = analogRead(ir1_pin); // read left sensor input
  ir2_in = analogRead(ir2_pin); // read right sensor input

  if(ir1_in<50 && ir2_in<50){ 
    goForward(); // move in straight line 
  }
  else if(ir1_in<50 && ir2_in>50){
    turnRight(); // turn right if right sensor facing black surface
  }
  else if(ir1_in>50 && ir2_in<50){
    turnLeft();// turn left if left sensor facing black surface
  }
}
