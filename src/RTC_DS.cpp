#include "../include/RTC_DS.h"

RTC_DS::RTC_DS() {}

bool RTC_DS::init(ErriezDS1302 &rtc) {
    while (!rtc.begin()) {
        ;
    }
    if (!rtc.isRunning()) {
        rtc.clockEnable(true);
    }
    return true;
}

void RTC_DS::get_time(ErriezDS1302 &rtc, RTC_Time_t &time) {
    if (!rtc.getDateTime(&time.hour, &time.min, &time.sec, &time.month_day,
                         &time.mon, &time.year, &time.week_day)) {
        time.hour = 0;
        time.min = 0;
        time.sec = 0;
        time.month_day = 0;
        time.mon = 0;
        time.year = 0;
        time.week_day = 0;
    }
}
