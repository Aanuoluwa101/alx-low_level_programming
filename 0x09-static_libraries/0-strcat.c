#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: the first string
* @src:L the second string
* Return: a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int  d_len;
	int s_len;

	d_len = _strlen(dest);
	s_len = _strlen(src);

	for (i = 0, j = d_len ; (i <= s_len + 1) && (j <= d_len + s_len); i++, j++)
		dest[j] = src[i];

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

