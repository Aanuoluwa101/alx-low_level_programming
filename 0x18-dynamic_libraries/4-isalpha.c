#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if character is a letter, uppercase or lowercase
 * 1 otherwise
 */

int _isalpha(int c)
{
	if (_isupper(c) || _islower(c))
		return (1);
	else
		return (0);
}
