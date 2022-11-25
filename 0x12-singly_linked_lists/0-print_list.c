#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - a function that prints
* all the elements of a list_t list.
* @h: the head node of the list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}

	return (n);
}
