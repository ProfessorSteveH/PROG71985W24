#include "item.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

// list impl.
// prog71985 - winter24 - steveh - week10

void Add(PLISTNODE* list, ITEM i) {
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (newNode == NULL) {
		fprintf(stderr, "error allocaing memory\n");
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
	if (current != NULL && CompareItem(current->data, i)) {
		*list = current->next;
		free(current);
		return;
	}

	PLISTNODE prev = NULL;
	while (current != NULL && !CompareItem(current->data, i)) {
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return;
	else {
		prev->next = current->next;
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
	} while (current != NULL);
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