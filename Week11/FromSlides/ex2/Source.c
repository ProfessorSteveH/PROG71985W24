// understanding storage classes - duration
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

void subroutine(int);  

int main(void)
{
	int i = 5;     // this variable will last as long as main() is executing

	for (int i = 0; i < 2; i++)		// this variable will last as long as the for loop is executing
	{
		subroutine(i);
	}

	for (int i = 0; i < 2; i++)		// this variable will last as long as the for loop is executing
	{
		subroutine(i);
	}
	//printf("%d\n", totalCount);
}
void subroutine(int a) 
{
	static int totalCount;							// this variable will have a duration for the entire execution, maintaining its value all the way.  but as line 26
	printf("the passed param is %d and totalCount is %d\n", a, totalCount++);										// shows, the scope is only this function.
}
