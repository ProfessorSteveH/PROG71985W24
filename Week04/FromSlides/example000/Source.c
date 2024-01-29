//
// Week 4 - example0
//		borrowed from week 3 - refresher on "for loops" and dellivered using
//                                             functions with no params nor return values.
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-June-10			initial
//      1.1     2021-May-27             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

void simple(void);              //ANSI function proto-type declaration    

int main(void)
{
    simple();

    return 0;
}

void simple(void)
{
    int num;

    printf(" n\tn cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d\t%5d\n", num, num * num * num);
}
