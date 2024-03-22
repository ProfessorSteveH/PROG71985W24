#pragma once
#include <stdbool.h>

// item interface
// week10 - prog71985 - steveh - winter 24

typedef struct item {
	int value;
} ITEM;

ITEM CreateItem(int i);

ITEM CopyItem(ITEM src);

bool CompareItem(ITEM lhs, ITEM rhs);

void PrintItem(ITEM i);

void DisposeItem(ITEM i);
