// COMP444 - Circuit 1A - Blink an LED

void setup() {
  pinMode(13, OUTPUT); // set pin 13 to output
}

void loop() {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
}
