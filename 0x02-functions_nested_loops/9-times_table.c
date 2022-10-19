#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 *Return:
 */

void times_table(void)
{
	int num;
	int count;
	int res = 0;

	for (num = 0; num <= 9; num++)
	{	_putchar('0')
		for (count = 1; count <= 10; count++)
		{
			res +=
			_putchar
