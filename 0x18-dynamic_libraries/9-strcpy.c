#include "main.h"

/**
* _strcpy - copies string from one buffer to  another
* @dest: destination buffer
* @src: source buffer
* Return: a pointer to the destination pointer
*/

char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int n;
	static char *ptr;

	for (n = 0; n <= len; n++)
		*(dest + n) = *(src + n);

	ptr = &*dest;
	return (ptr);
}
