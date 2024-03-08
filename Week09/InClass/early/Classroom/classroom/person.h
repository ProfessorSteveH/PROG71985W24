#pragma once
#include "student.h"
#include "professor.h"
#include "guest.h"

// person interface 
// steveh - prog71985 - winter24 - week09

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

bool SavePersonToDisk(PERSON p, char* filename);

bool ReadPersonFromDisk(PERSON p, char* filename);

void DisposePerson(PERSON p);
