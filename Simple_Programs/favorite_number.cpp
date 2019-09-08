//
// Created by ryan0 on 9/7/2019.
//
// Simple favorite-number program!
//
// How do I call this function in main.cpp? I hope I find out! -Ryan 9/7/2019
//

#include "favorite_number.h"
#include <iostream>

int favorite_number() {

    std::cout << "Enter your favorite number between 1-100: " << std::endl;

    // 'u' stands for user.
    int u_favorite_number;
    std::cin >> u_favorite_number;

    if ( u_favorite_number >= 1 && u_favorite_number <= 100 )
    {
        std::cout << "Amazing! " << u_favorite_number << " is my favorite number too!" << std::endl;
    } else {
        std::cout << "Invalid Input! Program exiting..." << std::endl;
    }

    return 0;
}