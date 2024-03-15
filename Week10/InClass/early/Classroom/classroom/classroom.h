#pragma once
#include "person.h"
#include <stdbool.h>

// classroom interface
// prog71985 - week09 - steveh - winter24

#define MAXNAME		50
#define CAPACITY	40

typedef enum status {EMPTY = 0, FILLED } STATUS;

typedef struct classroom {
	char subject[MAXNAME];
	STATUS seatStatus[CAPACITY];
	PERSON people[CAPACITY];
} CLASSROOM;

CLASSROOM CreateClassroom(char* Subject);

bool AddPersonToClassroom(CLASSROOM* c, PERSON p);

bool RemovePersonFromClassroom(CLASSROOM* c, PERSON p);

int GetClassroomCapacity(CLASSROOM c);

int GetCurrentCount(CLASSROOM c);

void DisposeClassroom(CLASSROOM c);