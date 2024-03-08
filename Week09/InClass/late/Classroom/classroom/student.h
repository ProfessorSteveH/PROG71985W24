#pragma once

// student object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct student {
    char name[MAXSIZE];
    int number;
} STUDENT;

STUDENT CreateStudent(char* name, int number);

void PrintStudent(STUDENT s);

void SaveStudentToDisk(STUDENT s, char* filename);

void DisposeStudent(STUDENT s);