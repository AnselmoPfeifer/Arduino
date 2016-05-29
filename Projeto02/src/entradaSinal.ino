#include <Arduino.h>

const int LED_VERMELHO = 9;
const int LED_VERDE = 10;
const int BUTTON = 2;

int primeiroTempo = 500;
int segundoTempo = 5000;

void setup() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(LED_VERMELHO, LOW);
  digitalWrite(LED_VERDE, LOW);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) {
    digitalWrite(LED_VERMELHO, HIGH);
    delay(primeiroTempo);
    digitalWrite(LED_VERMELHO, LOW);
    delay(primeiroTempo);
  }else if(digitalRead(BUTTON) == LOW){
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_VERDE, HIGH);
  }
}
