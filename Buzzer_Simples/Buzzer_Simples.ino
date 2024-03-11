//constante para  opino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  // Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
}

void loop() {
  tone(pinoBuzzer, 523);  // Nota musical dó
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);       //desliga a buzzer
  digitalWrite(pinoLedVermelho, LOW);  //apaga o LED
  delay(1000);
}
