#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	hash_node_t *node;
	unsigned long int index;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	index = key_index((const unsigned char *)"c", 1024);
	node = search(ht->array[index], "c");
	if (node == NULL)
		printf("empty\n");
	else
		printf("%s\n", node->value);

	return (0);
}
