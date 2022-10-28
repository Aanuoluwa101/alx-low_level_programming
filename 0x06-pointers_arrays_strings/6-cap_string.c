#include "main.h"

/**
* is_alpha - checks if a character is an alphabet
* @c: the character
* Return: 1 if string is an alphabet
* 0 ohterwise
*/

int is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
* is_lower - checks if a string is lowercase
* @c: the character
* Return: 1 if the character is lowercase
* 0 otherwise
*/

int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
* is_digit - checks if a character is a digit
* @c: the character
* Return: 1 if c is a digit
* 0 otherwise
*/

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
* capitalize_first - finds and capitalize a character
* @i: the index of the last character in the string
* @s: the string
* Return: the index after capitlized character
*/

int capitalize_first(int i, char *s)
{
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
!((is_alpha(s[i])) || is_digit(s[i])))
		i++;
	if (is_lower(s[i]))
		s[i] = s[i] - 32;

	return (i);
}

/**
* cap_string - capitalizes all the words of a string
* @s: the string
* Return: a pointer to the string
*/

char *cap_string(char *s)
{
	int i;

	if (is_lower(s[0]))
		s[0] = s[0] - 32;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == ';' || s[i] == '\t' ||
s[i] == '\n' || s[i] == ',' || s[i] == '!' || s[i] == '"' || s[i] == '(' ||
s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '?')
		{
			i = capitalize_first(i, s);
		}
	}
	return (*&s);
}
