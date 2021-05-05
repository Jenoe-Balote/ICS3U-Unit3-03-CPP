// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program is the better "Number Guessing Game"

#include <iostream>
#include <random>

int main() {
    // this function runs the "Number Guessing Game"
    int randomNumber;
    int numberGuessed;


    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    std::cout << randomNumber << std::endl;

    // input
    std::cout << "Enter a number between 0-9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // process
    if (numberGuessed == randomNumber) {
        // output
        std::cout << "You guessed correctly!" << std::endl;
    }
    else {
        // output
        std::cout << "Incorrect, the number was " << randomNumber << std::endl;
    }
}
