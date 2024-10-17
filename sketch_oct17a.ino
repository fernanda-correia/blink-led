void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); //o led fica aceso por 1 segundo 
  digitalWrite(LED_BUILTIN, LOW);  
  delay(300);   } // o led fica apagado por 0,3 segundos
