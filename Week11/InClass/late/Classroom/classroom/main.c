#include "student.h"
#include "professor.h"
#include "guest.h"
#include "person.h"
#include "classroom.h"
#include <stdio.h>

// a main program using student
// prog71985 -  winter24 - steveh - week06
int main(void) {

    STUDENT bob = CreateStudent("bob", 12345678);
    PROFESSOR steve = CreateProfessor("steve", "CS");
    GUEST chair = CreateGuest("ChairDavid");

    PERSON pBob = CreatePersonFromStudent(bob);
    PERSON pSteve = CreatePersonFromProfessor(CreateProfessor("steve", "CS"));

    CLASSROOM prog71985 = CreateClassroom("programming princples");
    AddPersonToClassroom(&prog71985, pBob);

    AddPersonToClassroom(&prog71985, CreatePersonFromProfessor(CreateProfessor("steve", "CS")));

    AddPersonToClassroom(&prog71985, CreatePersonFromGuest(chair));
    SaveClassroomToDisk(prog71985, "classroom.dat");

    CLASSROOM classroom;            // add #2 - testing existing functionality
    LoadClassroomFromDisk(&classroom, "classroom.dat");  // add #3 - testing existing functionality

    PrintClassroom(classroom);      // add #6 - just for seeing
    //PrintStudent(bob);
    //PrintProfessor(steve);
    //PrintGuest(chair);

    DisposeStudent(bob);
    DisposeProfessor(steve);
    DisposeGuest(chair);

    return 0;
}