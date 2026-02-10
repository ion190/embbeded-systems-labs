#include <Arduino.h>
#include "Led.h"

Led::Led(int ledPin) {
  pin = ledPin;
}

void Led::begin() {
  pinMode(pin, OUTPUT);
}

void Led::on() {
  digitalWrite(pin, HIGH);
}

void Led::off() {
  digitalWrite(pin, LOW);
}

void Led::toggle() {
  digitalWrite(pin, !digitalRead(pin));
}
