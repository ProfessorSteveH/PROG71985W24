#pragma once
#include "person.h"
#include <stdio.h>
#include <stdbool.h>

// person interface 
// steveh - prog71985 - winter24 - week09

PERSON CreatePersonFromStudent(STUDENT s) {
	PERSON p;
	p.type = STUD;
	p.kind.student = s;
	return p;
}

PERSON CreatePersonFromProfessor(PROFESSOR Professor) {
	PERSON p;
	p.type = PROF;
	p.kind.professor = Professor;
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
		default:
			fprintf(stderr, "unknown person type\n");
			break;
	}
}

bool SavePersonToDisk(PERSON p, char* filename) {
	FILE* fp = fopen(filename, "w");
	if (fp == NULL) {
		fprintf(stderr, "error opening file for write\n");
		exit(EXIT_FAILURE);
	}



	fclose(fp);
}

bool ReadPersonFromDisk(PERSON p, char* filename) {

}

void DisposePerson(PERSON p) {
//NOTHING TO DO
