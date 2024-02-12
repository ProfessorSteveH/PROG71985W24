// using the 3 default streams:  STDIN, STDOUT, STDERR
//
//
// PROG71985 - F23
// Professor SteveH - Oct 2023
//
// revision history
//		1.0		2020-Jun-28			initial	
//      1.1      2021-Jun-1             reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

#include <stdio.h>

#define MAXSTRLEN                80

int main(void)
{
    char sentence[MAXSTRLEN];
    fputs("Enter a string, please: ", stdout);


    fgets(sentence, MAXSTRLEN, stdin);              //the right way - truncating overflowing input

    fputs("Your string:\n", stdout);
    int outputReturnValue = fputs(sentence, stdout);
    if (outputReturnValue == EOF)
    {
        fputs("ERROR printing to stderr.\n", stderr);
    }

    return 0;
}