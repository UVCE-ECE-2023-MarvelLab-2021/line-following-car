#include "pinsUsed.h"
int ir1_in = 0,ir2_in = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ir1_in = analogRead(ir1_pin);
  ir2_in = analogRead(ir2_pin);
  Serial.println(ir1_in);

  if(ir1_in<50 && ir2_in<50){
    goForward();
  }
  else if(ir1_in<50 && ir2_in>50){
    turnRight();
  }
  else if(ir1_in>50 && ir2_in<50){
    turnLeft();
  }
}

void goForward(){
  botSpeed = 40;
  analogWrite(rf_pin,botSpeed);
  analogWrite(rr_pin,0);
  analogWrite(lf_pin,botSpeed);
  analogWrite(lr_pin,0);
}

void turnRight(){
  botSpeed = 50;
  analogWrite(rf_pin,0);
  analogWrite(rr_pin,botSpeed);
  analogWrite(lf_pin,botSpeed);
  analogWrite(lr_pin,0);
} 

void turnLeft(){
  botSpeed = 50;
  analogWrite(rf_pin,botSpeed);
  analogWrite(rr_pin,0);
  analogWrite(lf_pin,0);
  analogWrite(lr_pin,botSpeed);
} 
