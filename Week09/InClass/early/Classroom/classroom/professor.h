#pragma once

// our professor ADT - interface
// prg71985 - winter24 - steveh - week09

#define MAXNAME 50

typedef struct professor {
    char name[MAXNAME];
    char dept[MAXNAME];
} PROFESSOR;

PROFESSOR CreateProfessor(char* name, char* dept);

void PrintProfessor(PROFESSOR p);

void SaveProfessorToDiskFile(PROFESSOR p, char* filename);

void DisposeProfessor(PROFESSOR p);
