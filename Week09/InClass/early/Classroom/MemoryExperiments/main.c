#include "student.h"
#include <stdio.h>
#include <stdlib.h>

// test of student ADT
// prog71985 - winter24 - steveh - weeek06

int main(void) {

    STUDENT* bob = CreateStudent("bob", 12345678);



    char buff[MAXNAME];
    if (!GetNameFromStudent(bob, buff)) {
        fprintf(stderr, "something went wrong\n");
        exit(EXIT_FAILURE);
    }


    printf("the student's name is %s\n", buff);


    PrintStudent(bob);
    SaveStudentToDiskFile(bob, "bob.dat");

    DisposeStudent(bob);
    return 0;
}