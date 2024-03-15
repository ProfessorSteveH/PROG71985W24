#pragma once
#include <stdio.h>
#include <stdbool.h>

// professor object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct professor {
    char name[MAXSIZE];
    char dept[MAXSIZE];
} PROFESSOR;

PROFESSOR CreateProfessor(char* Name, char* Dept);

void PrintProfessor(PROFESSOR p);

bool CompareProfessor(PROFESSOR lhs, PROFESSOR rhs);

void SaveProfessorToDisk(PROFESSOR p, FILE* fp);

void DisposeProfessor(PROFESSOR p);
