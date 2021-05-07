/*
  
  Fade!
  Using the PWM pins on an Arduino to fade an LED
  
 */

// This line of code names the pin you are using for your LED
int led = 3;           // the pin the LED is attached to - it MUST be a PWM pin
int brightness = 0;    // how bright the LED is 
int fadeAmount = 5;    // how much to fade the LED by each time

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Sets your pin to an output
  pinMode(led, OUTPUT);
}

// The loop part of your code runs over and over again, forever
void loop() {

  // Set the brightness of pin 3
  // The first time this loop runs, brightness will be 0
  analogWrite(led, brightness);

  // Every time the loop runs, we add the fadeAmount (5) to the value of the brightness for next time round the loop
  brightness = brightness + fadeAmount;

  // The maxiumum brightness is 255, so once we reach 255, we want to decrease the brightness and fade back down to 0
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // wait for 50 milliseconds between each loop so that we see the dimming effect
  delay(50);
  
}
