// command line args
// from  repeat.c -- main() with arguments 

// PROG71985 F23 - Professor SteveH - Oct 2023
//
// borrowed from textbook


#include <stdio.h>                                      //argc = the number of arguments
int main(int argc, char* argv[])                      // argv[] = array of char pointers  to the arguments.
{
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    printf("the name of the command is argv[0]:  %s\n", argv[0]);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    return 0;
}