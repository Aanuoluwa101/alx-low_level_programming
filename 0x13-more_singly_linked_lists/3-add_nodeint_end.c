#include "lists.h"

/**
* add_nodeint_end - a function that adds a new node
* at the end of a listint_t list.
* @head: a reference (pointer to pointer) to the head of the list
* @n: the integer in the node
*
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *dummy;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	dummy = malloc(sizeof(listint_t));
	if (dummy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	dummy = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (dummy->next != NULL)
		dummy = dummy->next;
	dummy->next = new_node;
	return (new_node);
}
