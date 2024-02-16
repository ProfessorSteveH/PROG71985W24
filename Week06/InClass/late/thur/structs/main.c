#include "student.h"
#include <stdio.h>

// a main program using student
// prog71985 -  winter24 - steveh - week06
int main(void) {

    STUDENT bob = CreateStudent("bob", 12345678);
    
    PrintStudent(bob);

    DisposeStudent(bob);
    return 0;
}