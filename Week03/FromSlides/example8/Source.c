//
// Week 3 - example8
//		for loops
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

void simple(void);
void decrement();
void notSimpleIncrement();
void alphabetIncrement();
void missingOne();
void missingTwo();
void compound();

int main(void)
{
    simple();
    printf("---------------\n");
    decrement();
    printf("---------------\n");
    notSimpleIncrement();
    printf("---------------\n");
    alphabetIncrement();
    printf("---------------\n");
    compound();
    return 0;
}

void simple()
{
    int num;

    printf(" n\tn cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d\t%5d\n", num, num * num * num);
}

void decrement()
{
    int secs;

    for (secs = 5; secs > 0; secs--)
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");
}

void notSimpleIncrement()
{
    int n;        // count by 13s from 2

    for (n = 2; n < 60; n = n + 13)
        printf("%d \n", n);
}

void alphabetIncrement()
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        printf("The ASCII value for %c is %d.\n", ch, ch);
}

void missingOne()
{
    int n, ans=0;

    for (n = 3; ans <= 25; )
        ans = ans * n;

}

void missingTwo()
{
    for (; ; ) //while(true)
        printf("I want some action\n");
}

void compound()
{
    const int FIRST_OZ = 46; 
    const int NEXT_OZ = 20;  
    int ounces, cost;

    printf(" ounces  cost\n");
    for (ounces = 1, cost = FIRST_OZ;        ounces <= 16;         ounces++, cost += NEXT_OZ)
        printf("%5d   $%4.2f\n", ounces, cost / 100.0);
}