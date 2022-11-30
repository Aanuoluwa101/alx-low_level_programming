#include "lists.h"
#include <stdio.h>

/**
* listint_len- a function that returns  the number of elements
* in a linked listint list
* @h: the head node of the list
*
* Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
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
