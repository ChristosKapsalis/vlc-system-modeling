int sensorPin = A0;
int value = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensorPin);

  Serial.print("Sensor Value: ");
  Serial.println(value);

  delay(500);
}
