#define _CRT_SECURE_NO_WARNINGS
#include "professor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// professor object - implementation
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

PROFESSOR CreateProfessor(char* Name, char* Dept) {
	PROFESSOR p;
	strncpy(p.name, Name, MAXSIZE);
	strncpy(p.dept, Dept, MAXSIZE);
	return p;
}

void PrintProfessor(PROFESSOR p) {
	printf("PROFESSOR: %s, %s\n", p.name, p.dept);
}

void SaveProfessorToDisk(PROFESSOR p, char* filename) {
    fprintf(fp, "PROFESSOR: %s, %s\n", p.name, p.dept);
}

void DisposeProfessor(PROFESSOR p) {
	// nothing
}
