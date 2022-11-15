# C++ Learning
## Functions and Basic Yypes

## Home work
* If bool only holds (0 or 1) -> only 1 bit is needed. Why does the computer store it as a byte(8 bits)
* How come, when you add a boolean to a group of two ints instead of showing 9 bytes, it shows 12 bytes.
```C++
struct MyStruct
{
    int a =0;
    int b=1;
    bool c = 0;
};
```