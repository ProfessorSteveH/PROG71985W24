// using recursion to search...

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed
//

#include "search.h"

int recursiveSearch(int array[], int lowerBound, int upperBound, int item)
{
    if (upperBound < lowerBound)
        return -1;      // we overlapped...  it ain't there
    if (array[lowerBound] == item)
        return lowerBound;
    if (array[upperBound] == item)
        return upperBound;
    return recursiveSearch(array, ++lowerBound, --upperBound, item);
}

int loopSearch(int array[], int lowerBound, int upperBound, int item)
{
    for (int i = lowerBound; i < upperBound; i++)
    {
        if (array[i] == item)
            return i;
    }
    return -1;  //we got through the entire array with no prior return.  send a -1 to signal not found
}


// many of the internet tutorials/examples for recursive array search used 4 params...  i didn't like that so much:
int recursiveSearch2(int array[], int upperBound, int item)
{
    if (upperBound < 0)
        return -1;
    if (array[upperBound] == item)
        return upperBound;
    return recursiveSearch2(array, --upperBound, item);
}
