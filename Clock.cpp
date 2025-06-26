/*
 Name: N Roberts
 CS 210 - Project One: Chada Tech Clocks
 Description: Displays 12-hour and 24-hour clocks, and allows the user to increment time.
*/

// implementation of Clock.h

#include "Clock.h"
#include <iomanip>
#include <sstream>

Clock::Clock(int h, int m, int s)     // Constructor
        : hour(h % 24), minute(m % 60), second(s % 60) {}

void Clock::addHour()   { hour = (hour + 1) % 24; } // Adds one hour, wraps to 0 after 23
void Clock::addMinute() { minute = (minute + 1) % 60; if (minute == 0) addHour(); }
void Clock::addSecond() { second = (second + 1) % 60; if (second == 0) addMinute(); }

// Returns time as a formatted string in 24hr format (HH:MM:SS)
std::string Clock::get24Hour() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << hour   << ":"
        << std::setw(2) << minute << ":"
        << std::setw(2) << second;
    return oss.str();
}


std::string Clock::get12Hour() const {  // Returns time as a formatted string in 12hr format (HH:MM:SS AM/PM)
    int h12 = hour % 12; if (h12 == 0) h12 = 12;
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << h12    << ":"
        << std::setw(2) << minute << ":"
        << std::setw(2) << second
        << (hour >= 12 ? " PM" : " AM");
    return oss.str();
}
