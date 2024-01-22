//
// Week 3 - example6
//		true and false
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
    int true_val, false_val;

    true_val = (10 > 2);                    // true
    false_val = (10 == 2);                // false
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}