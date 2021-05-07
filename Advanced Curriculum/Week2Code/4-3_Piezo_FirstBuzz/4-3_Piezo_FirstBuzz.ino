/*
 * Let's make our first sounds with our piezo buzzer!
 */

// Set the piezo to pin 5
int piezo = 5;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Set the piezo as an output
  pinMode(piezo, OUTPUT); 

}

// Send the frequency to our piezo for 1 second, then turn off for 1 second
void loop() {
   tone(piezo, 40); // change this value to see what tones you can make 
   delay(2000);
   noTone(5);
   delay(1000); 

}
