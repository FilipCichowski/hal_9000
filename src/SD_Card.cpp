#include "../include/SD_Card.h"

Card::Card(std::uint8_t csPin): csPin(csPin) {

}

bool Card::init() {
    return SD.begin(csPin);
}
