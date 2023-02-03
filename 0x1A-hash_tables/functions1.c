#include "hash_tables.h"

/**
 * is_empty - checks if a string is empty
 * @str: the string to be checked
 *
 * Return: 1 if @str is empty. 0 otherwise
 */
int is_empty(char *str)
{
	if(strcmp(str, "") == 0)
		return (1);
	return (0);
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
char *search(hash_node_t *head, char *key)
{
	hash_node_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}


/**
 * add_hash_node - adds a node to the begining of a hash_node_t list
 * @node: the node to be added
 * @head: the head of the hash_node_t list
 *
 */
void add_hash_node(hash_node_t *node, hash_node_t *head)
{
	if (head == NULL)
	{
		node->next = NULL;
		head = node;
	}

	node->next = head;
	head = node;
}

