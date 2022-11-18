#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -  a function that returns the sum of all its parameters.
* @n: the number of parameters to be added
*
* Return: the sum of the first n parameters
* 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	int i;

	sum = 0;
	va_start(ap, n);
	if (n <= 0)
	{
		return (0);
	}

	for (i = n; i >= 1; i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
