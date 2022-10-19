#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets ten times in lower case
 * followed by a newline
 *
 *Return:
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97 ; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
