#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number whose sign is to be checked and printed
 *
 * Return: 0 if n is zero
 * 1 if n is greater than 0 and -1 if n is less than 0
 */

int print_sign(int n)
{
	signed int a = 1 - 2;

	if (n < 0)
	{
		_putchar('-');
		return (a);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('1');
		return (1);
	}
}
