# 1.1 Statements and the structure of a program

## Statements
- A computer program is a sequence of instructions that tell the computer what to do. 
- A ***statement*** is a type of instruction that causes the program to _perform some action_.
- The smallest independent unit of computation in the C++ language.
- In general, a line that ends in a semicolon is mostly a statement.

[Different Types of statements]
1. Declaration statements
2. Jump statements
3. Expression statements
4. Compound statements
5. Selection statements (conditionals)
6. Iteration statements (loops)
7. Try blocks

## Function
- A collection of statements that executes sequentially.
- Every C++ program must have a special function named ***main***. When the program is run, the statements inside of _main_ are executed in sequential order.

# 1.2 Comments
1. Comments should to describe _what_ the library, program or function does to give the user an idea of how the code is going to accomplish its goal without having to understand what each individual line of code does.
2. _Within_ a library, program, or function, comments can be used to describe _how_ the code is going to accomplish its goal.
3. At the statement level, comments could be used to explain 'Why'

- Best Practice: Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

# 1.3 Introduction to objects and variables

- an ***Object*** is a region of storage(usually memory) that has a value and other associated properties.
- ***variable*** is a named object.
- ***Identifier*** is the name of the object

# 1.4 Variable assignment and initialization

## Initialization

[4 ways to initialize variables]
1. int a; // no initializer
2. int b = 5; // initializer after equal sign - ***Copy initialization***
3. int c(6); // initializer in parenthesis - ***Direct initialization***
4. int d { 7 } // initializer in braces - ***Brace initialization***

Best Practice: Favor initialization using braces whenever possible. i.e. int width { 5 };

## Initialize your variables
int a = 5, b = 6; // copy initialization
int c( 7 ), d( 8 ); // direct initialization
int e { 9 }, f { 10 }; // brace initialization (preferred)

Best Practice: Initialize your variables upon creation

# 1.5 Introduction to iostream: cout, cin, and endl
- refer to 1_5_intro_to_iostream.cpp

Best Practice: Prefer '\n' over std::endl when outputting text to the console.

# 1.6 Uninitialized variables and undefined behavior

## Uninitialized variables
Since there is no automatic initialization, the default value of the variable is whatever (garbage) value happens to already be in that memory location.

## Undefined behavior
- Take care to avoid all situations that result in undefeind behavior such as using unintialized variables

# 1.7 Keywords and naming identifiers

1) Identifier naming rule / best practice: 
  - In general, snake_case OR CamelCase (intercapped)
  - User-defined type (structs, classes, or enumerations): Start with a capital lettera

2) Should avoid naming identifiers starting with an underscore, since they are reserved for OS, library, and/or compiler use.

3) Your identifiers should make clear what the value they are holding means

Examples of good and bad practice

int ccount	        | Bad	    | What does the c before “count” stand for?
int customerCount	| Good	    | Clear what we’re counting
int i	            | Either	| Okay if use is trivial, bad otherwise
int index	        | Either	| Okay if obvious what we’re indexing
int totalScore	    | Either	| Okay if there’s only one thing being scored, otherwise too ambiguous
int _count	        | Bad	    | Do not start names with underscore
int count	        | Either	| Okay if obvious what we’re counting
int data	        | Bad	    | What kind of data?
int time	        | Bad	    | Is this in seconds, minutes, or hours?
int minutesElapsed	| Good	    | Descriptive
int value1, value2	| Either	| Can be hard to differentiate between the two
int numApples	    | Good	    | Descriptive
int monstersKilled	| Good	    | Descriptive
int x, y	        | Either	| Okay if use is trivial, bad otherwise