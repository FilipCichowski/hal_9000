#include <Arduino.h>

#include "../include/BMP180.h"
#include "../include/SD_Card.h"

// Adafruit_BMP085 bmp;

BMP180 bmp;
BMP180_t bmp_data;

void setup() {
    Serial.begin(9600);

    // Card card(4);
    // card.init();
    // card.log("za gorami za lasami", "test");
    // card.log(2137, "test");

    // if (!bmp.begin()) {
    //     Serial.println("Could not find a valid BMP085 sensor, check wiring!");
    //     while (1) {
    //     }
    // }

    bmp.init();
}

void loop() {
    // Serial.print("Temperature = ");
    // Serial.print(bmp.readTemperature());
    // Serial.println(" *C");
    // delay(500);
    bmp_data = bmp.read_data();
    Serial.print("Temperature: ");
    Serial.print(bmp_data.temp);
    Serial.print("\n");
}
