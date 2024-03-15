// understanding storage classes - scope
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>
int units = 0;  // this variable has "file scope" (this also includes all the #include content)  also called "translation unit"

void subroutine(int);  //this prototype has "function prototype scope" - all the compiler cares about when handling a 
						//   function prototype are the types (return and params)

int main(void)
{
	int i = 5;     // this variable has block scope
	units = i;    // same

	for (int i = 0; i < 2; i++)
		printf("this i supercedes the previous i for this scope %d\n", i);

	subroutine(0);
}


void subroutine(int a)  // this variable has function scope  (block scope + the declaration line
{
	printf("the variable units is %d\n", units);
	a = units;
}
