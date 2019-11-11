// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Nov 2019
// This program prints out all the valid RGB values

#include <iostream>

main() {
    // this function prints out all the valid RGB values
    int counter1;
    int counter2;
    int result;


    // process & output
    for (counter1 = 0; counter1 < 10; counter1++) {
        for (counter2 = 0; counter2 < 10; counter2++) {
            result = counter1 * counter2;
            std::cout << counter1 << " x " << counter2 << " = "
                      << result << std::endl;
        }
    }
}
