#include "swaps.h"

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b)   // we take a reference to the variable a and b.  references are marked by '*'
{
	int temp = *a;   //assign a variable (of type int) to the value referenced in  '*a'
	*a = *b;				// value of a assigned to value of b
	*b = temp;			// value of temp assigned to the value referenced by b.
}