#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head:  a reference (pointer to pointer) to the head of the list
 * @idx:the index of the list where the new node should be added.
 * @n: the integer in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	unsigned int len;
	listint_t *temp;
	listint_t *new_node;
	listint_t *next_node;

	len = listint_len(*head);
	if (*head == NULL || idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	i = 0;
	temp = *head;

	if (idx == 0)
	{
		*head = new_node;
		new_node->next = temp;
		return (new_node);
	}
	else if (idx == len)
	{
		return (add_nodeint_end(head, n));
	}
	else
	{
		while (i < idx)
			temp = temp->next;
		next_node = temp;
		temp = new_node;
		new_node->next = next_node;
	}
	return (new_node);
}


/**
* listint_len- a function that returns  the number of elements
* in a linked listint list
* @h: the head node of the list
*
* Return: the number of nodes
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
	return (new_node);
}


