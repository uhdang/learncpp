#include <iostream>

int one() {
    // ------ 1 ------
    int x{ 5 };
    std::cout << "x is equal to: " << x << "\n";
    std::cout << "And that's all, folks!\n";
    return 0;
}

int two() {
    std::cout << "Enter a number: ";

    int x{ };
    std::cin >> x;

    std::cout << "You entered " << x << '\n';
    return 0;
}

int three() {
    std::cout << "Enter two numbers separated by a space";

    int x{ };
    int y{ };
    std::cin >> x >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}

int multiplyBy2() {
    std::cout << "Enter an integer: ";
    int x{ };
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2 << "\n";
    return 0;
}

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void printDouble(int value)
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    // ====== 1.5 intro to iostream ======
//    one();
//    // ------ 2 ------
//    two();
//    // ------ 3 ------
//    three()
//
    // ====== 1.11 ======
//    multiplyBy2();
//
    // ====== 2.2 ======
//
//    int x{ getValueFromUser() };
//    int y{ getValueFromUser() };
//
//    std::cout << x << " + " << y << " = " << x + y << '\n';
//    return 0;
//
    // ====== 2.3 ======
    int num { getValueFromUser() };

    printDouble(num);

    return 0;


}