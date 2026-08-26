#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

class Sensor {
private:
    uint8_t pin;

public:
    Sensor(uint8_t pin);
    void init();
    int readValue();
};

#endif // SENSOR_H
