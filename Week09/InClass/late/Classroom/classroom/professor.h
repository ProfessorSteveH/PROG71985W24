#pragma once

// professor object - interface
// prog71985 - winter24 - steveh - week06
#define MAXSIZE 50

typedef struct professor {
    char name[MAXSIZE];
    char dept[MAXSIZE];
} PROFESSOR;

PROFESSOR CreateProfessor(char* Name, char* Dept);

void PrintProfessor(PROFESSOR p);

void SaveProfessorToDisk(PROFESSOR p, char* filename);

void DisposeProfessor(PROFESSOR p);
