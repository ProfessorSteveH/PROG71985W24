//arrays of char strings.

// PROG71985 F23 - Professor SteveH - Oct 2023
//
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

#define MONTHS	12
#define MONTHNAMEMAXLENGTH   15

int main(void)
{
	//the array way:
	const char arrayMonths[MONTHS][MONTHNAMEMAXLENGTH] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	const char* pointerMonths[MONTHS] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	// put a breakpoint here, then compare/contrast the memory allocations of each
	// pros and cons for each
	printf(arrayMonths[0]);
	printf("\n");
	printf(pointerMonths[1]);
	printf("\n");
	return 0;
}