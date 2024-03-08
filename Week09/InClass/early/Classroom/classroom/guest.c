#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// our guest ADT - implementation
// prg71985 - winter24 - steveh - week06


GUEST CreateGuest(char* Name) {
	GUEST g;
	strncpy(g.name, Name, MAXNAME);
	return g;
}

void PrintGuest(GUEST g) {
	printf("GUEST: %s\n", g.name);
}

void SaveGuestToDiskFile(GUEST g, char* filename) {

    fprintf(fp, "GUEST: %s\n", g.name);

}

void DisposeGuest(GUEST g) {
	// nothing
}
