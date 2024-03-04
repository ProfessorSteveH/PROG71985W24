#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// example 6  - arrays of structure pointers

// PROG71985F22 - Oct 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//

#define ARRAYSIZE		5

// from earlier:
#define  MAXBUF	60
typedef struct guy
{
	char name[MAXBUF];
	int age;
} GUY, *PGUY;	//new notation here:   we are creating a typedef called PGUY that has type "pointer to GUY"


int main(void)
{
	PGUY  pGuys[ARRAYSIZE] = { 0 };	//if you look at this array in "Locals" you'll see it go from random to all 0x00
															
	printf("size of array: %d\n", sizeof(pGuys));	// this will be size 20 - tells you important things about memory

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		pGuys[i] = (PGUY)malloc(sizeof(GUY));
		if (!pGuys[i])
		{
			fprintf(stderr, "error allocating memory\n");
			return 1;
		}
		memset(pGuys[i], 0, sizeof(GUY));

		char nameField[] = "guy_name_guy_name";
		strncpy(pGuys[i]->name, nameField, strlen(nameField));
		pGuys[i]->age = i;
	}

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		printf("%d -> %s\n", pGuys[i]->age, pGuys[i]->name);
	}

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		free(pGuys[i]);
	}

	return 0;
}
