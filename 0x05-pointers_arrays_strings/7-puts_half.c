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

#include "main.h"

/**
* puts_half -  prints half of a string to stdout
* @str: the string to be printed
* Return:
*/

void puts_half(char *str)
{
	int n;
	int start;
	int len;

	len = _strlen(str);

	if (len % 2 != 0)
		start = len / 2 + 1;
	else

		start = len / 2;

	for (n = start; n < len; n++)
		_putchar(*(str + n));

	_putchar('\n');
}
