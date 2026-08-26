#include <Arduino.h>
#define LED_PIN     2           // đổi chân LED
#define SENSOR_PIN A0
int threshold = 600;           // tăng ngưỡng

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(SENSOR_PIN, INPUT);
}

void loop() {
    int value = analogRead(SENSOR_PIN);
    if (value > threshold)
        digitalWrite(LED_PIN, HIGH);
    else
        digitalWrite(LED_PIN, LOW);
}
