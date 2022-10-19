#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 * followed by a newline
 *
 *Return:
 */

void print_alphabet(void)
{
	int a;

	for (a = 97 ; a <= 122; a++)
	{
		_putchar(a);
		if (a == 122)
			_putchar('\n');
	}
}
