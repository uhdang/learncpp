# 10.1 Arrays (Part 1)

***Fixed array*** is an array where the length is known at compile time. i.e. `int testScore[30]{};`

When accessing elements inside an array, we use ***subscript operator ([])*** i.e. `testScore[3]` for the 4th element in the array.

[Example array program]

```c++
#include <iostream>

int main()
{
    int prime[5]{}; // hold the first 5 prime numbers
    prime[0] = 2; // The first element has index 0
    prime[1] = 3;
    prime[2] = 5;
    prime[3] = 7;
    prime[4] = 11; // The last element has index 4 (array length-1)

    // SAME AS
    int prime[5]{ 2, 3, 5, 7, 11 }; // use initializer list to initialize the fixed array


    std::cout << "The lowest prime number is: " << prime[0] << '\n';
    std::cout << "The sum of the first 5 primes is: " << prime[0] + prime[1] + prime[2] + prime[3] + prime[4] << '\n';

    return 0;
}

// The lowest prime number is: 2
// The sum of the first 5 primes is: 28


```

# 10.2 Arrays (Part II)
