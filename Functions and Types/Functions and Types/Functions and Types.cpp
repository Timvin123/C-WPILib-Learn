// Functions and Types.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct MyStruct
{
    int a =0;
    int b=1;
    bool c = 0;
};

struct MySecondStruc
{
    int a = 0;
    int b = 1;
    bool c = 0;
    bool d = 0;
    bool e = 0;
    bool f = 0;
    bool g = 0;
};

MyStruct number()
{
    MyStruct a;
    a.a = 5;
    a.b = 7;
    return a;
}

void types()
{
    int num1 = 7;
    int num2 = 3;
    float ans = float(num1) / float(num2);

    std::cout << "The answer is " << ans << std::endl;

    std::cout << "int is: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "float is: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Boolean is: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "Double is: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "character is " << sizeof(char) << "bytes" << std::endl;
}
int main()
{
    MyStruct r = number();
    std::cout << r.a << std::endl;
    std::cout << r.b << std::endl;
    std::cout << "MyStruct is " << sizeof(r) << " bytes" << std::endl;
    std::cout << "MyStruct is " << sizeof(MySecondStruc) << " bytes" << std::endl;
    std::cout << "LongLong is " << sizeof(long long) << " bytes" << std::endl;
}
