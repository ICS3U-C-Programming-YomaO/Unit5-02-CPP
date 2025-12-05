// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program calculates the area of a triangle
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <iostream>
#include <stdexcept>
#include <string>

void CalcArea(float base, float height) {
    float area = 0.5 * base * height;
    std::cout << "The area of the triangle is " << area << " cm^2" << std::endl;
}

int main() {
    float base, height;
    std::string baseInput;
    std::string heightInput;

    // display welcome message
    std::cout << "Welcome to the triangle area calculator" << std::endl;

    // Try catch for base
    try {
        // ask user for base
        std::cout << "Enter the base (cm): ";
        std::cin >> baseInput;
        // convert to float
        base = stod(baseInput);
    } catch (...) {
        std::cout << "Enter a valid base!" << std::endl;
        return 0;
    }

    // Try catch for height
    try {
        // ask user for height
        std::cout << "Enter the height (cm): ";
        std::cin >> heightInput;
        // convert string to float
        height = stod(heightInput);
        // catch any exceptions
    } catch (...) {
        std::cout << "Enter a valid height!" << std::endl;
        // end program
        return 0;
    }
    CalcArea(base, height);
}
