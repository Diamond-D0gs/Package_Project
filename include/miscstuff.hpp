#include <iostream>
#include <string>
#include <limits>
#include "package.hpp"

#ifndef MISCSTUFF_H
#define MISCSTUFF_H

template <typename T>
T ValidateUserInputRange(std::string prompt, std::string error, T lower, T upper) { //
    bool valid = false;
    T userInput;
    
    do {
        std::cout << prompt;
        std::cin >> userInput;
        while (std::cin.fail() == 1) { // Keep repeating until a valid input is detected
            std::cin.clear(); // Reset cin state flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear cin buffer
            std::cout << error << std::endl;
            std::cout << prompt;
            std::cin >> userInput; // Asking for input for userInput 
        }
        
        // Checks to make sure user input is within range
        if ((userInput >= lower) && (userInput <= upper)) {
            valid = true;
        }
        else { // Print an error if user input is out of range
            std::cout << error << std::endl;
        }
    } while(valid == false); // if false, will return userInput

    return userInput;
}
Info GenerateInfo();

#endif