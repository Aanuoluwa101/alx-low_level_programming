#include <stdio.h>

/**
 * main - serves as the entry point for the program
 *
 * Return: 0 if no error occurs. Non-zero values otherwise
 */

int main(void)
{
	int a = 97;

	do {
		if (a == 101 || a == 113)
		{
		a += 1;
		continue;
		}

		putchar(a);
		a++;
	} while (a < 123);

	putchar('\n');
	return (0);
}

