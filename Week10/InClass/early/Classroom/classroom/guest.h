#pragma once
#include <stdio.h>
#include <stdbool.h>
// our guest ADT - interface
// prg71985 - winter24 - steveh - week06

#define MAXNAME 50

typedef struct guest {
    char name[MAXNAME];
} GUEST;

GUEST CreateGuest(char* name);

void PrintGuest(GUEST g);

bool CompareGuest(GUEST lhs, GUEST rhs);

void SaveGuestToDiskFile(GUEST g, FILE* fp);

void DisposeGuest(GUEST g);
