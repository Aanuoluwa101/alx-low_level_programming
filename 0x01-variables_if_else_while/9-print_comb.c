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

	for (a = 48; a <= 58; a++)
	{
		if (a > 57)
		{
			putchar('\n');
		}
		else
		{
			putchar(a);
			if (a == 57)
			{
				continue;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	return (0);
}
