#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 *@head: pointer to the head of the list
 *
 * Return: the sum calculated, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

