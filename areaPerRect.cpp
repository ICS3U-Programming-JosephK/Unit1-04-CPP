// Copyright (c) 2020 Mr Coxall All rights reserved.
// .
// Created by: Mr Coxall and borrowed by Joseph
// Date: Sep. 16, 2022
// This program calculates the area and perimeter of a rectangle
// With dimensions are 5cm x 3cm


#include <iostream>

int main() {
    std::cout << "If a rectangle has the dimensions:" << std::endl;
    std::cout << "5cm x 3cm" << std::endl;
    // blank line in between to make it more readable
    std::cout << "" << std::endl;
    std::cout << "Area is: " << (5 * 3) << ("cm^2") << std::endl;
    std::cout << "Perimeter is: " << (2 * (5 + 3)) << ("cm") << std::endl;
}
