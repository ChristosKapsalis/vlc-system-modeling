int ledPin1 = 9;
int ledPin2 = 1;
int ledPin3 = 2;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {

  digitalWrite(ledPin1, HIGH);
  delay(2000);
  digitalWrite(ledPin1, LOW);
  delay(1000);

  digitalWrite(ledPin2, HIGH);
  delay(2000);
  digitalWrite(ledPin2, LOW);
  delay(1000);

  digitalWrite(ledPin3, HIGH);
  delay(2000);
  digitalWrite(ledPin3, LOW);
  delay(1000);

  delay(4000);
}
