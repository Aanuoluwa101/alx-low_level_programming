#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list.
 * @head:  a reference (pointer to pointer) to the head of the list
 * @index: the index of the node to be deleted, starting at 0
 *
 * Return: 1 if i succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *prev;
	listint_t *next_node;

	if (*head == NULL)
		return (-1);
	temp = *head;
	i = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		prev = temp;
		temp = temp->next;
		if (temp->next == NULL)
			break;
		i++;
	}

	if (temp->next == NULL && i == index - 1)
	{
		free(temp);
		prev->next = NULL;
	}
	else if (i < index)
	{
		return (-1);
	}
	else
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
		prev->next = temp;
	}
	return (1);
}


