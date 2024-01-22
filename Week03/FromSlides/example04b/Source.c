#include <stdio.h>

//
// Week 3 - example4b
//		some examples of implicit typecasting
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

int main(void)
{

	char c = 'A';
	int n = 65535;
	unsigned int ui = 100000;
	float f = 1.0f;
	double d = 24242424423434;


	n = c;  //upconverting a char (1 byte) to an int (4 bytes): OK
	printf("%d\n", n);

	ui = n;  //upconverting an in to an unsigned int: OK
	printf("%d\n", n);

	f = n;  //increased precision -> int to float:  OK
	printf("%f\n", f);

	c = f; //implicitly convert float to char :OK
	printf("%c\n", c); 

	f = 300.0f;
	c = f; //implicitly convert float to char: Not OK (it outputs, but we have byte overflow here)
	printf("%c\n", c);

	n = d;  //downconvert double to int:  Not OK
	printf("%d\n", n);

	f = 5.654f;
	n = f; //downconvert float to int: Not OK (unless you meant truncation)
	printf("%d\n", n);
}