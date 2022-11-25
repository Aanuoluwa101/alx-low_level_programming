#include "lists.h"
#include <stdio.h>

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
		{
			printf("[0] (nil)\n");
		}
		else
		{
			if (h->len)
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			else
			{
				h->len = _strlen(h->str);
				printf("[%d] %s\n", h->len, h->str);
			}
		}
		n++;
		h = h->next;
	}

	return (n);
}


/**
 * _strlen - a function that finds the length of a string
 * @s: the string
 *
 * Return: the number of characters in a string
 * excluding null bytes
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
