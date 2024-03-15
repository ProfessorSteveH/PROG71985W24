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

bool CompareStudent(STUDENT lhs, STUDENT rhs) {
    return (strncmp(lhs.name, rhs.name, MAXSIZE) == 0);
}

void PrintStudent(STUDENT s) {
    fprintf(stdout, "STUDENT: %s, %d\n", s.name, s.number);
}

void SaveStudentToDisk(STUDENT s, FILE* fp) {
    fprintf(fp, "STUDENT\n");
    fprintf(fp, "%s\n", s.name);
    fprintf(fp, "%d\n", s.number);
}

void DisposeStudent(STUDENT s) {
    // nothing to be done in this implementation
}