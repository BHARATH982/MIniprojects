 #include "AFMotor.h" // Including header file 
 AF_DCMotor motor1(1); 
 AF_DCMotor motor2(2);
 AF_DCMotor motor3(3);
 AF_DCMotor motor4(4);

 void setup(){ // intial steps that execute one time
 Serial.begin(9600);
 motor1.setSpeed(246); //setting motor1 speed 
 motor2.setSpeed(246); //setting motor2 speed 
 motor3.setSpeed(246); //setting motor3 speed 
 motor4.setSpeed(246);//setting motor4 speed 
}

void loop(){ // steps that execute continously 
//M3-off for right
//M4 off for left
 
while(Serial.available()>0){
 int a=Serial.parseInt();
 
 if(a==1){
 motor1.run(FORWARD);
 motor2.run(FORWARD); 
 motor3.run(FORWARD);
 motor4.run(FORWARD); 
 delay(5000);
 }
 
 if(a==2){
 motor1.run(BACKWARD);
 motor2.run(BACKWARD);
 motor3.run(BACKWARD);
 motor4.run(BACKWARD);
delay(5000);
 }
 
 //left
 if(a==3){
 motor1.run(RELEASE);
 motor2.run(FORWARD);
 motor3.run(FORWARD);
 motor4.run(RELEASE);
delay(5000);
 } 
 //right 

 if(a==4){
 motor1.run(FORWARD);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(FORWARD);
delay(5000);
 }
 if(a==5){
 motor1.run(RELEASE);
 motor2.run(RELEASE);
 motor3.run(RELEASE);
 motor4.run(RELEASE);
 delay(1000);
 } 
 if(a==6){ 
 motor3.setSpeed(100);
 motor4.setSpeed(100); 
 delay(2000);
 }
 
} 
}
