//
// Week 3 - example7
//		more true and false...
//     truth.c -- what values are true?
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
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);

    return 0;
}