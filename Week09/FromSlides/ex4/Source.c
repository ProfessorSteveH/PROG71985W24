//  where.c  -- where's the memory?
//  textbook 12.15
// As you can see, static data, including string literals occupies one region, 
// automatic data a second region, and dynamically allocated data a third 
// region (often called a memory heap or free store).

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;
const char * pcg = "String Literal";

int main()
{
	int auto_store = 40;
	char auto_string[] = "Auto char Array";
	int * pi;
	char * pcl;
	pi = (int *) malloc(sizeof(int));
	*pi = 35;
	pcl = (char *) malloc(strlen("Dynamic String") + 1);
	strcpy(pcl, "Dynamic String");
	printf("static_store: %d at %p\n", static_store, &static_store);
	printf("  auto_store: %d at %p\n", auto_store, &auto_store);
	printf("         *pi: %d at %p\n", *pi, pi);
	printf("  %s at %p\n", pcg, pcg);
	printf(" %s at %p\n", auto_string, auto_string);
	printf("  %s at %p\n", pcl, pcl);
	printf("   %s at %p\n", "Quoted String", "Quoted String");
	free(pi);
	free(pcl);
	return 0;
}