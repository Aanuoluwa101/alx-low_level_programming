#include "main.h"

/**
* rot13 - encodes astring using rot13
* @s: the string
* Return: a pointer to the string
*/

char *rot13(char *s)
{
	char c;
	int i;

	for (i = 0; s[i]; i++)
	{
		c = s[i];
		if (((c >= 'a' && c <= 'z') && (c < 'n')) ||
((c >= 'A' && c <= 'Z') && (c < 'N')))
			s[i] = s[i] + 13;
		else if (((c >= 'a' && c <= 'z') && (c >= 'n')) ||
((c >= 'A' && c <= 'Z') && (c >= 'N')))
			s[i] = s[i] - 13;
		else
			s[i] = s[i];
	}
	return (*&s);
}
