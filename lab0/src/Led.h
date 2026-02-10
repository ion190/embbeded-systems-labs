#ifndef LED_H
#define LED_H

class Led {
  private:
    int pin;

  public:
    Led(int ledPin);
    void begin();
    void on();
    void off();
    void toggle();
};

#endif
