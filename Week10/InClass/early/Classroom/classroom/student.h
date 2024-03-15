#pragma once
#include <stdio.h>
#include <stdbool.h>

// our student ADT - interface
// prg71985 - winter24 - steveh - week06

#define MAXNAME 50

typedef struct student {
    char name[MAXNAME];
    int number;
} STUDENT;

STUDENT CreateStudent(char* name, int number);

void PrintStudent(STUDENT s);

bool CompareStudent(STUDENT lhs, STUDENT rhs);


void SaveStudentToDiskFile(STUDENT s, FILE* fp);

void DisposeStudent(STUDENT s);
