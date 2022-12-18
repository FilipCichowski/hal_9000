#include <Arduino.h>

#include "../include/BMP180.h"
#include "../include/RTC_DS.h"
#include "../include/SD_Card.h"

ErriezDS1302 ds_1302 = ErriezDS1302(7, 6, 5);

BMP180 bmp = BMP180();
BMP180_t bmp_data;

RTC_DS rtc = RTC_DS();
RTC_Time_t rtc_time;

void setup() {
    Serial.begin(9600);
    bmp.init();
    rtc.init(ds_1302);
}

void loop() {
    rtc.get_time(ds_1302, rtc_time);
    Serial.println(rtc_time.hour);
    Serial.println(rtc_time.min);
    Serial.println(rtc_time.sec);

    delay(500);
}
