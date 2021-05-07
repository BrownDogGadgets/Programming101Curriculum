/*
  
  Serial monitor with counting
  
 */

// create a variable called "counter" then tell it to start from zero
int counter = 0;

// The setup routine runs once when you start up the board or press reset
void setup() {
  
  // Start up your serial communication at 9600 bits per second 
  Serial.begin(9600);
  
}

// The loop part of your code runs over and over again, forever
void loop() {

  // This line of code prints everything inside the quotation marks
  Serial.print("hi! "); 
  // This line of code prints "hello!" then starts a new line
  Serial.println("hello!");  
  delay(500);
  Serial.println("hello again!");  
  delay(500);        
  // Add one to our "counter" variable then print the value of "counter" 
  counter = counter + 1;
  Serial.println(counter);
}
