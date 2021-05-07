/*
 * Learn how to control our servo arm and make it wiggle! 
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
  // use a for loop to increase from from 80 to 120 degrees
  for(angle = 80; angle < 120; angle++)  
  {                                  
    servo.write(angle);               
    delay(5);                   
  } 
   // use a for loop to decrease from from 120 to 80 degrees
  for(angle = 120; angle > 80; angle--)    
  {                                
    servo.write(angle);           
    delay(5);       
  } 
} 
