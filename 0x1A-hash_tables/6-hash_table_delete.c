#include "hash_tables_h"

/**
 * free_list - frees a hash_node_t linked list
 * @head: the head of the linked list
 *
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to be deleted
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
		free_list((ht->array)[i]);
	free(ht->array);
	free(ht);
}
