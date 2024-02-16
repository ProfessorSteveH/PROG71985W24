#include "a3q1.h"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
// my test harness for 'function under test'
// steveh - prog71985 - winter24 - week 06

#define PRECISION   0.001    

bool mostlyEqual(double a, double b) {
    double difference = fabs(a-b);
    if(difference < PRECISION)
        return true;
    else
        return false;
}

void testRunner(double a, double b, double expected ) {
    double actual = summing(a,b);

    if(mostlyEqual(actual,expected))
        printf("PASS (%0.20lf,%0.20lf) \n",actual, expected);
    else
        printf("FAIL (%0.20lf,%0.20lf) \n",actual, expected);
}

int main(void) {

    //printf("%0.20lf\n", summing(1.0, 2.0));

    testRunner(1.0, 2.0, 3.0);
    testRunner(1.933, 1.066, 3.0);
    return 0;
}