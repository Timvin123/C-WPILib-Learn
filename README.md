# Udacity_LearningC++
## Introduction To C++ Language
### Intro
![image](https://user-images.githubusercontent.com/115622266/220465619-d116cce2-d2e8-47fb-bd8c-16db6a71209e.png)
#### Write and Run Your First C++ Program
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
##### Compiled Languages vs Scripted Language
* Advantages and Disadvantages of Compiled Languages
https://youtu.be/lLdYFFIyc60
* Advantages of a Dynamically Scripted Language
https://youtu.be/DedCGNJAZQY
##### C++ Output and Language Basics
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
#### Send Output to the Console
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
#### How to Store Data
* In the next few notebooks, you will learn how to store data in your program, including basic variables with primitive types and vector containers.
##### Bjarne Introduces C++ Types
* C++ uses variables, just as in nearly every other programming language. Unlike some other languages, however, in C++ each variable has a fixed type. When a new variable is "declared", or introduced in a program, the program author must (usually) specify the variable type in the declaration.
* In this next video, Bjarne discusses types for C++.
https://youtu.be/2tuTBl584ow
##### Primitive Variable Types
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
##### Practice declaring an int with the name j in the cell below and assing the value 10 to j.
```C++
#include <iostream>
#include <string>
using std::cout;

int main() {
    // Declare and initialize j here.
    int j = 10;
    cout << j << std::endl;
}
```
#### What is a Vector?
https://youtu.be/AfwagT0JJO0
##### C++ Vectors
###### Vector Containers
####### 1D Vectors
* C++ also has several container types that can be used for storing data. We will start with vectors, as these will be used throughout this lesson, but we will also introduce other container types as needed.
* Vectors are a sequence of elements of a single type, and have useful methods for getting the size, testing if the vector is empty, and adding elements to the vector.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Three ways of declaring and initializing vectors.
    vector<int> v_1{0, 1, 2};
    vector<int> v_2 = {3, 4, 5};
    vector<int> v_3;
    v_3 = {6};
    cout << "Everything worked!" << "\n";
}
```
####### 2D Vectors
* Unfortunately, there isn't a built-in way to print vectors in C++ using cout. You will learn how to access vector elements and you will write your own function to print vectors later. For now, you can see how vectors are created and stored. Below, you can see how to nest vectors to create 2D containers.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Creating a 2D vector.
    vector<vector<int>> v {{1,2}, {3,4}};
    cout << "Great! A 2D vector has been created." << "\n";
}
```
#### C++ Comments
Bjarne talks about comments 
https://youtu.be/KU2GjMbxnXo
* You may have noticed comments in some of the code up until this point. C++ provides two kinds of comments:
```C++
// You can use two forward slashes for single line comments.

/*
For longer comments, you can enclose the text with an opening
slash-star and closing star-slash.
*/ 
```
#### Using Auto
* In your previous code, the type for each variable was explicitly declared. In general, this is not necessary, and the compiler can determine the type based on the value being assigned. To have the type automatically determined, use the auto keyword. You can test this by executing the cell below:
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    auto i = 5;
    auto v_6 = {1, 2, 3};
    cout << "Variables declared and initialized without explicitly stating type!" << "\n";
}
```
* It is helpful to manually declare the type of a variable if you want the variable type to be clear for reader of your code, or if you want to be explicit about the number precision being used; C++ has several number types with different levels of precision, and this precision might not be clear from the value being assigned.

##### Practice
* Practice using auto to declare and initialize a vector v with the value {7, 8, 9, 10}. If you have trouble, click here for help.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    // Declare and initialize v using auto here.
    auto v = {7,8,9,10};
    cout << "yes" << std::endl;

}
```
#### Store a Grid in Your Program
* In order to write the A* search algorithm, you will need a grid or "board" to search through. We'll be working with this board throughout the remaining exercises, and we'll start by storing a hard-coded board in the main function. In later exercises, you will write code to read the board from a file.
##### To Complete This Exercise:
* In the main function, declare a variable board as a vector of vectors of ints: vector<vector<int>>.
Assign this data to the board variable:
```C++
{{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}}
```
* Note: you will need to include the vector library, just as iostream is included. You will also need to use the namespace std::vector if you want to write vector rather than std::vector in your code.
* This exercise will be ungraded, but if you get stuck, you can find the solution in solution.cpp. Finally, if you feel a little crowded in the editor below and need more space to work, you can click the "Expand" button in the lower left corner.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;


