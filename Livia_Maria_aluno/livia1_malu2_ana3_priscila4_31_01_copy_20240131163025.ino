// Declaração de variáveis para números decimais
float sal_atual, novo_sal;

void setup() {
  //Configuração inicial do sistema
  //Será executada apenas no inicio

  sal_atual = 1200;

  // verificando o valor do salário com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //inicio
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual * 1.1;
  } else {
    novo_sal = 0;
  }

  //Iniviando a comunicação com o Monitor Serial
  Serial.begin(9600);
}

void loop() {
  //Código que será executado repetidamente
  // Serial.print("Hoje é o último dia de janeiro!!!!");  //Imprime a frase no monitor

  if (novo_sal == 0) {
    Serial.println("digite um salário válido!!!");
  }


  else {

    // exibindo o novo salário
    // Serial.print("Novo Salário: ");
    // Serial.println(novo_sal);
    // Serial.println("-----------------------")
  }

  delay(1000);  //espera 1 segundo antes de seguir o loop
}
