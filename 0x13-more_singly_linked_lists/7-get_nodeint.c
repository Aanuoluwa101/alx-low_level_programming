#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of the list. 0 if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	i = 0;

	if (index > listint_len(head) - 1)
		return (0);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
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
