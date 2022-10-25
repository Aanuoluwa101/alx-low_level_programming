#include "main.h"

/**
* puts2 -  prints every other character of a string
* starting with the first character
* @str: the string to be printed
* Return:
*/

void puts2(char *str)
{
	int n;

	n = 0;

	while (*(str + n) != '\0')
	{
		if (*(str + (n + 1)) != '\0')
		{
			_putchar(*(str + n));
			n += 2;
		}
		else
		{
			_putchar(*(str + n));
			break;
		}
	}

	_putchar('\n');
}
