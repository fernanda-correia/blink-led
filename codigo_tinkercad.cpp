void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(2000); // Fica aceso por 2 segundos
  digitalWrite(8, LOW);
  delay(500); // Pisca a cada meio segundo
}
