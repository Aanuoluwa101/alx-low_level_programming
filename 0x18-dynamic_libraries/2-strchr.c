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

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
