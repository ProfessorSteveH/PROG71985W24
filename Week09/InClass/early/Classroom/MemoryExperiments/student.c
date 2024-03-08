#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// our student ADT - implementation
// prg71985 - winter24 - steveh - week06


STUDENT* CreateStudent(char* name, int number) {
    STUDENT* s = (STUDENT*)malloc(sizeof(STUDENT));
    if (s == NULL) {
        fprintf(stderr, "cannot allocate memory\n");
        exit(1);
    }
    strncpy(s->name, name, MAXNAME);
    s->number = number;
    return s; 
}

bool GetNameFromStudent(STUDENT* s, char* buffer) {
    strncpy(buffer, s->name, MAXNAME);
    return true;
}

void PrintStudent(STUDENT* s) {
    fprintf(stdout, "STUDENT: %s, %d\n", s->name, s->number);
}

void SaveStudentToDiskFile(STUDENT* s, char* filename) {
    FILE* fp = fopen(filename, "w");
    if(fp == NULL) {
        fprintf(stderr, "error opening file for write\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "STUDENT: %s, %d\n", s->name, s->number); 
    fclose(fp);  
}

void DisposeStudent(STUDENT* s) {
    free(s);
}