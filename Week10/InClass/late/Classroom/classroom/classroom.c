#include "classroom.h"

// classroom impl
// steveh - week10 - prog71985 - winter24

CLASSROOM CreateClassroom(char* name) {
	CLASSROOM c = { 0 };

	for (int i = 0; i < GetCapacityOfClassroom(c); i++)
		c.seatStatus[i] = EMPTY;

	strncpy(c.name, name, MAXSIZE);
	return c;
}

bool AddPersonToClassroom(CLASSROOM* c, PERSON p) {
	for (int i = 0; i < GetCapacityOfClassroom(*c); i++) {
		if (c->seatStatus[i] == EMPTY) {
			c->people[i] = p;
			c->seatStatus[i] = FILLED;
			return true;
		}
	}

	return false;
}

bool RemovePersonFromClassroom(CLASSROOM* c, PERSON p) {
	for (int i = 0; i < GetCapacityOfClassroom(*c); i++) {
		if (ComparePerson(c->people[i], p)) {
			c->seatStatus[i] = EMPTY;
			return true;
		}
	}
	return false;
}

int GetCapacityOfClassroom(CLASSROOM c) {
	return CAPACITY;
}

int GetCurrentCount(CLASSROOM c) {
	int count = 0;
	for (int i = 0; i < GetCapacityOfClassroom(c); i++)
		if (c.seatStatus[i] == FILLED)
			count++;

	return count;
}

bool SaveClassroomToDisk(CLASSROOM c, char* filename) {

}

CLASSROOM LoadClassroomFromDisk(char* filename) {

}

void DisposeClassroom(CLASSROOM c) {
	//nothing to be done
}