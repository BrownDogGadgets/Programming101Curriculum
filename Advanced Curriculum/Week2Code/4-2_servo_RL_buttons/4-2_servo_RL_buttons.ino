

#include <Servo.h>
Servo servo;  
 
int servoPin = A5;
int buttonOne = 2;
int buttonTwo = 6;
int angle = 0;   // servo position on start in degrees

void setup() 
{ 
  // Set up your buttons as inputs and stabilise them with an internal pull up 
  pinMode(buttonOne, INPUT_PULLUP);
  pinMode(buttonTwo, INPUT_PULLUP);
  servo.attach(servoPin, 0, 1275);  
} 
 
void loop() 
{ 
  // read the buttonState value:
  int buttonOneState = digitalRead(buttonOne);
  int buttonTwoState = digitalRead(buttonTwo);

  if(buttonOneState == LOW) {
  // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  
  }

  if(buttonTwoState == LOW) {
  // scan from 180 to 0 degrees
  for(angle = 180; angle > 0; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
  }
}
