#pragma once
#include "person.h"

// classroom interface
// steveh - prog71985 - winter24 - week09

#define CAPACITY	40

typedef enum status { EMPTY = 0, FILLED } STATUS;

typedef struct classroom {
	char name[MAXSIZE];
	STATUS seatStatus[CAPACITY];
	PERSON people[CAPACITY];
} CLASSROOM;

CLASSROOM CreateClassroom(char* name);

bool AddPersonToClassroom(CLASSROOM* c, PERSON p);

bool RemovePersonFromClassroom(CLASSROOM* c, PERSON p);

int GetCapacityOfClassroom(CLASSROOM c);
int GetCurrentCount(CLASSROOM c);

bool SaveClassroomToDisk(CLASSROOM c, char* filename);

bool LoadClassroomFromDisk(CLASSROOM*c, char* filename);

void PrintClassroom(CLASSROOM c);		// add #4 - just useful for testing

void DisposeClassroom(CLASSROOM c);