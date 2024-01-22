#include <stdio.h>
#include <stdbool.h>  // <---- take a look at this file (right click then Go to stdbool.h)

//
// Week 3 - example7
//		more true and false...
//    
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

int main(void)
{
    _Bool n = 1;  // _Bool is an unsigned int, value can be 0 or 1.   (this is good, but not great)



    if (n)
        printf("n is true\n");
    else
        printf("n is false\n");

    bool m = false;  //this is great.
    if (m)
        printf("m is true\n");
    else
        printf("m is false\n");


    return 0;
}
