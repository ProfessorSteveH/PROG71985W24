#pragma once

#include "maths.h"

double power(double n, int p)  // function definition
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;

    return pow;                // return the value of pow
}

double sqrt(double d) //wrong. (but that is for next video)
{
    return d;
}