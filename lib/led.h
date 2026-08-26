#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
private:
    uint8_t pin;

public:
    LED(uint8_t pin);
    void init();
    void turnOn();
    void turnOff();
    void toggle();
};

#endif // LED_H
