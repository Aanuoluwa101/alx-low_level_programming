#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* print_numbers - a function that prints numbers,
* followed by a newline
* @separator: the string to be printed between two numbers
* @n:  the number of integers passed to the function
*
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (n > 0)
	{
		va_start(ap, n);
		if (separator == NULL)
		{
			for (i = n; i >= 1; i--)
			{
				printf("%d", va_arg(ap, int));
			}
			va_end(ap);
			printf("\n");

		}
		else
		{
			for (i = n; i >= 1; i--)
			{
				if (i > 1)
					printf("%d%s", va_arg(ap, int), separator);
				else
					printf("%d", va_arg(ap, int));
			}
			va_end(ap);
			printf("\n");
		}
	}
}

