#include "lists.h"
#include <stdio.h>

/**
* list_len- a function that returns  the number of elements
* in a linked list
* @h: the head node of the list
*
* Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
