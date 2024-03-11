//definição das constantes: pinos de entrada

#define pinoBuzzer 2


//leds
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6

byte doh, re, mi, fa = 0;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // Leitura dos botoes armazenada nas váriavaes de controle
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);

  //verificando qual nota foi acionada
  if (doh == 1) {
    //ativa a nota dó
    tone(pinoBuzzer, 523);
  }
   else if (re == 1) {
    //ativa a nota ré
    tone(pinoBuzzer, 587);
  }
  else if (re == 1) {
    //ativa a nota ré
    tone(pinoBuzzer, 587);
  }
  else if (re == 1) {
    //ativa a nota ré
    tone(pinoBuzzer, 587);
  }
  else {
    //Desliga a buzzer
    noTone(pinoBuzzer);
  }

  delay(50);  //tempo de execução da nota musica
}