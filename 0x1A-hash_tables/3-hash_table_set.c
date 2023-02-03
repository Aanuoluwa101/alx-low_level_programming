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

	 if(strcmp(key, "") == 0)
		 return (0);

	 index = key_index(key, ht->size);

	 if ((ht->array)[index] == NULL)
	 {
	 	node = create_hash_node_t(key, value);
	 	if (node == NULL)
			return (0);
	 	add_hash_node_t(node, (ht->array)[index]);
		return (1);
	 }

	 node = search((ht->array)[index]);
	 node->value = value;

	 return (1);
}

/**
 * add_hash_node_t - adds a node to the begining of a hash_node_t list
 * @node: the node to be added
 * @head: the head of the hash_node_t list
 *
 */
void add_hash_node_t(hash_node_t *node, hash_node_t *head)
{
	if (head == NULL)
	{
		node->next = NULL;
		head = node;
	}

	node->next = head;
	head = node;
}

/**
 * create_hash_node_t - creates a hash_node_t node
 * @key: The key
 * @value: The value
 *
 * Return: the address of the node created
 * or NULL on failure
 */
hash_node_t *create_hash_node_t(char *key, char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = key;
	new_node->value = value;

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
