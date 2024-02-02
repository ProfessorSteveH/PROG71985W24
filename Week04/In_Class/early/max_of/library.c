//
// Created by steve on 1/31/2024.
// prog71985 - winter24 - week04
//

int findMaxOf3Ints(int first, int second, int third) {
    int max = first;
    if (max < second)
        max = second;
    if (max < third)
        max = third;

    return max;
}

// & = the address of  ( variable name)
// * = the value at (variable name)
void swap(int* a, int* b) {
    int temp = *a;  //a is an int-pointer, which is an address which is just a location
    *a = *b;
    *b = temp;
}
