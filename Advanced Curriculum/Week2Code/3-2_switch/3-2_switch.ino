/*
  
  Switches!
  Turn a simple circuit on and off with a switch
  
 */

// Name your pin
int led = 3;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Set up your pin as an output
  pinMode(led, OUTPUT);
}

// The loop part of your code runs over and over again, forever
void loop() {

  // Turn your LED on
  digitalWrite(led, HIGH);
}
