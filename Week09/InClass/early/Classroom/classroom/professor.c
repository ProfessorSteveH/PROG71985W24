#define _CRT_SECURE_NO_WARNINGS
#include "professor.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

PROFESSOR CreateProfessor(char* Name, char* Dept) {
	PROFESSOR p;
	strncpy(p.name, Name, MAXNAME);
	strncpy(p.dept, Dept, MAXNAME);
	return p;
}

void PrintProfessor(PROFESSOR p) {
	printf("PROFESSOR: %s, %s\n", p.name, p.dept);
}

void SaveProfessorToDiskFile(PROFESSOR p, char* filename) {

    fprintf(fp, "PROFESSOR: %s, %s\n", p.name, p.dept);

}

void DisposeProfessor(PROFESSOR p) {
	// nothing to do
}