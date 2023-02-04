#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to which the key/value is to be added
 * or updated
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int  index;

	if (ht == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = add_node(key, value, &ht->array[index]);
		if (node == NULL)
			return (0);
		return (1);
	}

	node = search(ht->array[index], key);
	if (node == NULL)
	{
		node = add_node(key, value, &ht->array[index]);
		if (node == NULL)
			return (0);
		return (1);
	}

	free(node->value);
	node->value = strdup(value);
	return (1);
}

/**
 * add_node - adds a node to the begining of a hash_node_t list
 * @key: the key
 * @value: teh value associated with the key
 * @head: the head of the hash_node_t list
 *
 * Return: address of added node or NULL on failure
 */
hash_node_t *add_node(const char *key, const char *value, hash_node_t **head)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


/**
 * search - searches a hash_node_t linked list for a key
 * @head: the head of the linked list
 * @key: the key to search for
 *
 * Return: the value paired with the key
 * NULL if the key could not be found
 */
hash_node_t *search(hash_node_t *head, const char *key)
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
