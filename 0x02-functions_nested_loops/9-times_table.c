#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return:
 */

void times_table(void)
{
	int num, count;
	int res = 0;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0'), res = num;

		for (count = 1; count <= 9; count++)
		{
			if (res > 9 && count == 9)
			{
				_putchar(','), _putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0'), _putchar('\n');
			}

			else if (res > 9 && count < 9)
			{
				_putchar(','), _putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}

			else if (res <= 9 && count == 9)
			{
				_putchar(','), _putchar(' '), _putchar(' ');
				_putchar(res + '0'), _putchar('\n');
			}

			else
			{
				_putchar(','), _putchar(' '), _putchar(' ');
				_putchar(res + '0');
			}
			res += num;
		}
	}
}




