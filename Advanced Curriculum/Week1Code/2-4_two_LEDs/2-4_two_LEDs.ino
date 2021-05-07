/*
  
  Double up!
  Turning on two LEDs
  
 */

// These lines of code name the pins you are using for your LEDs
int ledred = 3;
int ledgreen = 6;

// The setup part of your code runs once when you start up the board or press reset
void setup() {
  
  // Sets your pins to an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
}

// The loop part of your code runs over and over again, forever
void loop() {

  digitalWrite(ledred, HIGH);   // Turn your red LED on by setting the voltage to HIGH
  digitalWrite(ledgreen, HIGH);    // Turn your green LED on by setting the voltage to HIGH
  delay(1000);               // Add in a 1 second delay 
  digitalWrite(ledred, LOW);   // Turn your red LED off by setting the voltage to LOW.
  digitalWrite(ledgreen, LOW);    // Turn your green LED off by setting the voltage to LOW.
  delay(1000);               // Add in a 1 second delay before starting the loop again
  
}
