#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	print_list(head);
	return (0);
}

