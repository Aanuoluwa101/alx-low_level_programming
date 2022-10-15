#include <stdio.h>

/**
 * main - serves as the entry point for the program
 *
 * Return: 0 if no error occurs. Non-zero values otherwise
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);

	for (a = 97; a < 103; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
