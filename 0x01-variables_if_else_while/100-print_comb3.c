#include <stdio.h>

/**
 * main - serves as the entry point for the program
 *
 * Return: 0 if no error occurs. Non-zero values otherwise
 * and non-zero values otherwise
 */

int main(void)
{
	int a;
	int b;
	int stop = 9;
	int start = 1;
	int a_start = 48;
	int b_start = 49;

	while (stop >= 1)
	{
		a = a_start;
		b = b_start;

		while (start <= stop)
		{
			putchar(a);
			putchar(b);
			if (start == 1 && stop == 1)
			{
				putchar('\n');
			}
			else
			{
				putchar(44);
				putchar(32);
			}
			start++;
			b++;
		}
		a_start++;
		b_start++;
		stop--;
		start = 1;
	}

	return (0);
}
