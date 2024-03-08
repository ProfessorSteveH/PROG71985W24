#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// student object - implementation
// prog71985 - winter24 - steveh - week06


STUDENT CreateStudent(char* name, int number) {
    STUDENT s;
    strncpy(s.name, name, MAXSIZE);
    s.number = number;
    return s;
}

void PrintStudent(STUDENT s) {
    fprintf(stdout, "STUDENT: %s, %d\n", s.name, s.number);
}

void SaveStudentToDisk(STUDENT s, char* filename) {
    fprintf(fp, "STUDENT: %s, %d\n", s.name, s.number);
}

void DisposeStudent(STUDENT s) {
    // nothing to be done in this implementation
}