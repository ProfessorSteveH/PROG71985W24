#include "student.h"
#include <stdio.h>

// a main program using student
// prog71985 -  winter24 - steveh - week06
int main(void) {

    STUDENT* bob = CreateStudent("bob", 12345678);
    
    printf("the sizeof(STUDENT) is %d\n", (int)sizeof(STUDENT));

    printf("the sizeof(STUDENT*) is %d\n", (int)sizeof(STUDENT*));


    printf("the students name is %s\n", GetNameFromStudent(bob));

    PrintStudent(bob);
    SaveStudentToDisk(bob, "bob.txt"); //i added this line

    DisposeStudent(bob);
    return 0;
}