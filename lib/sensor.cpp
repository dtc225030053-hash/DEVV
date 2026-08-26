#include "sensor.h"

Sensor::Sensor(uint8_t pin) : pin(pin) {}

void Sensor::init() {
    pinMode(pin, INPUT);
}

int Sensor::readValue() {
    return analogRead(pin);
}
