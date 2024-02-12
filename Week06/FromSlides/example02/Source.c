// count.c -- using standard I/O
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

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> // exit() prototype

int main(int argc, char* argv[])
{
    int ch;         // place to store each character as read
    FILE* fp;       // "file pointer"
    unsigned long count = 0;

    if (argc != 2)          // ** I set command line parameters in project properties.
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);  // same as putchar(ch);
        count++;
    }

    fclose(fp);
    printf("\nFile %s has %lu characters\n", argv[1], count);

    return 0;
}