#include <stdio.h>
#include "library.h"

// write a program that determines the max of 3 ints.  store the
// maximum value in a variable named max.
// steveh - prog71985 - week04 - winter24

void testRunner(int expected, int first, int second, int third) {    //a test case
    int actual = findMaxOf3Ints(first, second, third);

//    if(expected == actual)
//        printf("PASSED\n");
//    else
//        printf("FAIL\n");

    (expected == actual) ? printf("PASSED\n") : printf("FAIL\n");
}

void testRunner2(int a, int b) {
    // 1 2
    int origA = a;
    int origB = b;
// & = the address of  ( variable name)
// * = the value at (variable name)
    swap(&a,&b);
    // 2 1

    if(origA == b && origB == a)
        printf("PASSED\n");
    else
        printf("FAIL\n");
}

void testRunner3(int* bucket, int arraySize, int searchTerm, bool expected) {
    bool actual = ArraySearch(bucket, arraySize, searchTerm);
    if (actual == expected)
        printf("PASS\n");
    else
        printf("FAIL\n");

}

#define ARRAYSIZE 3
int main() {

    //testRunner2(1,2);

    int array[] = { 1,2,3 };
    testRunner3(array, ARRAYSIZE, 2, true);
    testRunner3(array, ARRAYSIZE, 5, false);

//    testRunner(-1, -1, -8, -2);
//    testRunner(3, 1, 2, 3);
//    testRunner(1,1,1,1);
//    testRunner(1, 1, 0, 1);

    return 0;
}


