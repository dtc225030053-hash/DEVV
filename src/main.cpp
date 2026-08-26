#include <Arduino.h>
#define LED_PIN 13
#define SENSOR_PIN A0

int threshold = 600;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(SENSOR_PIN, INPUT);
}

void loop() {
    int value = analogRead(SENSOR_PIN);
    if (value > threshold)
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
}
