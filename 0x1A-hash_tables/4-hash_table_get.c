#include "hash_tables.h"

/**
 * hash_table_get -retrieves a value associated with a key.
 * @ht: the hash table to be looked into
 * @key: the key to be looked for
 *
 * Return: the value associated with the element,
 * or NULL if @key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = search(ht->array[index], key);
	if (node == NULL)
		return (NULL);

	return (node->value);
}
