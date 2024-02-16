#include "student.h"
#include <stdio.h>

// test of student ADT
// prog71985 - winter24 - steveh - weeek06

int main(void) {

    STUDENT bob = CreateStudent("bob", 12345678);

    PrintStudent(bob);
    SaveStudentToDiskFile(bob, "bob.dat");

    DisposeStudent(bob);
    return 0;
}