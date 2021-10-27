// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Oct 2021
// This program calculates the time to Mars

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the time to Mars
    int SPEED = 299792458;
    double distance;
    double time;

    // input
    std::cout << "The distance to mars is 106340000000 m." << std::endl;
    std::cout << "Enter distance to mars (m): ";
    std::cin >> distance;

    // process
    time = distance / SPEED;

    // output
    std::cout << "" << std::endl;
    std::cout << "If distance is " << distance << " m, it will take light ";
    std::cout << time << " seconds to get there." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
