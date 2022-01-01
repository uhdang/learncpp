# 4.1 Introduction to fundamental data types

## Bits, bytes, and memory addressing

- Computers have _random access memory_ (RAM) that is available for programs to use. When a variable is defined, a piece of that memory is set aside for that variable.

- ***bit*** (binary digit): the smallest unit of memory used to be stored in RAM. (0 or 1)

- ***Memory address*** (or _address_): Sequential unit where memory is organized into. Similar to how a street address can be used to find a given house on a street, the memory address allows us to find and access the contents of memory at a particular location. Each memory address holds 1 byte of data. A ***byte*** is a group of bits that are operated on as a unit. A byte = 8 bits

- Key insight: In C++, we typically work with "byte-sized" chunks of data.
 ![Graphical Representation of Memory Address and Byte](graphical_representation_of_memory_addresses_and_byte.png)

 ### Data types
 
 When given an object a value, the compiler and CPU take care of encoding your value into the appropriate sequence of bits for the data type declared (i.e. integer), which are then stored in memory as bits. For example, if you assign an integer object the value 65, that value is converted to the sequence of bits ***0100 0001*** and stored in the memory assigned to the object. Reverse of converting back to the value from sequence of bits is also possible by the compiler and CPU.
 
 
 
 # Fundamental data types
 
 ![Fundamental data types](fundamental_data_types.png)



[Note]

`string` type is not a fundamental type in C++. They are a compound type. (std::string)