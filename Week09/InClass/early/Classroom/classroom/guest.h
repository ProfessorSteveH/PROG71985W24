#pragma once

// our guest ADT - interface
// prg71985 - winter24 - steveh - week06

#define MAXNAME 50

typedef struct guest {
    char name[MAXNAME];
} GUEST;

GUEST CreateGuest(char* name);

void PrintGuest(GUEST g);

void SaveGuestToDiskFile(GUEST g, char* filename);

void DisposeGuest(GUEST g);
