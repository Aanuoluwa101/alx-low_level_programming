#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer whose absolute value is to be computed
 *
 * Return: the absolute value of the integer. -1 otherwise
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
