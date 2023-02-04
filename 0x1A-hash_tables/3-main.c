#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	printf("start");
	ht = hash_table_create(1024);
	printf("hash table created");
	hash_table_set(ht, "betty", "cool");
	return (0);
}
