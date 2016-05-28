#include <Arduino.h>

const int buttonPin = 2;
const int ledVerde = 3;
const int ledVermelho = 4;

int buttonState = 0;

void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop(){
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledVermelho, HIGH);
  }else{
      digitalWrite(ledVerde, HIGH);
  }
}
