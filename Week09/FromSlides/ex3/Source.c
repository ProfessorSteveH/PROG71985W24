#include <stdio.h>
#include <stdlib.h>

// example 4 - manually allocating memory 

// PROG71985F22 - Oct 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//

#define SOMESIZE  10

int main(void)
{
	int array[SOMESIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//this is all good, but what if we don't know the size of the array at compile time?
	// like this:

	int size;
	printf("enter size of array: ");
	scanf_s("%d", &size);
	int* dynArray = (int*)malloc(sizeof(int) * size);  //set aside a piece of memory for ourselves
	if (!dynArray)
	{
		fprintf(stderr, "error allocating mem\n");
		return 1;
	}
	for (int i = 0; i < size; i++)
		dynArray[i] = 5*i;

	for(int i = 0; i<size; i++)
		printf("element #:%d has value %d\n", i, dynArray[i]);

	free(dynArray);		//always remember to free your memory
}
