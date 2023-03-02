void setup() {   // Execute only once
  
   pinMode(7,OUTPUT);
   pinMode(10,INPUT);
   pinMode(13,OUTPUT);
   Serial.begin(9600);
}

int duration;    // to find duration between object and user by using reflection waves

void loop() {    // Execute as long power supply available
  
  
   digitalWrite(7,LOW);
   delay(2);
   digitalWrite(7,HIGH);
   delay(10);
   digitalWrite(7,LOW);
   duration=pulseIn(10,HIGH);
  
   if(duration*0.034/2<100){
   Serial.println(duration*0.034/2);
   digitalWrite(13,HIGH);
   }
	
   else
   digitalWrite(13,LOW);
	
   delay(500);
  
}
  
