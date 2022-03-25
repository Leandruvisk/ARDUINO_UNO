void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(32, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
/////
  digitalWrite(25, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(33, LOW);
  digitalWrite(26, LOW);
  digitalWrite(14, LOW);
  digitalWrite(32, LOW);
//////
  digitalWrite(25, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(33, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
  digitalWrite(32, LOW);
///////
  digitalWrite(13, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(33, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
////////
  digitalWrite(25, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(32, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(13, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
  digitalWrite(32, LOW);
////////
  digitalWrite(25, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(13, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
  digitalWrite(14, LOW);
  digitalWrite(32, LOW);
///////
  digitalWrite(25, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(33, LOW);
  digitalWrite(12, LOW);
////////
  digitalWrite(25, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(14, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(13, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
  digitalWrite(32, LOW);
  digitalWrite(33, LOW);
  digitalWrite(14, LOW);
  /////
  digitalWrite(25, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(26, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(33, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  digitalWrite(13, LOW);
  digitalWrite(26, LOW);
  digitalWrite(12, LOW);
  digitalWrite(32, LOW);
  digitalWrite(33, LOW);

}
