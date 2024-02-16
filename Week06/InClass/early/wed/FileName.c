#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// abstract data types (ADT)
// steveh - prog71985 - winter24 - week05 (and 6)

/*
#define MAXNAME		80

	student 
		int studentnumber
		char name[MAXNAME]

	student bob = CreateStudent("bob", 12345678);

	bool EnrollStudentInClass(student bob, class);

	void DropClass(student bob, class);

	DisposeStudent(bob);

*/

// write a program that takes first and last name as command line args and
// prints "hello <first> <second>"

#define MAXSIZE		50
int main(int argc, char** argv) {

	if(argc != 3) {
		printf("Usage: %s <first> <lastname>\n", argv[0]);
		return 1;
	}

	checkforallchars(argv[1]);
	checkforallchars(argv[2]);

	printf("hello %s %s\n", argv[1], argv[2]);
	return 0;
}


/*
	gcc steve hendrikse
	gcc filename.c -o filename.exe

	argc = 4
	 	argv[0] = "gcc"
		argv[1] = "filename.c"
		argv[2] = "-o"
		argv[3] = "filename.exe"
		
	stream
	stdin   -- keybd
	stdout  -- screen 
	stderr  -- screen  (often we will output to an error log)



	scanf("%^$s", input);

*/
	// char input[MAXSIZE];
	// fgets(input, MAXSIZE, stdin);
	// bool valid=true;
	// int i=0;
	// for(int i=0; valid == true && i<strlen(input); i++)
	// 	valid = isalpha(input[i]);

	// if(valid)
	// 	printf("acceptable\n");
	// else
	// 	printf("not acceptable\n");		


// 	return 0;
// }