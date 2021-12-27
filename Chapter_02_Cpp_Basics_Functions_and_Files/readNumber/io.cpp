//
// Created by Jung Woo James Jeong on 27.12.21.
//
#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The answer is " << x << '\n';
}

