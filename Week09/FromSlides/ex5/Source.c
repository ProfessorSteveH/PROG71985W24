
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// example 5  - pointers and structures, revisited!

// PROG71985F22 - Oct 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//


//recall we had this in ex3:
#define  MAXBUF	60
typedef struct guy
{
	char name[MAXBUF];
	int age;
} GUY;

// we can also do this:
typedef struct betterGuy
{
	char* name;
	int age;
} BETTERGUY;
// this has 2 advantages:
//  1) we don't have to have a max size (or waste bytes)
//  2) we aren't using precious stack space for storage

int main(void)
{
	// in ex3, we had a structure that looked like this:
	//  GUY (total length) 64      |_______________name_size60______________________|int_size_4|
	printf("the size of the old struct: %d\n", sizeof(GUY));

	//the size of this new one is:
	//  BETTERGUY (total length) 8      |___ptr_to_name_size_4____|int_size_4|
	printf("the size of the better struct: %d\n", sizeof(BETTERGUY));

	//but lets see how it operates differently...

	BETTERGUY chet = {0};  //initialize the entire struct to zeros

	char newName[] = "BetterGuyName";
	//or
	//char* newName = "BetterGuyName";  //but if you do this, the compiler has already allocated the mem, so we shouldn't free it!

	int newAge = 40;

	//chet.name = newName;
	//or
	chet.name = (char*)malloc(strlen(newName) + 1);   //newName doesnt have a null-termination char)
	if (!chet.name)		// added error check.   if malloc fails, it returns zero
	{
		fprintf(stderr, "error aloocating memory\n");
		return 1;
	}
	strncpy(chet.name, newName, strlen(newName)+1);  // since we zero'ed the entire struct, we dont have to put a null-termination
	chet.age = newAge;

	printf("BetterGuy name: %s, age: %d", chet.name, chet.age);

	// only free the memory we manually/specifically allocate
	free(chet.name);   //always remember the free!
	return 0;
}
