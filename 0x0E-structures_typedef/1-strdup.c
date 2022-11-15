#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: the string to be copied
*
* Return: a pointer to the newly allocated space in memory
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(_strlen(str) + 1);

	if (ptr != NULL)
	{
		for (i = 0; i <= _strlen(str); i++)
			ptr[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	return (ptr);
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

