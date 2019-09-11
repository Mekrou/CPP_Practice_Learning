//
// Created by ryan0 on 9/8/2019.
//
// Insertion and Extraction operators notes.
//

#include <iostream>

int operators()
{

        std::cout << "Hello World" << std::endl;

    // -> Output: Hello World

        std::cout << "Hello";
        std::cout << "World" << std::endl;

    // -> Output: HelloWorld

        std::cout << "Hello world!" << std::endl;
        std::cout << "Hello" << " world!" << std::endl;

    // -> \n is similar to std::endl;
    //    > They differ in the fact that std::endl; flushes the output buffer,
    //      whereas, \n doesn't.

        std::cout << "Hello" << " world!\n";
        std::cout << "Hello\nOut\nThere\n";

    // -> Output: Hello world!
    //            Hello world!
    //            Hello world!
    //            Hello
    //            Out
    //            There

    // -> Variables (Self explanatory)
        int num1;
//        int num2;
//        double num3;

    //  Prompt user:
        std::cout << "Enter an integer: " << std::endl;
    //  Storing user input in variable num1:
        std::cin >> num1;
    //  Displaying what user typed:
        std::cout << "You entered: " << num1 << std::endl;

    return 0;
}

