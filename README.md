Chada Tech Clocks - CS 210 Project One

## Author
**N Roberts**

## Description
This project simulates a digital clock application that displays the current time in both 12-hour and 24-hour formats simultaneously. Users can interact with the clock through a menu to increment hours, minutes, or seconds. 
The program updates both time formats accordingly and handles proper rollover for each unit of time.

The application was developed as part of the CS 210 course to demonstrate object-oriented programming, modular design, and adherence to best coding practices.

## Features
- Simultaneous display of 12-hour and 24-hour digital clocks.
- User-friendly menu with options to:
    - Add one hour
    - Add one minute
    - Add one second
    - Exit the program
- Input validation for menu selections.
- Cleanly formatted and readable time output using `iomanip`.
- Goodbye message upon exit.
- Modular code design with well-documented classes and methods.

## Technologies Used
- Language: C++
- IDE: CLion (JetBrains)
- Standards: C++20, ISO 8601 formatting principles
- Environment: Tested on macOS 

## How to Run
1. Clone the repository or download the project files.
2. Open the project in CLion or compile manually with g++:
   ```bash
   g++ main.cpp Clock.cpp -o ChadaClocks
   ./ChadaClocks

## Acknowledgment
Developed for Chada Tech as a junior developer coding skills assessment.
