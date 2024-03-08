#include "item.h"
#include <stdio.h>
#include <stdbool.h>

// implementation of "item"

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

ITEM CreateItem(int i)
{
	ITEM item;
	item.data = i;
	return item;
}

ITEM CopyItem(ITEM item)
{
	ITEM copy;
	copy.data = item.data;
	return copy;
}

bool CompareItems(ITEM itemA, ITEM itemB)
{
	if (itemA.data == itemB.data)
		return true;
	else
		return false;
}

void DisplayItem(ITEM item)
{
	printf("item data: %d\n", item.data);
}

void DisposeItem(ITEM item)
{
	//free(item); <-- no malloc, no free!
	return;
}
