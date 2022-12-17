#ifndef SD_CARD_H
#define SD_CARD_H

#include <SPI.h>
#include <SD.h>

class Card {
    public:
        Card(std::uint8_t csPin);
        bool init();
    private:
        std::uint8_t csPin;
};

#endif

