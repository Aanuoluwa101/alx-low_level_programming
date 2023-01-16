#include "main.h"

/**
* _memset - fills the first n bytes of the memory
* area pointed to by s with a constant byte b
* @s: the memory area pointer
* @b: the constant byte
* @n: the number of bytes in memory area to be filled
*
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (*&s);
}
