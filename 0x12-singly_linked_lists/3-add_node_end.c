#include "lists.h"

/**
* add_node_end - a function that adds a new node
* at the end of a list_t list.
* @head: Given a reference (pointer to pointer) to the head of the list
* @str: the string to be copied into the string element of the node
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *dummy;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dummy = malloc(sizeof(list_t));
	if (dummy == NULL)
	{
		free(new_node);
		return (NULL);
	}
	dummy = *head;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		free(dummy);
		return (NULL);
	}
	else
	{
		new_node->len = strlen(str);
	}
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
