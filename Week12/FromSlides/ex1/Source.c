// factor.c -- uses loops and recursion to calculate factorials
// based on listing 9.7 - C Primer Plus 6th
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "factorial.h"														// n!
																			// 3! = 1*2*3 = 6
int main(void)																// 4! = 1*2*3*4 = 24
{
	int num;
	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit):\n");
	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("No negative numbers, please.\n");
		else if (num > 12)
			printf("Keep input under 13.\n");
		else
		{
			printf("loop: %d factorial = %ld\n", num, loopFactorial(num));
			printf("recursion: %d factorial = %ld\n", num, recursiveFactorial(num));
		}
		
		printf("Enter a value in the range 0-12 (q to quit):\n");
	}
	
	printf("Bye.\n");
	return 0;
}
