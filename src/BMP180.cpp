#include "../include/BMP180.h"

BMP180::BMP180() {}

bool BMP180::init() { return bmp.begin(); }

BMP180_t BMP180::get_data() { return data; }

BMP180_t BMP180::read_data() {
    data.temp = bmp.readTemperature();
    data.pressure = bmp.readPressure();
    return data;
}