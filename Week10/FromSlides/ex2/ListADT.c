#include "ListADT.h"
#include "item.h"
#include <stdlib.h>

// implementation of list ADT

// PROG71985F23 - Nov 2023 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//		1.3		  2023-Jul-19		reviewed

LIST CreateList()
{
	LIST newlist = { 0 };
	return newlist;
}

bool AddItemToList(PLIST thisList, ITEM thisItem)
{
	PLISTNODE newNode = CreateNode(thisItem);

	if (thisList->list == NULL)  //empty list.  
	{
		SetNodeNextNode(newNode, thisList->list);
		thisList->list = newNode;
	}
	else
	{
		PLISTNODE current = thisList->list;

		while (GetNodeNextNode(current) != NULL)
		{
			current = GetNodeNextNode(current);
		}

		SetNodeNextNode(current, newNode);
	}
	return true;
}

void RemoveItemFromList(PLIST thisList, ITEM itemToBeDeleted)
{
	PLISTNODE current = thisList->list;

	if (CompareItems(current->nodeData, itemToBeDeleted))
	{
		if (GetNodeNextNode(current) != NULL)  //info is in head.  and list is greater than 1 element
			thisList->list = GetNodeNextNode(current);
		else   //i think that this is what should happen if there is only the single element (and we delete it)
			thisList->list = NULL;

		DisposeNode(current);
		return;
	}
	PLISTNODE prev = NULL;  // we will need the previous node for to link over the deleted one
	while (current != NULL && !CompareItems(current->nodeData, itemToBeDeleted))
	{
		prev = current;
		current = GetNodeNextNode(current);
	}

	if (current == NULL)
		return;  //wasn't found - and we hit the end

	SetNodeNextNode(prev, GetNodeNextNode(current));  //unlink the node from the list

	DisposeNode(current);  // Free memory 
}

void Display(LIST thisList)
{
	if (thisList.list == NULL)
		return;
	else
	{
		PLISTNODE current = thisList.list;
		do
		{
			DisplayItem(current->nodeData);
			current = GetNodeNextNode(current);
		} while (current != NULL);
	}
}

void DisposeList(PLIST thisList)
{
	PLISTNODE tmp;

	PLISTNODE current = thisList->list;
	while(current != NULL)
	{
		tmp = current;
		current = GetNodeNextNode(current);
		DisposeNode(tmp);
	} 
}
