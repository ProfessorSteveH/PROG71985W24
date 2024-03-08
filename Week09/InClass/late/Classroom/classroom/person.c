#define _CRT_SECURE_NO_WARNINGS
#include "person.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// person implementation
// steveh - prog7195 - winter24 - week09

PERSON CreatePersonFromStudent(STUDENT s) {
	PERSON p;
	p.type = STUD;
	p.kind.student = s;
	return p;
}

PERSON CreatePersonFromProfessor(PROFESSOR professor) {
	PERSON p;
	p.type = PROF;
	p.kind.professor = professor;
	return p;
}

PERSON CreatePersonFromGuest(GUEST g) {
	PERSON p;
	p.type = GST;
	p.kind.guest = g;
	return p;
}

void PrintPerson(PERSON p) {
	switch (p.type) {
	case STUD: PrintStudent(p.kind.student);
		break;
	case PROF: PrintProfessor(p.kind.professor);
		break;
	case GST: PrintGuest(p.kind.guest);
		break;
	default: fprintf(stderr, "unknown person type\n");
		break;
	}
}

bool SavePersonToDisk(PERSON p, char* filename) {
	FILE* fp = fopen(filename, "w");
	if (fp == NULL) {
		fprintf(stderr, "error writing to file\n");
		exit(EXIT_FAILURE);
	}

	switch (p.type) {
	case STUD: SaveStudentToDisk(p.kind.student);
		break;
	case PROF: PrintProfessor(p.kind.professor);
		break;
	case GST: PrintGuest(p.kind.guest);
		break;
	default: fprintf(stderr, "unknown person type\n");
		break;
	}



	fclose(fp);
}
bool LoadPersonFromDisk(PERSON p, char* filename) {

}

void DisposePerson(PERSON p) {
	//nothing to do
}



