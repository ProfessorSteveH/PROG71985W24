#include "student.h"
#include "professor.h"
#include "guest.h"
#include <stdio.h>

// a main program using student
// prog71985 -  winter24 - steveh - week06
int main(void) {

    //CreateClassroom
    //AddSTudentsToClassroom()
    //RemoveStudentFromClassroom
    //CreateProfessor
    //AddProfessorToClassroom()
    //SaveClassroomToDisk
    //LoadClassroomFromDisk
    //PrintClassroom
    //CreateGuest
    //AddGuestToClassroom
    //CreateTeacherAssistant
    //AddTeacherAssistantToClassroom


    STUDENT bob = CreateStudent("bob", 12345678);
    PROFESSOR steve = CreateProfessor("steve", "CS");
    GUEST chair = CreateGuest("ChairDavid");

    PrintStudent(bob);
    PrintProfessor(steve);
    PrintGuest(chair);

    DisposeStudent(bob);
    DisposeProfessor(steve);
    DisposeGuest(chair);

    return 0;
}