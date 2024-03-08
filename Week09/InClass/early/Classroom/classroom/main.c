#include "student.h"
#include "professor.h"
#include "guest.h"
#include <stdio.h>

// test of student ADT
// prog71985 - winter24 - steveh - weeek06

int main(void) {

    STUDENT bob = CreateStudent("bob", 12345678);
    PROFESSOR steve = CreateProfessor("steve", "CS");
    GUEST ChairDavid = CreateGuest("David");
    //CreateAClassroom
    //addstudentstoclassroom
    //createprofessor
    //addprofessortoclassroom
    // createguest
    // addguesttoclassroom
    //printclassroom
    //saveclassroom
    //loadclassroom


    PrintStudent(bob);
    PrintProfessor(steve);
    PrintGuest(ChairDavid);
    SaveStudentToDiskFile(bob, "bob.dat");

    DisposeStudent(bob);
    return 0;
}