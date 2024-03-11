//Delaclaração das variáveis /numeros Reais*/
float nota1, nota2, nota3, peso1, peso2, peso3, media;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);


  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("Digite a nota 1:");

  // while = comando de repetição "enquanto"
  while (Serial.available() == 0) {
    //Aguarde a entrada de valores do usuário
  }

  // Lê o valor do serial e guarda na variável nota1
  nota1 = Serial.parseFloat();
  Serial.println(nota1);

  Serial.println("digite a nota 2:");
  while (Serial.available() == 0)
    ;
  {
    //Aguarde a entrada de nota 2
  }

  nota2 = Serial.parseFloat();

  Serial.println("digite a nota 3:");
  while (Serial.available() == 0)
    ;
  {
    //Aguarde a entrada de nota 3
  }

  nota3 = Serial.parseFloat();



  //Atribuição dos pesos
  Serial.println("Digite o peso 1:");
  while (Serial.available() == 0) {
    //Aguarda a entrada do peso1
  }
  peso1 = Serial.parseFloat();

  Serial.println("Digite o peso 2:");
  while (Serial.available() == 0) {
    //Aguarda a entrada do peso1
  }
  peso2 = Serial.parseFloat();

  Serial.println("Digite o peso 3:");
  while (Serial.available() == 0) {
    //Aguarda a entrada do peso1
  }
  peso3 = Serial.parseFloat();

  //Cálculo da media ponderada:
  media = (nota1 * peso1 + nota2 * peso2 * +nota3 * peso3) / (peso1 + peso2 + peso3);

  // Exibe o valor da média calculada
  Serial.print("Media ponderada:");
  Serial.println(media);
  delay(1000);
}

//Criando uma função chamada
 float aguardaEntrada(){
  while (!Serial.available()){
    //Aguarda até que um valor seja digitado
  }

  //Retornar o valor digitado no serial em tipo float
  return Serial.parseFloat();
}