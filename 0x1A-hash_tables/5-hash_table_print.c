#include "hash_tables.h"

/**
 * print_list - prints a hash_node_t list
 * @head: the head of the list
 *
 */
void print_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (temp != NULL)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->next != NULL)
			printf(", ");
		temp = temp->next;
	}
}


/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		print_list((ht->array)[i]);
		if (i == (ht->size - 1))
			printf("}");
		printf(", ");
	}
	printf("\n");
}

