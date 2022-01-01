# 4.1 Introduction to fundamental data types

## Bits, bytes, and memory addressing

- Computers have _random access memory_ (RAM) that is available for programs to use. When a variable is defined, a piece of that memory is set aside for that variable.
- ***bit*** (binary digit): the smallest unit of memory used to be stored in RAM. (0 or 1)
- ***Memory address*** (or _address_): Sequential unit where memory is organized into. Similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location. Each memory address holds 1 byte of data. A ***byte*** is a group of bits that are operated on as a unit. A byte = 8 bits
- Key insight: In C++, we typically work with "byte-sized" chunks of data.
  ![Graphical Representation of Memory Address and Byte](graphical_representation_of_memory_addresses_and_byte.png)

### Data types

When given an object a value, the compiler and CPU take care of encoding your value into the appropriate sequence of bits for the data type declared (i.e. integer), which are then stored in memory as bits. For example, if you assign an integer object the value 65, that value is converted to the sequence of bits ***0100 0001*** and stored in the memory assigned to the object. Reverse of converting back to the value from sequence of bits is also possible by the compiler and CPU.

## Fundamental data types

![Fundamental data types](fundamental_data_types.png)

[Note]

`string` type is not a fundamental type in C++. They are a compound type. (std::string)

# 4.2 Void

# 4.3 Object sizes and the sizeof operator

## Object sizes

Most objects actually take up more than 1 byte of memory. A single object may use 2, 4, 8 or even more consecutive memory addresses. The amount of memory that an object uses is based on its data type.

When accessing some variable x, details of how many bytes an object uses are hidden and only the compiler knows.

There are several reasons it is useful to know how much memory an object uses.

1. The more memory an object uses, the more information it can hold. An object with n bits can hold 2^n unique values. For instance, an 8-bit byte can hold 2^8 (256) different values. An object that uses 2 bytes can hold 2^16 different values (1byte = 8 bits, 2 byte = 16 bits).
2. Computers have a finite amount of free memory. Every time we define an object, a small portion of that free memory is used for as long as the object is in existence. Because modern computers have a lot of memory, this impact is usually negligible. However, for programs that need a large amount of objects or data (e.g. a game that is rendering millions of polygons), the difference between using 1 byte and 8 byte objects can be significant.

## Fundamental data type sizes

![image.png](./assets/image.png)


Best Practice: For maximum compatibility, you shouldn't assume that variables are larger than the specified minimum size.

## The sizeof operator

```
#include <iostream>

int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    return 0;
}
```
