/*
  
  Switches part two!
  Use your switch to flip between between two LEDs
  
 */

// Name your pin
int ledred = 3;
int ledgreen = 6;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Set up your pin as an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);

}

// The loop part of your code runs over and over again, forever
void loop() {

  // Turn your LED on
  digitalWrite(ledred, HIGH);
  digitalWrite(ledgreen, HIGH);  
}
