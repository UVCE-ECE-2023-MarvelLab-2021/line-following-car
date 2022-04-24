#pragma once 

// pwm cignals to motor drive 
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