//constante para  opino da buzzer
#define pinoBuzzer 2

//constante do led
#define pinoLedVermelho 3
#define pinoLedAmarelo 9
#define pinoLedVerde 10

//constante pino do push button
#define pinoButton 8

void setup() {
  Serial.begin(9600);

  // Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoLedAmarelo, OUTPUT);
  pinMode(pinoLedVerde, OUTPUT);
  pinMode(pinoButton, INPUT);
}

void loop() {
  if (digitalRead(pinoButton) == 1) {
    tone(pinoBuzzer, 1000);  // Nota musical dó
    digitalWrite(pinoLedVermelho, HIGH);
    digitalWrite(pinoLedAmarelo, HIGH);
    digitalWrite(pinoLedVerde, HIGH);
  }

  else if (digitalRead(pinoButton) == 0) {
    noTone(pinoBuzzer);                  //desliga a buzzer
    digitalWrite(pinoLedVermelho, LOW);  //apaga o LED
    digitalWrite(pinoLedAmarelo, LOW);  //apaga o LED
    digitalWrite(pinoLedVerde, LOW);  //apaga o LED
  }
}
