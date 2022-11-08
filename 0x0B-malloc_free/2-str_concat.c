#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: a pointer to newly allocated space in memory which contains
* the contents of s1, followed by the contents of s2
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int s1_len;
	int s2_len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);

	if (ptr != NULL)
	{
		for (i = 0; i < s1[i]; i++)
			ptr[i] = s1[i];
		for (i = s1_len, j = 0; s1[j]; i++, j++)
			ptr[i] = s2[j];
		ptr[s1_len + s2_len] = '\0';
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

