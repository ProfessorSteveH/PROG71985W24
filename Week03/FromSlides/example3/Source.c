//
// Week 3 - example0
//		example of pre- and post-fix operations
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>
int main(void)
{
    int ultra = 0, super = 0;

    while (super++ < 5)
    {
        //super++;// use the current value, then increment (for next time)
        ++ultra; // increment the value, then use it.
        printf("super = %d, ultra = %d \n", super, ultra);
    }
    printf("%d\n", super);

    return 0;
}