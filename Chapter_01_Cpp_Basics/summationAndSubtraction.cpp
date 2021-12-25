#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num01{ };
    std::cin >> num01;
    std::cout << "Enter another integer: ";
    int num02{ };
    std::cin >> num02;
    std::cout << num01 << " + " << num02 << " is " << num01+num02 << "\n";
    std::cout << num01 << " - " << num02 << " is " << num01-num02 << "\n";
    return 0;
}