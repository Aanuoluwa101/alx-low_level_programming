#include "hash_tables.h"

/**
 * hast_table_get -retrieves a value associated with a key.
 * @ht: the hash table to be looked into
 * @key: the key to be looked for
 *
 * Return: the value associated with the element,
 * or NULL if @key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
	char *value;
	hash_node_t *node;

	if(strcmp(key, "") == 0)
		return (NULL);

	pos = key_index(key, ht->size);
	node = search((ht->array)[pos], key);
	if (node == NULL)
		return (NULL);

	value = node->value;
	return (value);
}


/**
 * search - searches a hash_node_t linked list for a key
 * @head: the head of the linked list
 * @key: the key to search for
 *
 * Return: the value paired with the key
 * NULL if the key could not be found
 */
hash_node_t *search(hash_node_t *head, char *key)
{
	hash_node_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
