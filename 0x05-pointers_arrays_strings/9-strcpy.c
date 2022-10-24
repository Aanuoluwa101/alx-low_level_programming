#include "main.h"

/**
* _strlen - finds the length of a string
* @s: the string in question
* Return: the length of string s
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

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
	static char **ptr;

	for (n = 0; n <= len; n++)
		*(dest + n) = *(src + n);

	ptr = &dest;
	return (ptr);
}



