//
// Created by steve on 1/31/2024.
// simple library of functions
// prog71985 - winter24 - week4
//

#ifndef MAX_OF_LIBRARY_H
#define MAX_OF_LIBRARY_H
#include <stdbool.h>

int findMaxOf3Ints(int first, int second, int third);       //function prototype (or signature)

// & = the address of  ( variable name)
// * = the value at (variable name)
void swap(int* a, int* b);


// arrays are collections of like typed objects, they also sized at compile time (cant be changed)
bool ArraySearch(int[], int);       //general, more likely to be reused

#endif //MAX_OF_LIBRARY_H