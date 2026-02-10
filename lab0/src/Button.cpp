#include <Arduino.h>
#include "Button.h"

Button::Button(int buttonPin) {
  pin = buttonPin;
}

void Button::begin() {
  pinMode(pin, INPUT_PULLUP); 
}

bool Button::isPressed() {
  return digitalRead(pin) == LOW;
}
