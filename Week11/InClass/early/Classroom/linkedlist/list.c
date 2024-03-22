#include "item.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

// list impl
// prog71985 - steveh - winter24 - week10

void Add(PLISTNODE* list, ITEM i) {
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (newNode == NULL) {
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	else {
		newNode->data = CopyItem(i);
		newNode->next = *list;

		*list = newNode;
	}
}

void Remove(PLISTNODE* list, ITEM i) {
	PLISTNODE current = *list;
	if (current != NULL && CompareItem(current->data, i)) {  //first spot matches
		*list = current->next;
		free(current);
		return;
	}
	PLISTNODE prev = NULL;
	while (current != NULL && !CompareItem(current->data, i)) {
		// advance thru list
		prev = current;
		current = current->next;
	}
	//matched or end of list
	if (current == NULL) // end of list, no match
		return;
	else {
		prev->next = current->next;  //matched
		free(current);
	}
}

void Display(PLISTNODE list) {
	PLISTNODE current = list;

	if (current == NULL)
		return;

	do {
		PrintItem(current->data);
		current = current->next;
	}while (current != NULL);
}

void Dispose(PLISTNODE* list) {
	PLISTNODE current = *list;
	while (current != NULL) {
		PLISTNODE tmp = current;
		DisposeItem(current->data);
		current = current->next;
		free(tmp);
	}
}
