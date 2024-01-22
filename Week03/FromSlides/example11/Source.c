//
// Week 3 - example11
//		nested if statements
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long number;          // number to be checked
    unsigned long divisor;          // potential divisors
    bool isPrime;               // prime flag

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &number) == 1)
    {
        for (divisor = 2, isPrime = true; (divisor * divisor) <= number; divisor++)
        {
            if (number % divisor == 0)
            {
                if ((divisor * divisor) != number)
                    printf("%lu is divisible by %lu and %lu.\n",
                        number, divisor, number / divisor);
                else
                    printf("%lu is divisible by %lu.\n",
                        number, divisor);
                isPrime = false; // number is not prime
            }
        }
        if (isPrime)
            printf("%lu is prime.\n", number);
        printf("Please enter another integer for analysis; ");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");

    return 0;
}