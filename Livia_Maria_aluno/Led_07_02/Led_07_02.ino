//Declaração das variáveis que representam os pinos dos leds
int ledAmarelo = 8;
int ledVermelho = 9;
int ledVerde = 10;

//Declaração das variáveis que representam os pinos dos leds
int ledAmarelo2 = 11;
int ledVermelho2 = 13;
int ledVerde2 = 12;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  //Definindo os tipos dos pinos
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledVerde2, OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);

  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, LOW);
  delay(2000);

  digitalWrite(ledVerde2, HIGH);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  delay(2000);

  digitalWrite(ledAmarelo2, HIGH);
  digitalWrite(ledVerde2, LOW);
  delay(2000);
}