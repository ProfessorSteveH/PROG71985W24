// understanding storage classes - register variables
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h> 
#include <time.h> 

#define MAX 1000000000

double slowFunction()
{
    volatile double total = 0;
    
    for (double d = 0; d < MAX; d++)    // a regular old double variable
        total = d;

    return total;
}

double fastFunction()
{
    volatile double total = 0;

    for (register double d = 0; d < MAX; d++)   //using (requesting) a register variable
        total = d;

    return total;
}

int main()
{
    clock_t t;

    t = clock();
    slowFunction();
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds 
    printf("slowFunction() took %f seconds to execute \n", time_taken);
 
    t = clock();
    fastFunction();
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC; // in seconds 
    printf("fastFunction() took %f seconds to execute \n", time_taken);
    
    
    return 0;
}
