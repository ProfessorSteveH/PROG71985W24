#pragma once
#include <stdbool.h>

// our student ADT - interface
// prg71985 - winter24 - steveh - week06

#define MAXNAME 50

typedef struct student {
    char name[MAXNAME];
    int number;
} STUDENT;

STUDENT* CreateStudent(char* name, int number);

bool GetNameFromStudent(STUDENT* s, char* buffer);

void PrintStudent(STUDENT* s);

void SaveStudentToDiskFile(STUDENT* s, char* filename);

void DisposeStudent(STUDENT* s);
