// recursion
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

// this content is based on textbook example

// "Recursion is a sometimes tricky, sometimes convenient tool. It?s tricky to get recursion to end because a 
// function that calls itself tends to do so indefinitely unless the programming includes a conditional test to 
// terminate recursion. Recursion often can be used where loops can be used. Sometimes the loop solution is 
// more obvious; sometimes the recursive solution is more obvious. Recursive solutions tend to be more 
// elegant and less efficient than loop solutions."  C Primer Plus 6th, Stephen Prata

#include <stdio.h>

void up_and_down(int);

int main(void)
{
	up_and_down(1);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d: n location %p\n", n, &n);   // down the stack, function call by function call
	if (n < 4)						// n will be private for every call to up_and_down
		up_and_down(n+1);
	printf("LEVEL %d: n location %p\n", n, &n); // back up the stack (on the return side)
}

