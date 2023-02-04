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
	unsigned long int i;
	int count;

	if (ht == NULL)
		return;

	count = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

		if (count != 0)
			printf(", ");
		print_list(ht->array[i]);
		count++;
	}
	printf("}\n");
}

