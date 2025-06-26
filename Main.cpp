/*
* Name: N Roberts
 * CS 210 - Project One: Chada Tech Clocks
 * Description: Displays 12-hour and 24-hour clocks, and allows the user to increment time.
*/


#include <iostream>
#include "Clock.h"

#ifdef _WIN32
#define CLEAR "CLS"
#else
#define CLEAR "clear"
#endif


void printClocks(const Clock& c) {
    std::cout << "**************************      **************************\n"
              << "*     12-Hour Clock      *      *      24-Hour Clock     *\n*       "
              << c.get12Hour() << "       *      *        "
              << c.get24Hour() << "        *\n"
              << "**************************      **************************\n";
}

void printMenu() {
    std::cout << "\n************ MENU ************\n"
              << "* 1 - Add One Hour           *\n"
              << "* 2 - Add One Minute         *\n"
              << "* 3 - Add One Second         *\n"
              << "* 4 - Exit Program           *\n"
              << "*******************************\n"
              << "Enter your choice: ";
}

int main() {
    Clock clk(15, 22, 1);           // starting at 15:22:01
    bool running = true;

    while (running) {               // main loop
        system(CLEAR);
        printClocks(clk);
        printMenu();

        int choice;
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); // clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Invalid input. Please enter a number.\n";
        } else {
            switch (choice) {  // execute user-selected action
                case 1: clk.addHour();   break;
                case 2: clk.addMinute(); break;
                case 3: clk.addSecond(); break;
                case 4: running = false; continue;   // skip pause
                default: std::cout << "Invalid option.\n";
            }
        }
        std::cout << "\nPress ENTER to continue...";  // Pause to let the user view the output before clearing the screen
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush leftover
        std::cin.get();
    }
    // goodbye message after user exits
    std::cout << "\nThank you for using Chada Tech Clocks. Goodbye!" << std::endl;

    return 0;
}
