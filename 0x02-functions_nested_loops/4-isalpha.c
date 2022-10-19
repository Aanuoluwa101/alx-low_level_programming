#include "main.h"

/**
 * _islower - checks if character is lowercase
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



/**
 * _isupper - checks if a character is uppercase
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
