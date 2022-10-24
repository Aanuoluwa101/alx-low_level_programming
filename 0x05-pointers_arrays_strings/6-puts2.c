#include "main.h"

/**
* _puts2 -  prints every other character of a string
* starting with the first character
* @str: the string to be printed
* Return:
*/

void _puts(char *str)
{
	int n;

	n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n += 2;
	}

	_putchar('\n');
}
