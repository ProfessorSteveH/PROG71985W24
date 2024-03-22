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

bool CompareProfessor(PROFESSOR lhs, PROFESSOR rhs) {
	return (strncmp(lhs.name, rhs.name, MAXNAME) == 0);
}

void SaveProfessorToDiskFile(PROFESSOR p, FILE* fp) {
    fprintf(fp, "PROFESSOR\n");
	fprintf(fp, "%s\n", p.name);
	fprintf(fp, "%s\n", p.dept);
}

PROFESSOR LoadProfessorFromDisk(FILE* fp) {		//fix #6
	char namebuffer[MAXNAME] = { 0 };
	fgets(namebuffer, MAXNAME, fp);

	char deptbuffer[MAXNAME] = { 0 };
	fgets(deptbuffer, MAXNAME, fp);

	return CreateProfessor(namebuffer, deptbuffer);
}

void DisposeProfessor(PROFESSOR p) {
	// nothing to do
}