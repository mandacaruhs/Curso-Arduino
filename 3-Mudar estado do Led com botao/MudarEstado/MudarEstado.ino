/*
  Exemplo 3
  Criado por: Jaca
  Data:       09/09/2018

  Alternar o estado de uma saída com uma entrada.

  Materiais:
  1x Resistor 10k ohm
  1x Pushbutton/Botão
*/


// Definições de pinos
const int buttonPin = 2;
const int ledPin = 13;

// tempo de espera da oscilação da entrada
const unsigned long debounceDelay = 50;

// Variáveis para rastrear os estados do bot
int estadoLED = LOW;
int estadoBOTAO = LOW; //inicia em LOW, considerando o botão não acionado


void setup() {
  // Configuração dos pinos: Saída para o pino do LED, e entrada para
  // o do botão
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  // Configurando o estado do LED na inicialização
  digitalWrite(ledPin, estadoLED);
}

void loop() {
  // A variável leitura guarda o estado atual do pino do botão
  int leitura = digitalRead(buttonPin);
  // Se a leitura é diferente do estado armazenado anteriormente
  // e o estado é HIGH, o estado do LED é trocado
  if (leitura != estadoBOTAO){
    if (leitura==HIGH)
      estadoLED = !estadoLED; //Troca o estado do LED
    delay(debounceDelay); //IMPORTANTE:Espera para evitar oscilação de entrada
    estadoBOTAO = leitura; // Guarda o estado atual do botão para a proxima volta
  }
  // Saída para o LED
  digitalWrite(ledPin, estadoLED);
}
