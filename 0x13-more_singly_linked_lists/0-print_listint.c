#include "lists.h"
#include <stdio.h>

/**
* print_listint - a function that prints
* all the elements of a listint_t list.
* @h: the head node of the list
*
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}


