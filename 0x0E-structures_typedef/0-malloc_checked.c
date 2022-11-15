#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: number of bytes to be allocated
*
* Return: a pointer to the allocated memory
* 98 it failure
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}