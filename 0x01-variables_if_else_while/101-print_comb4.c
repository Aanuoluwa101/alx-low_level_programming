#include <stdio.h>

/**
 * main - serves as the entry point for the program
 *
 * Return: 0 if no error occurs. Non-zero values otherwise
 * and non-zero values otherwise
 */

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				if (a == b || a == c || b == c)
				{
					c++;
					continue;
				}
				else if (a > b || a > c || b > c)
				{
					c++;
					continue;
				}
				else
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a == 55 && b == 56 && c == 57)
					{
						putchar('\n')
					}
					else
					{
						putchar(44);
						putchar(32);
					}
				}
				c++;
			}
			c = 48;
			b++;
		}
		b = 48;
		a++;
	}
	return (0);
}


