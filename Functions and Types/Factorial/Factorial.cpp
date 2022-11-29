
#include <iostream>
#include "Factorial.h"
#include <assert.h>


void Factorial(int n)
{
    int x = 1;
    for (int i = 1; i <= n; ++i) {
        x = x * i;
    };
    std::cout << n << " Factorial is " << x << std::endl;
}

long long Factorial2(int n)
{
    long long x = 1;
    for (int i = 1; i <= n; ++i) {
        x = x * i;
    };

    return x;
}

int main()
{
    assert(Factorial2(2) == 2);
    assert(Factorial2(5) == 120);
    assert(Factorial2(15) == 1307674368000);
}