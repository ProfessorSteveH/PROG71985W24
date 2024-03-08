#include "list.h"

// implementation of list 

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

void Display(PLISTNODE list)
{
	PLISTNODE current = list;
	if (!current)	// list is empty, don't print!
		return;

	do
	{
		printf("%d ", current->info);
		current = current->next;
	} while (current != NULL);

	printf("\n");
}

// this adds all the new items to the front of the list
void AddItem(PLISTNODE* list, int newInfo)
{
	PLISTNODE new_node = NULL;

	new_node = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (!new_node)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	new_node->info = newInfo;
	new_node->next = *list;

	*list = new_node;
}
void RemoveItem(PLISTNODE* list, int infoToBeDeleted)
{
	PLISTNODE current = *list;

	if (current->info == infoToBeDeleted)
	{
		if (current->next != NULL)  //info is in head.  and list is greater than 1 element
			*list = current->next;
		else   //i think that this is what should happen if there is only the single element (and we delete it)
			*list = NULL;

		free(current);
		return;
	}
	PLISTNODE prev = NULL;  // we will need the previous node for to link over the deleted one
	while (current != NULL && current->info != infoToBeDeleted)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return;  //wasn't found - and we hit the end

	prev->next = current->next; //unlink the node from the list

	free(current);  // Free memory 
}
