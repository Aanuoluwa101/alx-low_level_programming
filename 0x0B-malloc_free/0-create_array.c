#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with a specific char.
* @size: size of array
* @c: the character for array initialization
*
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	if (size <= 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr != NULL)
	{
		for (n = 0; n < size; n++)
			*(ptr + n) = c;
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
