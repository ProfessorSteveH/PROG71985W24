// understanding storage classes - linkage
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include "Source.h"
#include <stdio.h>

static int units;  // this variable has "file scope" (its location outside the {}) and internal linkage (the static keyword) (only this T.U.)
int widelyGlobal;  // this variable has "file scope"(its location outside the {}), but no 'static', so it has external linkage (all T.U.)

int main(void)
{
	int i = 5;     // this variable has block scope, so there is no linkage!
	units = i;    // same

	subroutine(0);
	anotherSubroutine(42);
}

void subroutine(int a)  
{
	printf("the variable units is %d\n", units);
	a = units;
}


