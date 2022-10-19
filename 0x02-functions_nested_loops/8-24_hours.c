#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack Bauer
 *
 * Return:
 */

void jack_bauer(void)
{
	int hour_a, hour_b, min_a, min_b;

	while (hour_a <= 2)
	{
		while (hour_b <= 9)
		{
			while (min_a < 6)
			{
				while (min_b <= 9)
				{
					if (hour_a == 2 && hour_b == 3 && min_a == 5 && min_b == 9)
					{
						_putchar(hour_a + '0'),	_putchar(hour_b + '0'),	_putchar(':'), _putchar(min_a + '0'), _putchar(min_b + '0');
						break;
					}
					else
					{
						_putchar(hour_a + '0'), _putchar(hour_b + '0'), _putchar(':'), _putchar(min_a + '0'), _putchar(min_b + '0');
						min_b++;
					}
				}

				if (hour_a == 2 && hour_b == 3 && min_a == 5 && min_b == 9)
					break;
				else
					min_a++, min_b = 0;
			}

			if (hour_a == 2 && hour_b == 3 && min_a == 5 && min_b == 9)
				break;
			else
				min_a = 0, min_b = 0, hour_b++;
		}

		if (hour_a == 2 && hour_b == 3 && min_a == 5 && min_b == 9)
			break;
		else
			hour_b = 0, min_a = 0, min_b = 0, hour_a++;
	}

}
