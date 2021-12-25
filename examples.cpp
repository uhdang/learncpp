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



int main()
{
    // ====== 1.5 intro to iostream ======
//    one();
//    // ------ 2 ------
    two();
//    // ------ 3 ------
//    three()

}