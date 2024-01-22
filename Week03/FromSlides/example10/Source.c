//
// Week 3 - example10
//		nested loops
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
#define ROWS  6
#define CHARS 10
int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)              
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)  
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}