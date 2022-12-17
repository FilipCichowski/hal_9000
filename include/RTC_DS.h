#ifndef RTC_H
#define RTC_H

#include <ErriezDS1302.h>

#include <cstdint>

struct RTC_Time_t {
    std::uint8_t hour;
    std::uint8_t min;
    std::uint8_t sec;
    std::uint8_t month_day;
    std::uint8_t mon;
    std::uint16_t year;
    std::uint8_t week_day;
};

class RTC_DS {
   public:
    RTC_DS();
    static bool init(ErriezDS1302 &rtc);
    static void get_time(ErriezDS1302 &rtc, RTC_Time_t &time);
};

#endif