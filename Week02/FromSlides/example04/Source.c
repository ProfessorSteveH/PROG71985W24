//
// An example #4
//		first entry into input.
//note:
//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
//#define _CRT_SECURE_NO_WARNINGS 
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-Apr-28			initial	
//      1.1       2021-May-15         reviewed/updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

#define MAX_STRING 20

int main(void)
{
	char name[MAX_STRING];

	printf("please enter your name: ");
#ifdef _CRT_SECURE_NO_WARNINGS
	scanf("%s", name);
#else
	scanf_s("%s", name, MAX_STRING);
#endif
	printf("thank you %s, and how old are you? ", name);

	int age;
#ifdef _CRT_SECURE_NO_WARNINGS
	scanf("%d", &age);
#else
	scanf_s("%d", &age);
#endif
	printf("Summary: %s, age %d\n", name, age);
	return 0;
}
