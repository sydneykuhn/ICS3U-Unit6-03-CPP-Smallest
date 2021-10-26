// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program finds the smallest of 10 random numbers

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int findSmallest(std::array<int, N> listOfNumbers) {
    // this function finds the smallest number in a list
    int smallest = listOfNumbers[9];

    for (int loopItem : listOfNumbers) {
        if (loopItem < smallest) {
            smallest = loopItem;
        }
    }

    return smallest;
}

int main() {
    // this function creates 10 random numbers in a list
    std::array<int, 10> listOfNumbers;
    int loopCounter = 0;
    int randomNumber;
    int smallest;
    int smallestNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  // [1, 100]

    // input, process & output
    for (int loopCounter = 0; loopCounter <= 9; loopCounter++) {
        randomNumber = idist(rgen);
        listOfNumbers[loopCounter] = (randomNumber);
        std::cout << "The random number " << loopCounter + 1 << " is : "
            << randomNumber << std::endl;
    }
    smallestNumber = findSmallest(listOfNumbers);
    std::cout << "\n\nThe smallest number is " << smallestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
