#include "../include/Mercury.h"

Mercury::Mercury(const std::uint8_t pin) : pin(pin) {}

void Mercury::init() { pinMode(pin, INPUT_PULLUP); }

bool Mercury::is_open() {
    // if sensor is tilted it will short pin to GND
    return digitalRead(pin);
}