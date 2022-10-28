#include "main.h"

/**
* string_toupper - changes all lowercase letters
* of a string to upper case
* @s: the string
* Return: a pointer to s
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		else
			s[i] = s[i];
	}
	return (*&s);
}
