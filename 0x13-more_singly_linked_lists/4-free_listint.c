#include "lists.h"

/**
 * free_listint - a function that frees a listint list
 * @head: a poiter to the head of the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t **ptr;
	unsigned int len;
	unsigned int i;

	ptr = NULL;
	len = listint_len(head);
	for (i = 0; i < len; i++)
	{
		if (head == NULL)
			break;
		if (head->next == NULL)
		{
			free(head);
		}
		else
		{
			*ptr = head;
			head = head->next;
			free(*ptr);
		}
	}
}


/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: head of the list
 *
 * Return: the number of nodes in the list
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
