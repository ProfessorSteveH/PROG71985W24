#pragma once

// student object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct student {
    char name[MAXSIZE];
    int number;
} STUDENT;

STUDENT* CreateStudent(char* name, int number);

/// <summary>
/// gets name from student adt
/// </summary>
/// <param name="s">the preexisting student object</param>
/// <returns>the name element</returns>
char* GetNameFromStudent(STUDENT* s);

//bool SetNameInStudent(STUDENT* s, char* name);

void PrintStudent(STUDENT* s);

void SaveStudentToDisk(STUDENT* s, char* filename);

void DisposeStudent(STUDENT* s);