# C++ Learning
## Functions and Basic Types

## Home work
* If bool only holds (0 or 1) -> only 1 bit is needed. Why does the computer store it as a byte(8 bits)
* A Computer access memory in chunks, this means that it can not access one bit at a time. Since a boolean is one bit they have no choice to increase the amount of bits to 8.
* How come, when you add a boolean to a group of two ints instead of showing 9 bytes, it shows 12 bytes.
```C++
struct MyStruct
{
    int a =0;
    int b=1;
    bool c = 0;
};
```


## 22/11/2022
* Put Arduino  and C++ code in to github 
* Make following colors on arduino
  * Yellow
  * Purple

* write a factorial function for N.
   factortial(2) = 2
   factorial(5) = 120


## 29/11/2022

* Write a function to add 3 variables. add(3, 4, 5) validate correcteness programatically. 
* Write a function to get X to the power of Y. ToPower(X,Y)
* Read about GTest.

## 6/12/2022
### Make a new project:
*Go to file => New => Project => Consle App.

# Udacity_LearningC++
## Introduction To C++
### Intro
![image](https://user-images.githubusercontent.com/115622266/220465619-d116cce2-d2e8-47fb-bd8c-16db6a71209e.png)
### Write and Run Your First C++ Program
* Compile your code with a compiler.
* Run the executable file that the compiler outputs.
* In C++, every program contains a main function which is executed automatically when the program is run. Every part of a C++ program is run directly or indirectly from main, and the most basic program that will compile in C++ is just a main function with nothing else.
```C++
int main()
```
* To compile, use the following command: g++ main.cpp
* To run, use: ./a.out
* Write a main function in the main.cpp file below, and then compile and run the program. The program will not have any output, but it should compile and run without errors.
```C++
int main() {
    return 0;
}
```
### Compiled Languages vs Scripted Language
* Advantages and Disadvantages of Compiled Languages
https://youtu.be/lLdYFFIyc60
* Advantages of a Dynamically Scripted Language
https://youtu.be/DedCGNJAZQY
### C++ Output and Language Basics
* First Code Example:
* The next cell contains the first example of code that might be included in a typical C++ program.
```C++
#include <iostream>
using std::cout;

int main() {
    cout << "Hello!" << "\n";   
}
```
* The #include is a preprocessor command which is executed before the code is compiled. It searches for the iostream header file and pastes its contents into the program. iostream contains the declarations for the input/output stream objects.
* Namespaces are a way in C++ to group identifiers (names) together. They provide context for identifiers to avoid naming collisions. The std namespace is the namespace used for the standard library.
* The using command adds std::cout to the global scope of the program. This way you can use cout in your code instead of having to write std::cout.
* cout is an output stream you will use to send output to the notebook or to a terminal, if you are using one.
* Note that the second two lines in the example end with a semicolon ;. Coding statements end with a semicolon in C++. The #include statement is a preprocessor command, so it doesn't need one.
```C++
cout << "Hello" << "\n";
```
* In this line, the code is using cout to send output to the notebook. The << operator is the stream insertion operator, and it writes what's on the right side of the operator to the left side. So in this case, "Message here" is written to the output stream cout.
### Send Output to the Console
* Previously, you wrote the most basic program that will compile in C++: a simple main(). In this exercise, you will modify that program to print output to the terminal. Don't forget that you can compile and run your program with the following two steps from the command line:
* g++ main.cpp
* ./a.out
* To Complete This Exercise:
* Add code to the main.cpp file below to print "Hello!" using cout.
```C++
#include <iostream>
using std::cout;
using std::endl;

int main() {
  // TODO: Add your code here:
  cout << "Hello" << endl;
}
```
### How to Store Data
* In the next few notebooks, you will learn how to store data in your program, including basic variables with primitive types and vector containers.
### Bjarne Introduces C++ Types
* C++ uses variables, just as in nearly every other programming language. Unlike some other languages, however, in C++ each variable has a fixed type. When a new variable is "declared", or introduced in a program, the program author must (usually) specify the variable type in the declaration.
* In this next video, Bjarne discusses types for C++.
https://youtu.be/2tuTBl584ow
### Primitive Variable Types
* C++ has several "primitive" variable types, which are things like ints (integers), strings, floats, and others. These should be similar to variable types in other programming languages you have used.
* Note: In the cells below, variables will be declared and values assigned. In C++, once a variable has been declared, it can not be redeclared in the same scope. This means that if you try to declare a variable twice in the same function, you will see an error.
```C++
#include <iostream>
#include <string>
using std::cout;

int main() {
    // Declaring and initializing an int variable.
    int a = 9;
    
    // Declaring a string variable without initializing right away.
    std::string b;
    
    // Initializing the string b.
    b = "Here is a string";
    
    cout << a << "\n";
    cout << b << "\n";
}
```
