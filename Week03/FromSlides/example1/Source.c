//
// Week 3 - example1
//		difference between sizeof and size_t
//
// from https://docs.microsoft.com/en-us/cpp/cpp/sizeof-operator?view=vs-2019:
//     The result of the sizeof operator is of type size_t, an integral type defined in 
//     the include file <stddef.h>.This operator allows you to avoid specifying 
//     machine - dependent data sizes in your programs.
//
// PROG71985 - F23
// Professor SteveH - Sept 2023
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

// uses C99 %z modifier -- try %u or %lu if you lack %zd

#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);

    char a = 'A';
    size_t charsize = sizeof(char);
    printf("a = %c, a has %zd bytes; all chars are %zd byte.\n", a, sizeof a, charsize);

    typedef unsigned short age;
    age steveAge = 25;
    size_t agesize = sizeof(age);
    printf("steveAge = %d, steveAge has %zd bytes; all \'age\'s are %zd bytes.\n", steveAge, sizeof steveAge, agesize);


    return 0;
}