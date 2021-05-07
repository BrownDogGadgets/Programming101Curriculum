// Lights on! Turning on your first LED

// In our first line of code we are giving pin 3 a name: led.
int led = 3;

// The setup routine runs once when you start up the board or press reset.
// Put all your setup instructions here, between the first set of curly brackets.
void setup() {
  
  // The next line tells your Arduino that the pin you've called led is an output - that it DOES something.
  pinMode(led, OUTPUT);
}

// This is the loop part of your code. Whatever code you put inside these curly brackets will run over and over again forever.
void loop() {

  // The next line tells your Arduino that the pin you've called led should be turned on.
  // In Arduino, HIGH is on and LOW is off. HIGH and LOW refer to the level of voltage your Arduino gives to the chosen pin.
  digitalWrite(led, HIGH);
}
