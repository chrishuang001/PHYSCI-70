int solenoid = 3;
int led = 13;

void setup() {
  pinMode(solenoid, OUTPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(solenoid, HIGH);
  delay(2000);

  digitalWrite(led, LOW);
  digitalWrite(solenoid, LOW);
  delay(1000);

}
