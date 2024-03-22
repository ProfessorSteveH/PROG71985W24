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

bool CompareGuest(GUEST lhs, GUEST rhs) {
	return (strncmp(lhs.name, rhs.name, MAXNAME) == 0);
}

void SaveGuestToDiskFile(GUEST g, FILE* fp) {
    fprintf(fp, "GUEST\n");
	fprintf(fp, "%s\n", g.name);
}

GUEST LoadGuestFromDisk(FILE* fp) {		//fix #2
	char buffer[MAXNAME] = { 0 };
	fgets(buffer, MAXNAME, fp);
	return CreateGuest(buffer);
}

void DisposeGuest(GUEST g) {
	// nothing
}
