#include "lists.h"

/**
 * free_listint2 - a function that frees a listint list
 * @head: a poiter to the head of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
	}
}



