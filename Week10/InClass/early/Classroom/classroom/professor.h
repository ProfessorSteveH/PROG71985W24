#pragma once
#include <stdio.h>
#include <stdbool.h>

// our professor ADT - interface
// prg71985 - winter24 - steveh - week09

#define MAXNAME 50

typedef struct professor {
    char name[MAXNAME];
    char dept[MAXNAME];
} PROFESSOR;

PROFESSOR CreateProfessor(char* name, char* dept);

bool CompareProfessor(PROFESSOR lhs, PROFESSOR rhs);

void PrintProfessor(PROFESSOR p);

void SaveProfessorToDiskFile(PROFESSOR p, FILE* fp);

void DisposeProfessor(PROFESSOR p);
