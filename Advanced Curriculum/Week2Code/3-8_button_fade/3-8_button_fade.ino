/*
  
  Fade between three!
  Fading between three LEDs
  
 */

// These lines of code name the pins you are using for your LEDs
int ledgreen = 3;        // the PWM pin your LED is attached to
int ledred = 6;      // the PWM pin your LED is attached to 
int ledblue = 9;      // the PWM pin your LED is attached to
int button = 0;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Sets your pins to an output
  pinMode(ledred, OUTPUT);
  pinMode(ledgreen, OUTPUT);
  pinMode(ledblue, OUTPUT);
  pinMode(button, INPUT_PULLUP);  
}

// The loop part of your code runs over and over again, forever
void loop() {
  // read the buttonState value:
  int buttonState = digitalRead(button);
  // if the button is pressed (remember it will read LOW because the 
  // pull up inverts it) turn on the LED. Otherwise, turn off the LED.
  if (buttonState == LOW) {
    analogWrite(ledgreen, 255); 
    analogWrite(ledred, 5); 
    analogWrite(ledblue, 0); 
    delay(300);

    analogWrite(ledgreen, 5); 
    analogWrite(ledred, 255); 
    analogWrite(ledblue, 0); 
    delay(250);
  
    analogWrite(ledgreen, 0); 
    analogWrite(ledred, 5); 
    analogWrite(ledblue, 255); 
    delay(300);

    analogWrite(ledgreen, 0); 
    analogWrite(ledred, 255); 
    analogWrite(ledblue, 10); 
    delay(250);
  } else {
    analogWrite(ledgreen, 0); 
    analogWrite(ledred, 0); 
    analogWrite(ledblue, 0);
  }
}
