#include "../include/SD_Card.h"

Card::Card(std::uint8_t csPin) : csPin(csPin) {}

bool Card::init() { return SD.begin(csPin); }

void Card::open_file(const char *filename) {
    file = SD.open(filename, FILE_WRITE);
}

void Card::close_file(const char *filename) { file.close(); }