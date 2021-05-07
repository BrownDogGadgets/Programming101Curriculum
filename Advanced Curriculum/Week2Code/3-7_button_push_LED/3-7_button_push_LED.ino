/*
  
  Button-controlled LED!
  Turn an LED on and off with a button
  
 */

// Name your pins
int led = 6;
int button = 3;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Set up your pins
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);

}

// The loop part of your code runs over and over again, forever
void loop() {
  // read the buttonState value:
  int buttonState = digitalRead(button);
  // if the button is pressed (remember it will read LOW because the 
  // pull up inverts it) turn on the LED. Otherwise, turn off the LED.
  if (buttonState == LOW) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
  Serial.println(buttonState);
}
