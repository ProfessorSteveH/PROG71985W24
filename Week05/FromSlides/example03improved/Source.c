//returning an array improved

// PROG71985 F23 - Professor SteveH - Oct 2023
//
// 
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>
#include <stdlib.h>  //for malloc and free
#include <string.h> //for memcpy

#define MONTHS 12

void displayArray(int*);

int* generateArray();
void destroyArray(int*);

int main(void)
{
	int* days = generateArray();

	displayArray(days);

	destroyArray(days);

	return 0;
}

void displayArray(int* days)
{
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);

	days[1] = 29;
}

int* generateArray()
{
	//allocate memory on the heap.  this memory is considered taken until explicitly freed (so we need to remember it and take care of it)
	int* days = (int*)malloc(sizeof(int) * MONTHS);

	//there is no mechanism to allocate and initialize in 1 step, so I create a compact representation of the days, then do a copy
	int daysTemplate[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	memcpy(days, daysTemplate, sizeof(int)*MONTHS); //notice the size we choose is the same as the size to create (an important safety consideration)

	//  if you put a breakpoint above, you can  see memory by typing *(&days) in memory address view.
	return days;
}

void destroyArray(int* days)
{
	// we must free it.  if not, this chunk of memory is gone forever (well, until the program terminates)
	free(days);
}
