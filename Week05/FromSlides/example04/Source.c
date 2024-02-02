//strings

// PROG71985 F23 - Professor SteveH - Oct 2023
//
// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

int main(void)
{
	const char stringLiteralWithStaticInitialization[] = "this is defined and stored as a constant";
	// const-correctness is a good habit to get into.
	// also, notice i let the compiler calculate the size of the string.

	char misMatchedSize[12] = "hello";
	// both the last char and the unused will be initialized to \0.

	char manualAssignment[] = { 'h', 'e', 'l', 'l', 'o', '\0' };
	// if it do this manually, i must null the last digit

	printf(misMatchedSize);
	misMatchedSize[0] = 'H';
	// elements in strings can be adjusted (unless const)

	char* pointerString = "this string is dynamically allocated/assigned";   //this should be const.

	char x = *(pointerString + 2);      //this is allowed,
	printf("%c\n", x);

	//*(pointerString + 2) = 'I';           //will compile, but not run, because the string is considered const
	printf(pointerString);

	printf("\n");

	pointerString = "new string";      //but this is allowed

	printf(pointerString);
	printf("\n");


	return 0;
}