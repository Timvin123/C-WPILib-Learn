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
* Listen to videos on udacity and write summary.
