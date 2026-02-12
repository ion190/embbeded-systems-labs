#ifndef LED_H
#define LED_H

class Led {
public:
    Led(int pin);
    void begin();
    void on();
    void off();

private:
    int _pin;
};

#endif
