#include "item.h"
#include <stdio.h>

// item impl
// prog71985 - week10 - steveh - winter24

ITEM CreateItem(int i) {
	ITEM I = { 0 };
	I.value = i;
	return I;
}

ITEM CopyItem(ITEM src) {
	return CreateItem(src.value);
}

bool CompareItem(ITEM lhs, ITEM rhs) {
	return (lhs.value == rhs.value);
}

void PrintItem(ITEM i) {
	printf("ITEM: %d\n", i.value);
}

void DisposeItem(ITEM i) {
	// nothing
}