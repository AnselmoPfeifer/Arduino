#include <Arduino.h>

const int VERDE = 4;
const int VERMELHO = 5;
const int  BUTTON = 6;

int STATE = 0;

void setup(){
  pinMode(VERDE, OUTPUT);
  pinMode(VERMELHO, OUTPUT);
  pinMode(BUTTON, INPUT);

  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
}

void loop(){
  STATE = digitalRead(BUTTON);
  if (STATE == HIGH) {
      digitalWrite(VERMELHO, HIGH);
  }else{
    digitalWrite(VERMELHO, LOW);
  }
}
