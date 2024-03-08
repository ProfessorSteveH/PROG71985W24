#include "item.h"
#include "listNode.h"
#include "ListADT.h"

#include <stdio.h>

// use of List ADT - with copy/paste of memory-check (valgrind)

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed


/* steve@linuxDEV:~/cpp/ex2$ gcc -g -o Source item.c ListADT.c listNode.c Source.c 
steve@linuxDEV:~/cpp/ex2$ valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./Source
==88621== Memcheck, a memory error detector
==88621== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==88621== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==88621== Command: ./Source
==88621== 
item data: 99
item data: 99
item data: 98
item data: 97
item data: 96
item data: 95
item data: 94
item data: 93
item data: 92
item data: 91
item data: 99
item data: 98
item data: 97
item data: 95
item data: 94
item data: 93
item data: 92
item data: 91
==88621== 
==88621== FILE DESCRIPTORS: 3 open at exit.
==88621== Open file descriptor 2: /dev/pts/1
==88621==    <inherited from parent>
==88621== 
==88621== Open file descriptor 1: /dev/pts/1
==88621==    <inherited from parent>
==88621== 
==88621== Open file descriptor 0: /dev/pts/1
==88621==    <inherited from parent>
==88621== 
==88621== 
==88621== HEAP SUMMARY:
==88621==     in use at exit: 0 bytes in 0 blocks
==88621==   total heap usage: 11 allocs, 11 frees, 1,184 bytes allocated
==88621== 
==88621== All heap blocks were freed -- no leaks are possible
==88621== 
==88621== For counts of detected and suppressed errors, rerun with: -v
==88621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
steve@linuxDEV:~/cpp/ex2$
*/


int main(void)
{
	ITEM testItem = CreateItem(99);
	DisplayItem(testItem);

	PLISTNODE newNode = CreateNode(testItem);

	LIST myList = CreateList();

	if (!AddItemToList(&myList, testItem))
	{
		fprintf(stderr, "failed to add item to list\n");
	}

	for (int i = 98; i > 90; i--)
	{
		if (!AddItemToList(&myList, CreateItem(i)))
		{
			fprintf(stderr, "failed to add item to list\n");
		}
	}

	Display(myList);
	RemoveItemFromList(&myList, CreateItem(96));
	Display(myList);

	DisposeList(&myList);
	DisposeNode(newNode);
	DisposeItem(testItem);
}

