/*
  
  Blink!
  Blinking your first LED
  
 */

// This line of code names the pin you are using for your LED.
int led = 3;

// This setup routine runs once when you start up the board or press reset.
void setup() {
  
  // This line sets your chosen pin to an output.
  pinMode(led, OUTPUT);
}

// This is the loop part of your code. Whatever code you put inside these curly brackets will run over and over again forever.
void loop() {

  digitalWrite(led, HIGH);   // Turn your LED on by setting the voltage to HIGH.
  delay(1000);               // Add in a delay before moving on to the next line of code. This is 1000 miliseconds, which is equal to 1 second.
  digitalWrite(led, LOW);    // Turn your LED off by setting the voltage to LOW.
  delay(1000);               // Add in a 1 second delay before starting the loop again.
  
}
