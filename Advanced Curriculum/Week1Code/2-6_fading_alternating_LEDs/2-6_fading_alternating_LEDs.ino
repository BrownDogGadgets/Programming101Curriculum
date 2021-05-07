/*
  
  Fade between two!
  Fading between two LEDs
  
 */

// These lines of code name the pins you are using for your LEDs
int ledred = 3;        // the pin the LED is attached to - it MUST be a PWM pin
int ledgreen = 6;      // the pin the LED is attached to - it MUST be a PWM pin

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Sets your pins to an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
}

// The loop part of your code runs over and over again, forever
void loop() {

  // fade in from 0 (min) to 255 (max) in increments of 5 points
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the brightness of the red LED to the value of the fade
    analogWrite(ledred, fadeValue);   
    // wait for 50 milliseconds so you can see the dimming effect    
    delay(50);                            
  } 
  
  // fade in from 255 (max) to 0 (max) in increments of 5 points
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the brightness of the red LED to the value of the fade
    analogWrite(ledred, fadeValue);    
    // wait for 50 milliseconds so you can see the dimming effect    
    delay(50);                            
  } 

// fade in from 0 (min) to 255 (max) in increments of 5 points
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the brightness of the green LED to the value of the fade
    analogWrite(ledgreen, fadeValue);   
    // wait for 50 milliseconds so you can see the dimming effect    
    delay(50);                            
  } 
  
  // fade in from 255 (max) to 0 (max) in increments of 5 points
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the brightness of the green LED to the value of the fade
    analogWrite(ledgreen, fadeValue);    
    // wait for 50 milliseconds so you can see the dimming effect    
    delay(50);                            
  } 

}
