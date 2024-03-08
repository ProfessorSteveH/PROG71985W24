#include <stdio.h>
#include "list.h"

// first use/example of a linked list.

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

int main()
{
	PLISTNODE list = NULL;


	AddItem(&list, 99);
	AddItem(&list, -1);
	AddItem(&list, 3);

	Display(list);

	RemoveItem(&list, 0);
	RemoveItem(&list, -1);
	RemoveItem(&list, 3);

	Display(list);
}

