//
// Created by ryan0 on 9/11/2019.
//
//
// Declaring and Initializing variables notes.
//

#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet

int main() {

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

    return 0;
}

