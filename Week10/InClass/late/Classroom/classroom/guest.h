#pragma once
#include <stdbool.h>

// guest object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct guest {
    char name[MAXSIZE];
} GUEST;

GUEST CreateGuest(char* name);

void PrintGuest(GUEST g);


bool CompareGuest(GUEST lhs, GUEST rhs);

void SaveGuestToDisk(GUEST g, FILE* fp);

void DisposeGuest(GUEST g);