//some std string functions
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

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

#define MAXLEN		80
#define MINLEN		3

int main(void)
{ 
	const char fullname[] = "steve he<redacted>e";

	int len = strlen(fullname);
	printf("name length is %d\n", len);

	char longCopy[MAXLEN];
	strcpy(longCopy, fullname);    //source, dest !!
	printf("%s\n", longCopy);

//about to fail:  (the dest doesn't have enough space, and strcpy doesn't care!)
	char shortCopy[MINLEN];
	//strcpy(shortCopy, fullname);    //source, dest !!
	//printf("%s\n", shortCopy);

//fixed:
	strncpy(shortCopy, fullname, MINLEN);    //source, dest, count -> but what about the trailing NULL?
	shortCopy[MINLEN-1] = '\0';     // we need to be sure to add it manually.  (another common gotcha!)
	printf("%s\n", shortCopy);

//---------------

	if (strcmp(longCopy, shortCopy) == 0)
		printf("strcmp: two copies are the same!\n");
	else
		printf("strcmp: two copies are not the same\n");

	if (strncmp(longCopy, shortCopy, MINLEN) == 0)                        // --> don't forget about the \0 in shortCopy[2]
		printf("strncmp: first 3 letters of two copies are the same!\n");
	else
		printf("strncmp: first 3 letters of two copies are not the same\n");

//---------------

	strcat(longCopy, shortCopy);
	printf("strcat: %s\n", longCopy);

	strncat(longCopy, shortCopy, 1);    
	printf("strncat(1): %s\n", longCopy);
}
