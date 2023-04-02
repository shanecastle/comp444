// SIK Circuit 1C-Photoresistor

int photoresistor = 0;  // holds the value of brightness of ambient light
int threshold = 750;    //reading below this value turns on light

void setup()
{
  Serial.begin(9600);  //start serial connection
  pinMode(13, OUTPUT); //set pin 13 as output - can HIGH or LOW
}

void loop()
{
  //read the brightness of the ambient light (number between 0 and 1023)
  photoresistor = analogRead(A0);

  //print the value to the serial monitor
  Serial.println(photoresistor);    

  //if the photoresistor value is below the threshold turn the light on, otherwise turn it off
  if (photoresistor < threshold) {
    digitalWrite(13, HIGH);         // Turn on the LED
  } else {
    digitalWrite(13, LOW);          // Turn off the LED
  }

  delay(100);
}
