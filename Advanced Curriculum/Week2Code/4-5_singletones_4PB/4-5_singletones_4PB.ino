/*
   Set up four buttons that each play their own unique sound! 
*/
// set up our inputs
int button1 = 6;
int button2 = 7;
int button3 = 8;
int button4 = 9;

// assign sounds to variables 
int sound1 = 50;
int sound2 = 75;
int sound3 = 400; 
int sound4 = 600; 

//piezo pin
int piezo = 5;

// The setup routine runs once when you start up the board or press reset
void setup() {

  // Set up the piezo as an output and the button as an input using internal pullup
  pinMode(piezo, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  // read the buttonState values for each button into a varaible:
  int button1State = digitalRead(button1);
  int button2State = digitalRead(button2);
  int button3State = digitalRead(button3);
  int button4State = digitalRead(button4);
  
  // send tone to piezo if button one is pressed
  if (button1State == LOW) {
    //tone(piezo, sound1);
    Serial.println("Button ONE pressed!");
    tone(piezo, sound1); // change this value to see what tones you can make 
    delay(200);
  }
    // send tone to piezo if button two is pressed
  else if (button2State == LOW) {
    //tone(piezo, sound2);
    Serial.println("Button TWO pressed!");
    tone(piezo, sound2); // change this value to see what tones you can make 
    delay(200);
  }
    // send tone to piezo if button three is pressed
  else if (button3State == LOW) {
    //tone(piezo, sound3);
    Serial.println("Button THREE pressed!");
    tone(piezo, sound3); // change this value to see what tones you can make 
    delay(200);
  }
    // send tone to piezo if button four is pressed
  else if (button4State == LOW) {
    //tone(piezo, sound4);
    Serial.println("Button FOUR pressed!");
    tone(piezo, sound4); // change this value to see what tones you can make 
    delay(200);
  }
  else {
    noTone(piezo);
    //Serial.println("nothing");
    delay(200);
  }  }
