/* binary.c -- prints integer in binary form */
// based on 9.8 from text
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "binary.h"

int main(void)
{
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	
	printf("Done.\n");
	return 0;
}

