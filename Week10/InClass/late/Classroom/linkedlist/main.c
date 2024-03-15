#include "item.h"
#include "list.h"
#include <stdio.h>

// linkedlist main test harness
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
	//	printf("matched!\n");

	//DisposeItem(one);
	//DisposeItem(onePrime);

	return 0;
}