// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program calculates the area and perimeter of a trapezoid


#include <iostream>

int main() {
    // This program calculates the area and perimeter of a trapezoid
    int a_base;
    int b_base;
    int c_side;
    int d_side;
    int height;
    int area;
    int perimeter;

    // input
    std::cout << "Enter the length of the a base of the trapezoid: ";
    std::cin >> a_base;
    std::cout << "Enter the length of the b base of the trapezoid: ";
    std::cin >> b_base;
    std::cout << "Enter the length of the c side of the trapezoid: ";
    std::cin >> c_side;
    std::cout << "Enter the length of the d side of the trapezoid: ";
    std::cin >> d_side;
    std::cout << "Enter the height of the trapezoid: ";
    std::cin >> height;

    // process
    area = (((a_base + b_base) /2) * height);
    perimeter = (a_base + b_base + c_side + d_side);

    // output
    std::cout << "" << std::endl;
    std::cout << "The area of the trapezoid is " << area << " cm².";
    std::cout << "" << std::endl;
    std::cout << "The perimeter of the trapezoid is " << perimeter << " cm².";
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
