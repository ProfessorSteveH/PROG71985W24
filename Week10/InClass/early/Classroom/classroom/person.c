#pragma once
#include "person.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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

bool ComparePerson(PERSON lhs, PERSON rhs) {
	if (lhs.type != rhs.type)
		return false;
	else {
		if (lhs.type == STUD)
			return CompareStudent(lhs.kind.student, rhs.kind.student);
		else if (lhs.type == PROF)
			return CompareProfessor(lhs.kind.professor, rhs.kind.professor);
		else if (lhs.type == GST)
			return CompareGuest(lhs.kind.guest, rhs.kind.guest);
		else {
			fprintf(stderr, "invalid person type\n");
			return false;
		}
	}
}

bool SavePersonToDisk(PERSON p, char* filename) {
	FILE* fp = fopen(filename, "w");
	if (fp == NULL) {
		fprintf(stderr, "error opening file for write\n");
		exit(1);
	}

	switch (p.type) {
	case STUD: SaveStudentToDiskFile(p.kind.student, fp);
		break;
	case PROF: SaveProfessorToDiskFile(p.kind.professor, fp);
		break;
	case GST: SaveGuestToDiskFile(p.kind.guest, fp);
		break;
	default:
		fprintf(stderr, "unknown person type\n");
		break;
	}

	fclose(fp);
}

bool ReadPersonFromDisk(PERSON p, char* filename) {

}

void DisposePerson(PERSON p) {
	//NOTHING TO DO
}
