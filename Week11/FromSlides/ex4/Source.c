//more with dynamic memory
//
// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

/*
steve@linuxDEV:~/cpp/week11$ gcc -o source -g -std=c99 Source.c                                                                 
steve@linuxDEV:~/cpp/week11$ valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./source
==44738== Memcheck, a memory error detector
==44738== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==44738== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==44738== Command: ./source
==44738==
loction was updated
==44738==
==44738== FILE DESCRIPTORS: 3 open at exit.
==44738== Open file descriptor 2: /dev/pts/1
==44738==    <inherited from parent>
==44738==
==44738== Open file descriptor 1: /dev/pts/1
==44738==    <inherited from parent>
==44738==
==44738== Open file descriptor 0: /dev/pts/1
==44738==    <inherited from parent>
==44738==
==44738==
==44738== HEAP SUMMARY:
==44738==     in use at exit: 0 bytes in 0 blocks
==44738==   total heap usage: 3 allocs, 3 frees, 97 bytes allocated
==44738==
==44738== All heap blocks were freed -- no leaks are possible
==44738==
==44738== For counts of detected and suppressed errors, rerun with: -v
==44738== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char myName[] = "Professor SteveH";

	char* ptrMyName = (char*)malloc(strlen(myName)+1);			//allocate new memory
	if (ptrMyName == NULL) 
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	memset(ptrMyName, 0, strlen(myName) + 1);

	char memoryBlock[] = "XXXXXXXXXXXXXXXXXX";												// lets create a  another allocation immediately following orginal.
	char* ptrMemoryBlock = (char*)calloc(strlen(memoryBlock), sizeof(char));       // use calloc... 
	if (ptrMemoryBlock == NULL)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	strncpy(ptrMemoryBlock, memoryBlock, strlen(memoryBlock)); //copy content to memory

	strncpy(ptrMyName, myName, strlen(myName)); //copy content to memory
	ptrMyName[strlen(myName)] = '\0';  //add the trainling \0

	char* copyOfName = ptrMyName;				// lets create a copy of the original name (location)
	//now we wish to expand my name...

	char myNewName[] = "Professor SteveH PhD 0123456789012345678901234567890123456789";
	ptrMyName = (char*)realloc(ptrMyName, strlen(myNewName)+1);
	if (ptrMyName == NULL)
	{
		// if newly sized buffer allocation was ok, the original memory is freed.
		//otherwise we need to free this up here:
		free(copyOfName);

		fprintf(stderr, "error allocating new/increased memory\n");
		exit(1);
	}

	strncpy(ptrMyName, myNewName, strlen(myNewName)); //copy content to memory
	ptrMyName[strlen(myNewName)] = '\0';  //add the trainling \0

	if (copyOfName != ptrMyName)							// depending on how much space is available following original alloc, and space required
		fprintf(stderr, "loction was updated\n");			//  realloc may find a new memory chunk, allocate, then copy existing contents to new spot...

	free(ptrMemoryBlock);
	free(ptrMyName);
	free(copyOfName);			//yikes -> this is going to be an error!
	return 0;
}
