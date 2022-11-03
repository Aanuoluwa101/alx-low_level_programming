#include "main.h"

/**
* _strlen_recursion - finds the length of a string
* @s: a pointer to the string
*
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int count;

	count = 1;

	if (!*(s))
		return (0);
	return (count + _strlen_recursion(s + 1));
}

