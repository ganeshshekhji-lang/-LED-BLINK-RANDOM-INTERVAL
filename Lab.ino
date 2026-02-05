 int led1 = 8;   // First LED pin
int led2 = 9;   // Second LED pin

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // LED 1 ON, LED 2 OFF
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(200);   // LED 1 ON time

  digitalWrite(led1, LOW);
  delay(150);   // LED 1 OFF time

  // LED 2 ON, LED 1 OFF
  digitalWrite(led2, HIGH);
  digitalWrite(led1, LOW);
  delay(200);   // LED 2 ON time

  digitalWrite(led2, LOW);
  delay(150);   // LED 2 OFF time
}

