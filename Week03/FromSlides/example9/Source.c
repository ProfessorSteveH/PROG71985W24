//
// Week 3 - example9
//		using do...while
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
int main(void)
{
    const int SECRET_CODE = 13;
    int code_entered;

    do
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != SECRET_CODE);
    printf("Congratulations! You are cured!\n");

    return 0;
}