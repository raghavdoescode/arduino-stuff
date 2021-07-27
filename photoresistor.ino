void setup() {
  pinMode(5, OUTPUT);
}


void loop() {
  int value = analogRead(A0);

  if (value > 15) {
      digitalWrite(5, LOW);
  } 

  if (value < 15) {
      digitalWrite(5, HIGH);
    }
}
