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
* print_rev - prints a string in reverse
* @s: the string in question
* Retrun:
*/

void print_rev(char *s)
{
	int len;

	for (len = _strlen(s); len > 0; len--)
		_putchar(*(s + (len - 1)));

	_putchar('\n');
}

