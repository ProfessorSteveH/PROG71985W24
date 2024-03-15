#pragma once
#include "item.h"
#include <stdio.h>

// list interface
// prog71985 - steveh - week10 - winter24

typedef struct listnode {
	ITEM data;
	struct listnode* next;
}LISTNODE, *PLISTNODE;

void Add(PLISTNODE* list, ITEM i);

void Remove(PLISTNODE* list, ITEM i);

void Display(PLISTNODE list);

void Dispose(PLISTNODE* list);