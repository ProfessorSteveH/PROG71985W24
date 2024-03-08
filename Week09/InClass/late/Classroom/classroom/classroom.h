#pragma once
#include "student.h"
#include "professor.h"

// classroom interface
// steveh - prog71985 - winter24 - week09

#define CAPACITY	40


typedef struct classroom {
	char name[MAXSIZE];
	PERSON people[CAPACITY];
} CLASSROOM;