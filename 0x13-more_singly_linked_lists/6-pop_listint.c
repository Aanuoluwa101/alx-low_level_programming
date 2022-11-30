#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: the head node's data (n). 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}

