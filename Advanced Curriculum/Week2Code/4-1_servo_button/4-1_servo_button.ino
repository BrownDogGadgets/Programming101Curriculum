/*
 * Learn how to control our servo with the press of a button!
 */
#include <Servo.h>
Servo servo;  
 
int servoPin = A5;
int button = 0;
int angle = 0;   // servo position on start in degrees

void setup() 
{ 
  // Set up your pin as an input and stabilise it with an internal pull up 
  pinMode(button, INPUT_PULLUP);
  servo.attach(servoPin, 0, 1275);  
} 
 
void loop() 
{ 
  // read the buttonState value:
  int buttonState = digitalRead(button);
  // if the button is pressed (remember it will read LOW because the 
  // pull up inverts it) add a step to your servo position
  if(buttonState == LOW) {
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
  }
}
