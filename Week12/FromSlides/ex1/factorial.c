// two implementations of factorial
// based on listing 9.7 - C Primer Plus 6th
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include "factorial.h"

long loopFactorial(int n)  //loop based version of factorial
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;
	return ans;
}

long recursiveFactorial(int n) //recursive version of factorial
{
	long ans;
	if (n > 0)
		ans = n * recursiveFactorial(n - 1);
	else
		ans = 1;
	return ans;
}

// 4! = 4*3*2*1 <hit 0 return>
