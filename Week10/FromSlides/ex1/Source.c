#include <stdio.h>
#include "list.h"

// second example of a linked list -- add at end
// steveh - nov 2023

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

int main()
{
	PLISTNODE list = NULL;


	addItem(&list, 99);
	addItem(&list, -1);
	addItem(&list, 3);

	Display(list);

	removeItem(&list, 99);
	removeItem(&list, -1);
	removeItem(&list, 3);

	Display(list);
}
