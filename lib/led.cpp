#include "led.h"

LED::LED(uint8_t pin) : pin(pin) {}

void LED::init() {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
}

void LED::turnOn() {
    digitalWrite(pin, HIGH);
}

void LED::turnOff() {
    digitalWrite(pin, LOW);
}

void LED::toggle() {
    digitalWrite(pin, !digitalRead(pin));
}
