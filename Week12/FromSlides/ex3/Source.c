// using recursion to search...

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include<stdio.h> 
#include "search.h"

int main()
{
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int numElements = sizeof(array) / sizeof(int);

    //recursive --------
    int item = 15; // let's search for 4
    int index = recursiveSearch(array, 0, numElements-1, item);
    if (index != -1)
        printf("(recursiveSearch) item=%d is present at index %d\n", item, index);
    else
        printf("(recursiveSearch) item=%d is not present\n", item);

    //loop --------
    index = loopSearch(array, 0, numElements - 1, item);
    if (index != -1)
        printf("(loopSearch) item=%d is present at index %d\n", item, index);
    else
        printf("(loopSearch) item=%d is not present\n", item);

    //recursive  version 2 --------
    index = recursiveSearch2(array, numElements - 1, item);
    if (index != -1)
        printf("(recursiveSearch2) item=%d is present at index %d\n", item, index);
    else
        printf("(recursiveSearch2) item=%d is not present\n", item);


    return 0;
}
