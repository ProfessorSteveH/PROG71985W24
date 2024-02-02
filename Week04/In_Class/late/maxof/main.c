#include <stdio.h>
#include "library.h"
// write a program that determines the max of 3 ints.  store the
// maximum value in a variable named max.
// steveh - prog71985 - week04 - winter24

// 1, 2, 3, 3
// -1,-1,-1, -1

void testRunner(int expected, int first, int second, int third) {
    // unit test case
    int actual = findMaxOf3Ints(first, second, third);
//    if(expected == actual)
//        printf("PASS\n");
//    else
//        printf("FAIL\n");

    (expected == actual) ? printf("PASS\n") : printf("FAIL\n");
}

void testRunner2(int a, int b) {
    // unit test case
    int origB = b;
    int origA = a;

// & => the address of (some variable)
// * => the value at  (some address)
    swap(&a,&b); //throw

    if( a == origB && b == origA )
        printf("PASS\n");
    else
        printf("FAIL\n");
}

int main() {

    testRunner2(1,2);
//    testRunner(-1, -2, -8, -1);
//    testRunner(8, 0, -1, 8);
//    testRunner(1, 1, 1, 1);

    return 0;
}


