#include <iostream>

int a_uninitializedValueLogging()
{
    int x; // this variable is uninitialized because we haven't given it a value

    std::cout << x; // who knows what we'll get, because x is uninitialized
    return 0;
}

int doNothing(int&)
{

}




// NOTE functions are ordered
int main()
{
//    a_uninitializedValueLogging();

    // define an integer variable named x
    int x; // this variable is uninitialized

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x;

    return 0;
}