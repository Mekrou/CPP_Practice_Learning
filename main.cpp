#include <iostream>

int main()
{
    std::cout << "Enter your favorite number between 1-100: " << std::endl;

    // 'u' means user
    int u_favorite_number;
    std::cin >> u_favorite_number;

    if (u_favorite_number <= 100 && u_favorite_number >= 1) {
        std::cout << "Amazing! " << u_favorite_number << " is my favorite number too!" << std::endl;
    } else {
        std::cout << "Invalid Input! Program exiting... " << std::endl;
    }

    return 0;
}