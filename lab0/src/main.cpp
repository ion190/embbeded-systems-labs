#include <Arduino.h>
#include "Led.h"
#include "Button.h"

// pins
Led led(13);
Button button(2);

bool lastState = false;

void setup() {
  led.begin();
  button.begin();
}

void loop() {
  bool currentState = button.isPressed();

  if (currentState && !lastState) {
    led.toggle();
    delay(200); // debounce
  }

  lastState = currentState;
}
