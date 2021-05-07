/*
  
  Monitor your button!
  Use your serial monitor to see if a button has been pressed
  
 */

// Name your pin
int button = 3;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Set up your pin as an input and stabilise it with an internal pull up 
  pinMode(button, INPUT_PULLUP);
  // Set up your serial communication
  Serial.begin(9600);
  
}

// The loop part of your code runs over and over again, forever
void loop() {
  
  // read the pin 
  int buttonState = digitalRead(button);
  // print out the state of the button. Note that because we used an 
  // internal pull up to stabilise our button, the values will be inverted: 
  // HIGH (button pressed) reads as 0 and LOW (button released) reads as 1
  Serial.println(buttonState);
  // add in a short delay between reads for stability
  delay(5);       
  
}
