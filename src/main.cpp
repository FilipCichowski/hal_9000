#include <Arduino.h>

#include "../include/SD_Card.h"

void setup() {
    Serial.begin(9600);
    Card card(4);
    card.init();
    card.log("za gorami za lasami", "test");
    card.log(2137, "test");
}

void loop() {
    // put your main code here, to run repeatedly:
}
