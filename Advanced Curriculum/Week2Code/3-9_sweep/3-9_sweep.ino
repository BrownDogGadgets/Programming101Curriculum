/*
 * Learn how to control our servo arm and sweep back and forth! 
 */

#include <Servo.h> 

int servoPin = A5;
 
Servo servo;  

int angle = 0;   // servo position in degrees 
 
void setup() 
{ 
  servo.attach(servoPin,0,1275); 
} 
 
 
void loop() 
{ 
  // use a for loop to increase from from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);   
    delay(20);                   
  } 
  // now use a for loop to decrease from 180 to 0 degrees
  for(angle = 180; angle > 0; angle --)    
  {                                
    servo.write(angle);           
    delay(20);      
  } 
} 
