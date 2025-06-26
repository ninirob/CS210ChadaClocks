/*
 Name: N Roberts
 CS 210 - Project One: Chada Tech Clocks
 Description: Displays 12-hour and 24-hour clocks, and allows the user to increment time.
*/

// Clock class represents a digital clock and supports 12-hour and 24-hour formats

#ifndef CLOCK_H
#define CLOCK_H

#include <string>

class Clock {
private:
    int hour;      // 0–23
    int minute;    // 0–59
    int second;    // 0–59

public:
    Clock(int h = 0, int m = 0, int s = 0);

    void addHour();         // Increments the hour by 1, wraps around at 24
    void addMinute();       // Increments the minute by 1, wraps around at 60 and adds an hour if needed
    void addSecond();       // Increments the second by 1, handles minute/hour rollover

    std::string get12Hour() const;   // formatted string
    std::string get24Hour() const;   // formatted string
};


#endif //CLOCK_H
