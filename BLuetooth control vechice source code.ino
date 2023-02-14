#include "AFMotor.h"
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);


void setup(){
 
  Serial.begin(9600);
  motor1.setSpeed(246);
  motor2.setSpeed(246);
  motor3.setSpeed(246);
  motor4.setSpeed(246);
}

void loop() {
  // put your main code here, to run repeatedly:
    motor1.run(FORWARD);
   motor2.run(FORWARD); 
    motor3.run(FORWARD); 
   motor4.run(FORWARD); 
}
