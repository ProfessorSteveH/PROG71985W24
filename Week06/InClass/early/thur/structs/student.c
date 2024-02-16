#include "student.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// our student ADT - implementation
// prg71985 - winter24 - steveh - week06


STUDENT CreateStudent(char* name, int number) {
    STUDENT s;
    strncpy(s.name, name, MAXNAME);
    s.number = number;
    return s; 
}

void PrintStudent(STUDENT s) {
    fprintf(stdout, "STUDENT: %s, %d\n", s.name, s.number);
}

void SaveStudentToDiskFile(STUDENT s, char* filename) {
    FILE* fp = fopen(filename, "w");
    if(fp == NULL) {
        fprintf(stderr, "error opening file for write\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fp, "STUDENT: %s, %d\n", s.name, s.number); 
    fclose(fp);  
}

void DisposeStudent(STUDENT s) {
    // nothing to be done
}