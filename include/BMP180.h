#ifndef BMP180_H
#define BMP180_H

#include <Adafruit_BMP085.h>

#include <cstdint>


struct BMP180_t {
    float temp;
    long pressure;
};

class BMP180 {
    public:
        BMP180();
        bool init();
        const BMP180_t read_data();
        const BMP180_t get_data();
    private:
        Adafruit_BMP085 bmp;
        BMP180_t data;
};

#endif
