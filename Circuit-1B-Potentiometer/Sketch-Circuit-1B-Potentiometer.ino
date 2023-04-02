// COMP444 - Circuit 1B-Potentiometer

int potPosition; // holds a value based on the position of the potentiometer
void setup()
{
  Serial.begin(9600); //start a serial connection
  pinMode(13, OUTPUT); //set pin 13 to output - can be HIGH or LOW
}
void loop()
{
  //read the position of the pot
  potPosition = analogRead(A0); //set potPosition (0 to 1023) based on knob
  Serial.println(potPosition); //print value of potPosition 
  //change the LED blink speed based on the pot value
  digitalWrite(13, HIGH); // Turn on the LED
  delay(potPosition); // delay for as many ms as potPosition (0-1023)
  digitalWrite(13, LOW); // Turn off the LED
  delay(potPosition); // delay for as many ms as potPosition (0-1023)
}
