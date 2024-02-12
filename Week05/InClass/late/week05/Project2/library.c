#include "library.h"
//
// Created by steve on 1/31/2024.
// prog71985 - winter24 - week04
// a simple implementation of some functions
//

int findMaxOf3Ints(int first, int second, int third) {
    //transform
    int max = first;
    if (max < second)
        max = second;
    if (max < third)
        max = third;
    return max;
}

// & => the address of (some variable)
// * => the value at  (some address)
void swap(int* a, int* b) {
    int temp = *a;   // a is an address, so we need to add the value at
    *a = *b;
    *b = temp;
}

// In C, arrays reduce to pointers
bool searchArray(int* collection, int arraySize, int term) {

    for (int i = 0; i < arraySize; i++) {
        //printf("examining %d\n", collection[i]);
        if (collection[i] == term)
            return true;
    }

    return false;
}