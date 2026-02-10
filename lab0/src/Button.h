#ifndef BUTTON_H
#define BUTTON_H

class Button {
  private:
    int pin;

  public:
    Button(int buttonPin);
    void begin();
    bool isPressed();
};

#endif
