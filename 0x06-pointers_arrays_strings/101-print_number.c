#include "main.h"

/**
* print_number - prints an integer
* @n: the number to be printed
* Return: nothing
*/

void print_number(int n)
{
	int y;
	int found;

	found = 0;

	for (y = 1000000000; y >= 10; y /= 10)
	{
		if (n >= 0)
		{
			if (n / y > 0 || (n / y == 0 && found > 0))
			{
				_putchar('0' + (n / y));
				found++;
				n %= y;
			}
		}
		else
		{
			if (n / y < 0 && found == 0)
			{
				_putchar('-');
				_putchar('0' - (n / y));
				found++;
				n %= y;
			}
			else if (found > 0)
			{
				_putchar('0' - (n / y));
				n %= y;
			}
		}
	}
	if (n < 0)
		_putchar('0' - n);
	else
		_putchar('0' + n);
}

