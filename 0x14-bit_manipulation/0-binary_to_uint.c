#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b:a pointer to a string of 0 and 1 characters
 *
 * Return: the converted number or 0 if b is NULL
 * or the string contains characters other than 0 and 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int j;
	unsigned int num;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	num = 0;
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);

		num += (power(2, i) * (b[j] - 48));
	}
	return (num);
}


/**
 * power - a function that calculates the values of an unsigned int
 * raised to the power of another unsigned int
 * @n: the unsigned int
 * @p: the power
 *
 * Return: n raised to the power of p
 */

int power(int n, int p)
{
	if (p == 0)
		return (1);
	if (p == 1)
		return (n);
	return (n * power(n, p - 1));
}


/**
 * _strlen - a function that returns the number of characters
 * in a string, excluding the terminating null character
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

