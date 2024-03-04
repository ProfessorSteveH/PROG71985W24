#include <stdio.h>

// example 2  - pointers and arrays

// PROG71985F22 - Oct 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed//

void functionTakesIntArray(int[], int);
void functionTakesIntPtr(int*, int);
void functionTakes2IntPtr(int*, int*);

int main(void)
{
	int intArray[] = { 5,6,7 };

	int* intPtrArray = &intArray;

	printf("%d %d\n", intArray[0], *intPtrArray);  // * == the value at (in this case the memory address of intArray

	if (*(intPtrArray + 1) == intArray[1])
		printf("add 1 to a point and you increment 1 storage unit, thus ptr+1 == array[++i]\n");

	int numElements = sizeof(intArray) / sizeof(int);
	functionTakesIntArray(intArray, numElements);
	functionTakesIntPtr(intPtrArray, numElements);
	functionTakes2IntPtr(intPtrArray, intPtrArray + numElements);
}

void functionTakesIntArray(int arr[], int elements)
{
	for (int i = 0; i < elements; i++)
		printf("%d\n", arr[i]);

}

void functionTakesIntPtr(int* arr, int elements)
{
	for (int i = 0; i < elements; i++)
		printf("%d\n", arr[i]);

}

void functionTakes2IntPtr(int* start, int* end)
{
	while (start < end)
	{
		printf("%d\n", *(start++));
	}
}
