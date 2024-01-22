//
// Week 3 - example4a
//		typecast example, with bonus for rounding
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
    float x = 232.6f;
    float y = 44.9f;

    printf("point (232.6, 44.9) on the screen will be at: %d, %d\n", (int)x, (int)y);
    //point (232.6, 44.9) on the screen will be at: 232, 44
// or
    printf("point (232.6,44.9) on the screen will be at: %d, %d\n", (int)(x + 0.5f), (int)(y + 0.5f));
    //point (232.6,44.9) on the screen will be at: 233, 45

}
