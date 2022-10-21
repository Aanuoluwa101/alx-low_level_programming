#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9
* excluding 2 and 4
* Return:
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 || c != 4)
			_putchar('0' + c);
		else
			continue;
	}

	_putchar('\n');
}
