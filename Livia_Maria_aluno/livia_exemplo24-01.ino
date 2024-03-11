//Declaração da variável de saída
int N1;
int N2;
int N3;

//Declaração da variável de saída
int S;

void setup() {
  //Configuração inicial do sistema
  //Será executada apenas no inicio

  //Iniviando a comunicação com o Monitor Serial
  Serial.begin(9600);

  N1 = 1;
  N2 = 2;
  N3 = 3;
  S = 0;

  //Processamento das entradas
  S = N1 + N2 + N3;
}

void loop() {
  //Código que será executado repetidamente
  Serial.print("A soma é: ");//Imprime a frase no monitor 
  Serial.println(S);//Mostra o valor da soma e muda o cursor de linha
  delay(1000);//espera 1 segundo antes de seguir o loop
}
