#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// guest object - implementation
// prog71985 - winter24 - steveh - week06


GUEST CreateGuest(char* name) {
	GUEST g;
	strncpy(g.name, name, MAXSIZE);
	return g;
}

bool CompareGuest(GUEST lhs, GUEST rhs) {
	return (strncmp(lhs.name, rhs.name, MAXSIZE) == 0);
}

void PrintGuest(GUEST g) {
	printf("GUEST: %s\n", g.name);
}

void SaveGuestToDisk(GUEST g, FILE* fp) {
    fprintf(fp, "GUEST\n");
	fprintf(fp, "%s\n", g.name);
}

void DisposeGuest(GUEST g) {
    //nothing
}