#include "student.h"
#include "professor.h"
#include "guest.h"
#include "person.h"
#include "classroom.h"
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

    PERSON pBob = CreatePersonFromStudent(bob);
    PERSON pSteve = CreatePersonFromProfessor(steve);
    PERSON pChairDavid = CreatePersonFromGuest(ChairDavid);

    CLASSROOM prog71985 = CreateClassroom("prog principles");

    AddPersonToClassroom(&prog71985, pBob);
    AddPersonToClassroom(&prog71985, pSteve);
    AddPersonToClassroom(&prog71985, pChairDavid);

    //RemovePersonFromClassroom(&prog71985, pSteve);

    SaveClassroomToDisk(prog71985, "classroom.dat");

    CLASSROOM classroom; 
    LoadClassroomFromDisk(&classroom, "classroom.dat");


    PrintClassroom(classroom);

    PrintStudent(bob);
    PrintProfessor(steve);
    PrintGuest(ChairDavid);
    //SaveStudentToDiskFile(bob, "bob.dat");

    DisposeStudent(bob);
    return 0;
}