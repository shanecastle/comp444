// COMP444 - Circuit 2B-ButtonTrumpet

//set the pins for the button and buzzer
int firstKeyPin = 2;
int secondKeyPin = 3;
int thirdKeyPin = 4;
int buzzerPin = 10;

void setup() {
  //set the button pins as inputs
  pinMode(firstKeyPin, INPUT_PULLUP);
  pinMode(secondKeyPin, INPUT_PULLUP);
  pinMode(thirdKeyPin, INPUT_PULLUP);

  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  //if the first key is pressed play the frequency for c
  if (digitalRead(firstKeyPin) == LOW) {      
    tone(buzzerPin, 262);                     
  }
  else if (digitalRead(secondKeyPin) == LOW) { 
    tone(buzzerPin, 330);                     
  }
  else if (digitalRead(thirdKeyPin) == LOW) { 
    tone(buzzerPin, 392);                     
  }
  else {
    //if no key is pressed turn the buzzer off
    noTone(buzzerPin);                        
  }
}

/*
  note  frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz
*/
