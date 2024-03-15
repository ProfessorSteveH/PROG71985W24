#pragma once
#include <stdio.h>
#include <stdbool.h>

// student object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct student {
    char name[MAXSIZE];
    int number;
} STUDENT;

STUDENT CreateStudent(char* name, int number);

bool CompareStudent(STUDENT lhs, STUDENT rhs);

void PrintStudent(STUDENT s);

void SaveStudentToDisk(STUDENT s, FILE* fp);

void DisposeStudent(STUDENT s);