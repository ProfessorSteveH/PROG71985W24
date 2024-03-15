#include "item.h"
#include "list.h"
#include <stdio.h>

// linked list main
// prog71985 - week10 - winter24 - steveh

int main(void) {

	PLISTNODE list = NULL;

	Add(&list, CreateItem(5));
	Add(&list, CreateItem(3));
	Add(&list, CreateItem(1));

	Display(list);

	Remove(&list, CreateItem(3));

	Display(list);

	Dispose(&list);

	//ITEM one = CreateItem(1);
	//PrintItem(one);
	//ITEM onePrime = CopyItem(one);

	//if (CompareItem(one, onePrime))
	//	printf("copied and compared ok\n");

	//DisposeItem(one);
	//DisposeItem(onePrime);
	return 0;
}
//$ make valgrind
//gcc -Wall -g -o main  item.c list.c main.c
//valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./main
//==5452== Memcheck, a memory error detector
//==5452== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
//==5452== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
//==5452== Command: ./main
//==5452== 
//ITEM: 1
//ITEM: 3
//ITEM: 5
//ITEM: 1
//ITEM: 5
//==5452== 
//==5452== FILE DESCRIPTORS: 3 open (3 std) at exit.
//==5452== 
//==5452== HEAP SUMMARY:
//==5452==     in use at exit: 0 bytes in 0 blocks
//==5452==   total heap usage: 4 allocs, 4 frees, 1,072 bytes allocated
//==5452== 
//==5452== All heap blocks were freed -- no leaks are possible
//==5452== 
//==5452== For lists of detected and suppressed errors, rerun with: -s
//==5452== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