int main() {
  // TODO: Declare a "board" variable here, and store
  // the data provided above.
  
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{0, 0, 0, 0, 1, 0}};
  cout << "Hello!" << "\n";
}
```
#### Working with Vectors
##### 1D Vector Access
* To begin, it is helpful to know how to access vector elements of an existing vector. Execute the cells below to see how this can be done:
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    cout << a[0];
    cout << a[1];
    cout << a[2];
    cout << "\n";
}
```
* Great! Now try accessing some of the elements of vector a yourself in the cell bellow:
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    cout << a[0];
    cout << a[2];
    cout << a[10];
    cout << "\n";
}
```
* If you tried to access the elements of a using an out-of-bound index, you might have noticed that there is no error or exception thrown. If you haven't seen this already, try the following code in the cell above to see what happens:
```C++
cout << a[10];
```
* In this case, the behavior is undefined, so you can not depend on a certain value to be returned. Be careful about this! In a later lesson where you will learn about exceptions, we will discuss other ways to access vector elements that don't fail silently with out-of-range indices.
##### 2D Vector Access
* In the previous exercise, you stored a 2D vector - a vector<vector<int>>. The syntax for accessing elements of a 2D vector is very similar to accessing in a 1D vector. In the second cell below, try accessing an element of b. If you get stuck, click the solution button for help.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    cout << b[2][3];
    cout << "\n";
}
```
#### Getting a Vector's Length
##### 1D Vector Length
* One method of a vector object that will be useful in the next code exercise is the .size() method. This returns the length of the vector. Execute the cell below to see how this can be used:
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    
    // Print the length of vector a to the console.
    cout << a.size() << "\n";
}
```
##### 2D Vector Length
* For the vector<vector<int>> b defined above, try to get the size of one of the inner vectors - this should be 4. If you have trouble, click the button below for some help.
```C++
#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {

    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    // Print the length of an inner vector of b here.
    cout << b[1].size();
    cout << "\n";

}
```
#### For Loops
* Just as in other languages you've worked with, C++ has both for loops and while loops. You will learn about for loops in the notebook below, and you will see while loops later in the course.
##### For Loop with an Index Variable
*A simple for loop using an index variable has the following syntax. Click the button below for an explanation of the different parts.
```C++
#include <iostream>
using std::cout;

int main() {
    for (int i=0; i < 5; i++) {
      cout << i << "\n";
    }
}
```
##### The Increment Operator
*If you haven't seen the ++ operator before, this is the post-increment operator, and it is where the ++ in the name "C++" comes from. The operator increments the value of i.
*There is also a pre-increment operator which is used before a variable, as well as pre and post decrement operators: --. The difference between pre and post lies in what value is returned by the operator when it is used.
*You will only use the post-increment operator i++ for now, but if you are curious, click below for an explanation of the code:
```C++
#include <iostream>
using std::cout;

int main() {
    auto i = 1;

    // Post-increment assigns i to c and then increments i.
    auto c = i++;

    cout << "Post-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Reset i to 1.
    i = 1;

    // Pre-increment increments i, then assigns to c.
    c = ++i;

    cout << "Pre-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Decrement i;
    i--;
    cout << "Decrement example:" << "\n";
    cout << "The value of i is: " << i << "\n";
}
```
##### Practice
*Before you learn how to write a for loop using an iterator, practice writing a for loop that prints values from -3 through 10 in the cell below. Don't forget to assign an initial value (like 0) to your index variable!
```C++
#include <iostream>
using std::cout;

int main() {
    // Add your code here.
    for (int i = -3; i <= 10; ++i)
        cout << i << std::endl;
}
```
#### For Loop with a Container
*C++ offers several ways to iterate over containers. One way is to use an index-based loop as above. Another way is using a "range-based loop", which you will see frequently in the rest of this course. See the following code for an example of how this works:
```C++
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<int> a {1, 2, 3, 4, 5};
    for (int i: a) {
        cout << i << "\n";
    }
}
```
##### Challenge
*In the next cell, try to write a double range-based for loop that prints all of the entries of the 2D vector b. If you get stuck, click on the solution button for an explanation.
```C++
#include <iostream>
#include <vector>
using std::cout;
using std::vector;

int main() {
    // Add your code here.
    vector<vector<int>> b {{1, 2},
                           {3, 4},
                           {5, 6}};

    // Write your double loop here.
    for (auto i: b){
        for (int x : i)
            cout << x << "\n";
    }
}
```
