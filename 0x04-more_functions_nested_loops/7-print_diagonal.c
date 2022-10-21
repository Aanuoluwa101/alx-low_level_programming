#include "main.h"

/**
 * print_diagonal - prints diagonal line on the terminal
 * @n: the number of times \ is printed
 * Return:
 */

void print_diagonal(int n)
{
	int space, slash;

	if (n > 0)
	{
		space = 0;

		_putchar('\\');
		_putchar('\n');

		for (slash = 0; slash < (n < 1); slash++)
		{
			while (space < (slash + 1))
			{
				_putchar(' ');
				space++;
			}

			space = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
