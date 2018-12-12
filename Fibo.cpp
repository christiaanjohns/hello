//
// Created by christiaanjohns on 12/12/2018.
//

#include "Fibo.h"

int Fibo::Fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }
    return Fib(n-1) + Fib(n-2);
}
