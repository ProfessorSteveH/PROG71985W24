#include <stdio.h>

extern int widelyGlobal;	//we have to signal to the compiler that we have a variable defined elsewhere.  

void anotherSubroutine(int i)
{
	printf("widelyGlobal is %d\n", widelyGlobal);				// demonstrates external linkage (the definition and assignment of widelyGlobal is elsewhere)
}


