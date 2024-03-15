#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"
#include <string.h>

// classroom implementation
// prog71985 - winter24 - steveh - week09

CLASSROOM CreateClassroom(char* Subject) {
	CLASSROOM c;
	for (int i = 0; i < CAPACITY; i++)
		c.seatStatus[i] = EMPTY;
	strncpy(c.subject, Subject, MAXNAME);
	return c;
}

bool AddPersonToClassroom(CLASSROOM* c, PERSON p) {
	//int count = GetCurrentCount(*c);
	//int capacity = GetClassroomCapacity(*c);
	if (GetCurrentCount(*c) >= GetClassroomCapacity(*c))
		return false;

	for (int i = 0; i < CAPACITY; i++)
		if (c->seatStatus[i] == EMPTY) {
			c->people[i] = p;
			c->seatStatus[i] = FILLED;
			return true;
		}
	
	return false;

	// have have potential for scope error
	// return CopyPerson(&(c->people[c->currentCount++]), p);
}

bool RemovePersonFromClassroom(CLASSROOM* c, PERSON p) {
	for (int i = 0; i < GetClassroomCapacity(*c); i++) {
		if (ComparePerson(c->people[i], p)) {
			c->seatStatus[i] = EMPTY;
			return true;
		}
	}
	return false;
}

int GetClassroomCapacity(CLASSROOM c) {
	return CAPACITY;
}

int GetCurrentCount(CLASSROOM c) {
	int count = 0;

	for (int i = 0; i < CAPACITY; i++) {
		if (c.seatStatus[i] == FILLED)
			count++;
	}


	return count;
}

void DisposeClassroom(CLASSROOM c) {
	// nothing to do
}