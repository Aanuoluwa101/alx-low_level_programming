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
* rev_string - reverses a string
* @s: the string in question
* Retrun:
*/

void rev_string(char *s)
{
	int len;
	char new_s[];
	int n;

	for (len = _strlen(s), n = 0; (len > 0) && (n < (_strlen(s))); len--, n++)
		new_s[n] = *(s + (len - 1));

	s = new_s;
	_putchar('\n');
}

