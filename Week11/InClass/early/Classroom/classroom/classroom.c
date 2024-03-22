#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"
#include "person.h"
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

bool SaveClassroomToDisk(CLASSROOM c, char* filename) {

	FILE* fp = fopen(filename, "w");
	if (fp == NULL) {
		fprintf(stderr, "error opening file for write\n");
		return false;
	}
	else {
		fprintf(fp, "%s\n", c.subject);
		fprintf(fp, "%d\n", GetClassroomCapacity(c));
		fprintf(fp, "%d\n", GetCurrentCount(c));

		for (int i = 0; i < CAPACITY; i++) {
			if (c.seatStatus[i] == FILLED)
				SavePersonToDisk(c.people[i], fp);
		}

		fclose(fp);
		return true;
	}
}

bool LoadClassroomFromDisk(CLASSROOM* c, char* filename) {
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fprintf(stderr, "error opening file for reading\n");
		return false;
	}

	char buffer[MAXNAME] = { 0 };
	fgets(buffer, MAXNAME, fp);
	strncpy(c->subject, buffer, MAXNAME);

	int unused_capacity;
	fscanf(fp, "%d\n", &unused_capacity);

	int person_count;
	fscanf(fp, "%d\n", &person_count);

	// this is the place we need to start on Week12 - this is also the reason I "don't like"
	// the idea of how we set this up...

	for(int i = 0; i < person_count; i++) {
		PERSON newPerson = LoadPersonFromDisk(fp);
		AddPersonToClassroom(c, newPerson);
	}

	fclose(fp);
	return true;
}

void PrintClassroom(CLASSROOM c) {
	printf("name: %s\n", c.subject);
	printf("capacity: %d\n", GetClassroomCapacity(c));
	printf("current count: %d\n", GetCurrentCount(c));

	for (int i = 0; i < CAPACITY; i++) {
		if (c.seatStatus[i] == FILLED)
			PrintPerson(c.people[i]);
	}
}

void DisposeClassroom(CLASSROOM c) {
	// nothing to do
}