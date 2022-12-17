#ifndef SD_CARD_H
#define SD_CARD_H

#include <SD.h>
#include <SPI.h>

#include <cstdint>

class Card {
   public:
    Card(std::uint8_t csPin);
    bool init();
    void open_file(const char *filename);
    void close_file(const char *filename);

    template <typename T>
    bool write_to_file(const T &data) {
        if (file) {
            file.println(data);
            return true;
        } else {
            return false;
        }
    };

    template <typename T>
    bool log(const T &data, const char *filename) {
        open_file(filename);
        if (write_to_file(data)) {
            close_file(filename);
            return true;
        } else {
            return false;
        }
    };

   private:
    std::uint8_t csPin;
    File file;
};

#endif
