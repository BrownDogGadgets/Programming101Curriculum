/*
  
  Fade between two!
  Fading between two LEDs
  
 */

// These lines of code name the pins you are using for your LEDs
int ledred = 3;        // the PWM pin your LED is attached to
int ledgreen = 6;      // the PWM pin your LED is attached to 
int ledblue = 9;      // the PWM pin your LED is attached to

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Sets your pins to an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledblue, OUTPUT);  
}

// The loop part of your code runs over and over again, forever
void loop() {

  analogWrite(ledred, 255); 
  analogWrite(ledgreen, 5); 
  analogWrite(ledblue, 0); 
  delay(300);

  analogWrite(ledred, 5); 
  analogWrite(ledgreen, 255); 
  analogWrite(ledblue, 0); 
  delay(250);
  
  analogWrite(ledred, 0); 
  analogWrite(ledgreen, 5); 
  analogWrite(ledblue, 255); 
  delay(300);

  analogWrite(ledred, 0); 
  analogWrite(ledgreen, 255); 
  analogWrite(ledblue, 10); 
  delay(250);

}
