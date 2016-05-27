#include <Arduino.h>

int ledVermelho = 2;
int ledVerde = 3;
int botao = 4;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(botao, INPUT);
}

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
