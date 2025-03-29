#include <Arduino.h>

#define LED1 0
#define LED2 1

void setup() {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop() {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(2000);  // Chờ 2 giây
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(2000);  // Chờ 2 giây
}