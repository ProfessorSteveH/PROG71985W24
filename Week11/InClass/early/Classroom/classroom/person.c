#pragma once
#include "person.h"
#include "professor.h"
#include "student.h"
#include "guest.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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

bool SavePersonToDisk(PERSON p, FILE* fp) {
	switch (p.type) {
	case STUD: SaveStudentToDiskFile(p.kind.student, fp);
		break;
	case PROF: SaveProfessorToDiskFile(p.kind.professor, fp);
		break;
	case GST: SaveGuestToDiskFile(p.kind.guest, fp);
		break;
	default:
		fprintf(stderr, "unknown person type\n");
		return false; // fix #5
		break;
	}
	return true;	//fix #4
}

PERSON LoadPersonFromDisk(FILE* fp) {
	char buffer[MAXNAME];

	fgets(buffer, MAXNAME, fp);
	if (strncmp(buffer, "STUDENT", 7) == 0) {
		STUDENT newStudent = LoadStudentFromDisk(fp);
		return CreatePersonFromStudent(newStudent);
	}
	else if (strncmp(buffer, "PROFESSOR", 9) == 0) {
		PROFESSOR newProfessor = LoadProfessorFromDisk(fp);
		return CreatePersonFromProfessor(newProfessor);
	}
	else if (strncmp(buffer, "GUEST", 5) == 0) {
		GUEST newGuest = LoadGuestFromDisk(fp);  //fix #3
		return CreatePersonFromGuest(newGuest);
	}
	else {
		fprintf(stderr, "error in reading person type\n");
		exit(1);
	}
}

void DisposePerson(PERSON p) {
	//NOTHING TO DO
}
