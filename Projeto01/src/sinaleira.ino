#include <Arduino.h>

// Entradas de Sinais
int ledVermelho = 4;
int ledVerde = 5;
int botao = 6;
int botao = 7;

//Configuracoes de Pinos
void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(botao, INPUT);
}

//Execução do codigo
void loop()
{
  digitalWrite(ledVermelho, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  delay(1000);
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  delay(1000);

}
