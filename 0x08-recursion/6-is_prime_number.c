#include "main.h"

/**
* is_prime_number - checks if an integer is a prime number or not
* @n: the integer
*
* Return: 1 if it is a prime number, 0 otherwise
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	return ((n % 2) + is_prime_number(n - 1));
}
