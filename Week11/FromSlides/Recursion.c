#include <stdio.h>


// factorial

// 4! = 4 * 3 * 2 * 1 = 24

// loop:
// int factorial(int number)
// {
//     int total = 1;
//     for(int i=number; i>0; i--)
//         total *= i;

//     return total;
// }

//recursive
    // base case (typically n = 1)
    // other case
int factorial(int number)
{
    if(number == 1)
        return 1;
        
    return number * factorial(number-1);
}

int main(void)
{
    printf("%d\n", factorial(4));
}

//searching a linked list




