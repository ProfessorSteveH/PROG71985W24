// string output
//
//
// PROG71985 - F23
// Professor SteveH - Oct 2023
//
// revision history
//		1.0		2020-Jun-28			initial
//      1.1      2021-June-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

#define DEF "I am a #defined string."

int main(void)
{
    char string1[80] = "An array was initialized to me.";
    const char* pString2 = "A pointer was initialized to me."; // + '\0'

    puts("I'm an argument to puts().");
    puts(DEF);
    puts(string1);
    puts(pString2);
    puts(&string1[5]);
    puts(pString2 + 4);


    char pre[] = "pre"; // +\0
    char middle[] = { 'M', 'I', 'D', 'D', 'L', 'E' };   // by definition, this is not a C-string 
    char post[] = "post"; // + \0

    puts(middle);   

    return 0;
}