#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created table
 * NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	int i;

	new_table = malloc(sizeof(hast_table_t));
	if (new_talble == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(*hash_node_t) * size);
	if (new_table->array == NULLL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;

	for (i = 0; i < size; i++)
	{
		(new_table->array)[i] = malloc(sizeof(*hash_node_t));
		if ((new_table->array)[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
				free((new_table->array)[i]);
			free(new_table->array);
			free(new_table);
		}
		return (NULL);
	}

	return (new_table);
}


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

	if (is_empty(key))
		return (NULL);
	pos = key_index(key,  ht->size);
	value = search((ht->array)[pos], key);

	return (value);
}
