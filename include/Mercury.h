#ifndef MERCURY_H
#define MERCURY_H

#include <Arduino.h>

#include <cstdint>

class Mercury {
   public:
    Mercury(const std::uint8_t pin);
    void init();
    bool is_open();

   private:
    const std::uint8_t pin;
};

#endif