#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if character is lowercase
 * 1 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
