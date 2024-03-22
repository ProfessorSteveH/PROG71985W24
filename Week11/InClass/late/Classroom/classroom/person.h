#pragma once
#include "guest.h"
#include "student.h"
#include "professor.h"
#include <stdbool.h>


// person interface
// steveh - prog7195 - winter24 - week09

//private
typedef union personKind {
	STUDENT student;
	PROFESSOR professor;
	GUEST guest;
} PERSONKIND;

// mostly private 
typedef enum type {STUD, PROF, GST} TYPE;

//public
typedef struct person {
	TYPE type;
	PERSONKIND kind;
} PERSON;

PERSON CreatePersonFromStudent(STUDENT s);
PERSON CreatePersonFromProfessor(PROFESSOR p);
PERSON CreatePersonFromGuest(GUEST g);

void PrintPerson(PERSON p);

bool ComparePerson(PERSON lhs, PERSON rhs);

bool SavePersonToDisk(PERSON p, FILE* fp);
PERSON LoadPersonFromDisk(FILE* fp);

void DisposePerson(PERSON p);



