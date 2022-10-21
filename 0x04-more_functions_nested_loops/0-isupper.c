#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if character is uppercase
 * 1 otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
