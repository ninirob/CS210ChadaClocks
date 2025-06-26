# Chada Tech Clocks - CS 210 Project One

## Author
**Nilaris Roberts**

## Project Overview
This project simulates a digital timekeeping system for Chada Tech that simultaneously displays the time in both 12-hour and 24-hour formats. The program was created to solve a real-world problem: providing a dual-format clock interface with intuitive user interaction for time manipulation. It reinforces key object-oriented programming concepts and showcases modular design in C++.

## What I Did Well
- Implemented clean, readable, and modular code using classes and functions to separate concerns.
- Created a user-friendly menu system with input validation to ensure robustness.
- Ensured the clock properly rolls over seconds, minutes, and hours, accurately reflecting real-world behavior.

## Opportunities for Enhancement
- Add unit tests for clock operations to improve code reliability and prevent regressions.
- Expand functionality to allow users to set a custom start time instead of starting at 12:00:00.
- Refactor repetitive time formatting code into reusable helper functions.
- Use smart pointers or RAII principles to further future-proof memory management.

These changes would make the program more secure, testable, and scalable.

## Challenges and Solutions
One of the most challenging aspects was handling the rollover logic between hours, minutes, and seconds—especially ensuring both the 12-hour and 24-hour clocks remained in sync. I used a step-by-step debugging approach in CLion and referred to C++ documentation to fine-tune the conversion logic.

To support continued learning, I’m adding resources like cppreference.com and CLion's built-in debugger to my toolbox.

## Transferable Skills
- **OOP and Encapsulation**: Clear use of classes to manage clock states and operations.
- **Input Validation and Loop Control**: Useful for user-facing applications.
- **Modular Design**: Encourages separation of concerns and reuse of code in larger systems.

## Code Maintainability and Readability
- The program uses clear function and variable names, inline documentation, and consistent indentation.
- The menu is designed for easy updates if features are added later.
- Logic for clock formatting and time adjustments is isolated in its own class, making the code easier to test and extend.

## Features
- Simultaneous display of 12-hour and 24-hour clocks
- Menu options:
  - Add One Hour
  - Add One Minute
  - Add One Second
  - Exit Program
- Formatted clock display using `iomanip`
- Clean exit with a goodbye message

## Technologies Used
- **Language**: C++
- **IDE**: CLion (JetBrains)
- **Standard**: C++20
- **Environment**: macOS (Tested)
- **Formatting**: Based on ISO 8601 standards

## How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/chada-tech-clocks.git
   cd chada-tech-clocks
