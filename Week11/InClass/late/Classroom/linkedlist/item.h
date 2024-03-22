#pragma once
#include <stdbool.h>

// item interface
// week10 - perog71985 - steveh - winter24

typedef struct item {
	int value;
}ITEM;

ITEM CreateItem(int i);

ITEM CopyItem(ITEM src);

bool CompareItem(ITEM lhs, ITEM rhs);

void PrintItem(ITEM i);

void DisposeItem(ITEM i);