#include "main.h"

/**
* factorial - calculates the factorial of a given integer
* @n: the integer
*
* Return: the factorial of the integer
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
