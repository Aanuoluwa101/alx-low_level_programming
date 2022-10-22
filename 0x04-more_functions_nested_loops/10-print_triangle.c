#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of triangle
* Return:
*/

void print_triangle(int size)
{
	int i, space, ash;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (space = i - 1; space > 0; space--)
				_putchar(' ');

			for (ash = size - (i - 1); ash > 0; ash--)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
