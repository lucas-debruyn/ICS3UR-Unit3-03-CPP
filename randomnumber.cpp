// Copyright(c) 2022 Lucas DeBruyn All rights reserved.
//
// Created by: Lucas DeBruyn
// Created on: October 2022
// ICS3U-Unit3-03.cpp File, random number guess with user input

#include <iostream>
#include <random>

int main() {
    // creating variables
    int randomNumber;
    int userNumber;

    // random generator
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> userNumber;

    // process and output
    if (randomNumber == userNumber) {
        std::cout << "\nYou guessed correctly!";
    } else {
        std::cout << "\nYou guessed incorrectly, the number was "
                  << randomNumber << ".";
    }

    std::cout << "\nDone.";
}
