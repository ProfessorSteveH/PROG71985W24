// reverse.c -- displays a file in reverse order 
//                      and using standard I/O
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
#include <stdlib.h>

#define CONTROL_Z '\032'   /* eof marker in DOS text files */

int main(int argc, char* argv[])
{
    char ch;
    FILE* fp;
    long count, last;

    if (argc != 2)          // ** I set command line parameters in project properties.
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "rb")) == NULL)                        // ** Open as binary!
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }


    fseek(fp, 0L, SEEK_END);        /* go to end of file */
    last = ftell(fp);
    for (count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END); /* go backward      */
        ch = getc(fp);
        if (ch != CONTROL_Z && ch != '\r')  /* MS-DOS files */
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}