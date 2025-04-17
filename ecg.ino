const int baseline = 512;

void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
}

void loop() {
  if (digitalRead(10) == HIGH || digitalRead(11) == HIGH) {
    Serial.println(0);
    delay(20);
    return;
  }

  int raw = analogRead(A0);
  int centered = raw - baseline;

  Serial.println(centered);

  delay(20);
}