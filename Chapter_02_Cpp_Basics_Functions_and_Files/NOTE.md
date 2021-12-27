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

# 2.8 Naming collisions and an introduction to namespaces

# 2.9 Introduction to the preprocessor

***Preprocessor*** is a separate program that manipulates the text in each code file.

[Directives]

`#include` 
- When you #include a file, the preprocessor replaces the #include directive with the contents of the included file.
- For instance, the preprocessor will replace `#include <iostream>` with the preprocessed content of the file named "iostream"

`#define`
- `#define` directive can be used to create a macro. In C++, a ***macro*** is a rule that defines how input text is converted into replacement output text.

a. function-like macros
b. object-like macros

i.e. - 1
```C++
#include <iostream>

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME;

    return 0;
}

// === The preprocessor converts the above into the following:

int main()
{
    std::cout << "My name is: " << "Alex";

    return 0;
}
```

i.e. - 2. Conditional compilation
```C++
#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
#endif

    return 0;
}
```

# 2.10 Header files
The primary purpose of a header file is to propagate declarations to code files.
An example of transforming multi-files to with-header-files

[BEFORE]
```c++
// add.cpp:
int add(int x, int y)
{
    return x + y;
}

// main.cpp
#include <iostream>

int add(int x, int y); // forward declaration using function prototype

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}
```

[AFTER]
```c++
// add.h:
// 1) We really should have a header guard here, but will omit it for simplicity (we'll cover header guards in the next lesson)

// 2) This is the content of the .h file, which is where the declarations go
int add(int x, int y); // function prototype for add.h -- don't forget the semicolon!


// main.cpp:
#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
    return 0;
}


// add.cpp:
#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.

int add(int x, int y)
{
    return x + y;
}

```

Best practice: Source files should #include their paired header file (if one exists)
i.e. `add.cpp` should `#include "add.h"`

[Header file best practices]

Here are a few more recommendations for creating and using header files.

1. Always include header guards (we’ll cover these next lesson).
2. Do not define variables and functions in header files (global constants are an exception -- we’ll cover these later)
3. Give your header files the same name as the source files they’re associated with (e.g. grades.h is paired with grades.cpp).
4. Each header file should have a specific job, and be as independent as possible. For example, you might put all your declarations related to functionality A in A.h and all your declarations related to functionality B in B.h. That way if you only care about A later, you can just include A.h and not get any of the stuff related to B.
5. Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files
6. Every header you write should compile on its own (it should #include every dependency it needs)
7. Only #include what you need (don’t include everything just because you can).
8. Do not #include .cpp files.

# 2.11 Header guards

* Updating previous example with header guards

```c++
// square.h
#ifndef SQUARE_H
#define SQUARE_H

int getSquareSides()
{
    return 4;
}

#endif

// geometry.h
#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "square.h"

#endif

// main.cpp
#include "square.h"
#include "geometry.h"

int main()
{
    return 0;
}

```

# 2.12 How to design your first program

## Design step 1: Define your goal
- State this in a sentence or two.
- i.e.
  - Allow the user to organize a list of names and associated phone numbers.
  - Generate randomized dungeons that will produce interesting looking caverns.
  - Generate a list of stock recommendations for stocks that have high dividends.
  - Model how long it takes for a ball dropped off a tower to hit the ground.

## Design step 2: Define requirements
- Constraints that your solution needs to abide by (e.g. budget, timeline, space, memory, etc), as well as the capabilities that the program must exhibit in order to meet the users' needs.
- i.e.
  - Phone numbers should be saved, so they can be recalled later. 
  - The randomized dungeon should always contain a way to get from the entrance to an exit.
  - The stock recommendations should leverage historical pricing data.
  - The user should be able to enter the height of the tower.
  - We need a testable version within 7 days.
  - The program should produce results within 10 seconds of the user submitting their request.
  - The program should crash in less than 0.1% of user sessions.


## Deesign step 3: Define your tools, targets, and backup plan
- i.e.
  - Defining what target architecture and/or OS your program will run on.
  - Determining what set of tools you will be using.
  - Determining whether you will write your program alone or as part of a team.
  - Defining your testing/feedback/release strategy.
  - Determining how you will back up your code.

## Design step 4: Break hard problems down into easy problems.
- i.e.
  - Clean the house
    - Vacuum the carpets
    - Clean the bathrooms
      - Scrub the toilet (yuck!)
      - Wash the sink
    - Clean the kitchen
      - Clear the countertops
      - Clean the countertops
      - Scrub the sink
      - Take out the trash

REF: https://www.learncpp.com/cpp-tutorial/how-to-design-your-first-programs/