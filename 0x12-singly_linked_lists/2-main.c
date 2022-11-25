#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	list_t *head;

	head = NULL;

	add_node(&head, "Alexandro");
	add_node(&head, "Asaia");
	add_node(&head, "Augustin");
	add_node(&head, "Bennett");
	add_node(&head, "Bilal");
	print_list(head);
	return (0);

}
