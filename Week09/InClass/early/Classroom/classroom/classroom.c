#define _CRT_SECURE_NO_WARNINGS
#include "classroom.h"
#include <string.h>

// classroom implementation
// prog71985 - winter24 - steveh - week09

CLASSROOM CreateClassroom(char* Subject) {
	CLASSROOM c;
	strncpy(c.subject, Subject, MAXNAME);
	return c;
}

bool AddStudentToClassroom(CLASSROOM c, STUDENT s) {

}

bool RemoveStudentFromClassroom(CLASSROOM c, STUDENT s) {

}

int GetClassroomCapacity(CLASSROOM c) {
	return CAPACITY;
}

int GetCurrentCapacity(CLASSROOM c) {

}

void DisposeClassroom(CLASSROOM c) {
	// nothing to do
}