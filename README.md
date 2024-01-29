This milestone is forfocusing on developing, testing, and validating user input functions in C. The functions handle various scenarios such as input validation, string handling, and formatted output. The milestone is designed to test and ensure the robustness of the input functions through a series of unit tests.

- Files Overview
core.c: Contains the implementation of input and utility functions used throughout the application.
core.h: Header file for core.c, declaring the functions and macros used.
ms1.c: Contains the main function and a series of unit tests for each input function.

- Functionality
Core Functions 
clearInputBuffer(): Clears the standard input buffer.
suspend(): Pauses the execution until the user presses the "enter" key.
inputInt(): Prompts the user for an integer and validates the input.
inputIntPositive(): Ensures the user inputs a positive integer.
inputIntRange(int lower, int upper): Prompts the user for an integer within a specified range.
inputCharOption(const char array[]): Validates a character input against a set of acceptable characters.
inputCString(char* str, int minchar, int maxchar): Prompts for and validates a string based on specified length requirements.
displayFormattedPhone(const char* pnum): Displays a string of digits as a formatted phone number.
