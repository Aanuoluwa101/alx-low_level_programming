#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination buffer
* @src: source buffer
* @n: number of bytes to copy from src
* Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int d_len = _strlen(dest);
	int s_len = _strlen(src);
	int i;

	if (n > s_len)
	{
		for (i = 0; src[i]; i++)
			dest[i] = src[i];
		for (; i < n; i++)
			dest[i] = '\0';
	}
	else if (n == s_len)
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
		for (; i < d_len; i++)
			dest[i] = dest[i];
		dest[i] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
		for (; i < d_len; i++)
			dest[i] = dest[i];
	}
	return (*&dest);
}


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

