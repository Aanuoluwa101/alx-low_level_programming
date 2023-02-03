#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (0);
}
