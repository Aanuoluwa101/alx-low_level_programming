#include "lists.h"

/**
* add_node - a function that adds a new node
* at the beginning of a list_t list.
* @head: a reference (pointer to pointer) to the head of a list
* @str: the string to be copied into the string element of the node
*
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->len = _strlen(new_node->str);
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
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
