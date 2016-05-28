<<<<<<< HEAD
#include <Arduino.h>

=======
>>>>>>> Gelson
const int LED = 5;
const int STEP = 10;
const int PWM_MIN = 0;
const int PWM_MAX = 255;
int value = PWM_MIN;

void setup() {
  pinMode(LED, OUTPUT);
  analogWrite(LED, value);
  Serial.begin(9600);
}

void loop() {
  char data = 0;
  if (Serial.available() > 0)
  {
    data = Serial.read();
    switch (data)
    {
      case '+' :
        value += STEP;
        if (value > PWM_MAX) value = PWM_MAX;
        break;
      case '-':
        value -= STEP;
        if (value < PWM_MIN) value = PWM_MIN;
        break;
      case 'z':
        value = PWM_MIN;
        break;
      case 'm':
        value = PWM_MAX;
        break;
    }
    analogWrite(LED, value);
  }
}
