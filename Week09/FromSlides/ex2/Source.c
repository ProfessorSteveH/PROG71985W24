#include <stdio.h>

// example 3  - pointers and structures

// PROG71985F22 - Oct 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//

#define  MAXBUF	60

typedef struct guy
{
	char name[MAXBUF];
	int age;
} GUY;

int main(void)
{
	GUY barney = { "barney", 30 };

	GUY* who = &barney;

	printf("name: %s.  string address: %p\n", who->name, &(who->name));

	GUY otherGuy = barney;  //this is a copy, not an assign (the stored string is a different instance)
	printf("name: %s.  string address: %p\n", otherGuy.name, &(otherGuy.name));  
}
