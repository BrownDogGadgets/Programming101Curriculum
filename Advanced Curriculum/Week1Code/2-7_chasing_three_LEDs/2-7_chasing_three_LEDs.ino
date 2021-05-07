/*
  
  Fade between two!
  Fading between two LEDs
  
 */

// These lines of code name the pins you are using for your LEDs
int ledred = 3;        // the pin your LED is attached to
int ledgreen = 6;      // the pin your LED is attached to 
int ledblue = 9;      // the pin your LED is attached to

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Sets your pins to an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledblue, OUTPUT);  
}

// The loop part of your code runs over and over again, forever
void loop() {

  digitalWrite(ledred, HIGH); 
  digitalWrite(ledgreen, LOW); 
  digitalWrite(ledblue, LOW); 
  delay(200);

  digitalWrite(ledred, LOW); 
  digitalWrite(ledgreen, HIGH); 
  digitalWrite(ledblue, LOW); 
  delay(200);

  digitalWrite(ledred, LOW); 
  digitalWrite(ledgreen, LOW); 
  digitalWrite(ledblue, HIGH); 
  delay(200);

  digitalWrite(ledred, LOW); 
  digitalWrite(ledgreen, HIGH); 
  digitalWrite(ledblue, LOW); 
  delay(200);

}
