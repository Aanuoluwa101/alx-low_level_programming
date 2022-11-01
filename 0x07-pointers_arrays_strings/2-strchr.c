#include "main.h"

/**
* _strchr - locates a character in  a string
* @s: the string
* @c: the character
*
* Return: a pointer to the first occurrence
* of the charcter in the string
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
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

