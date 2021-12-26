# 2.1 Introduction to functions

A ***function*** is a reusable sequence of statements designed to do a particular job.

# 2.2 Function return values

- ref getValueFromUser.cpp

# 2.3 Introduction to function parameters and arguments

# 2.4 Introduction to local scope

# 2.5 Why functions are useful, and how to use them effectively

# 2.6 Forward declarations and definitions

A ***forward declaration*** allows us to tell the compiler about the existence of an identifier _before_ actually defining the identifier.
When writing a forward declaration, a declaration statement called a ***function prototype*** is being used.

i.e.
```C++
#include <iostream>

int add(int x, int y); // forward declaration of add() (using a function prototype)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}
```

# 2.7 Programs with multiple code files
ref: multipleCodeFiles
