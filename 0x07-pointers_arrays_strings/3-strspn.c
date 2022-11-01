#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: string to be searched
* @accept: string to be searched for
*
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	count = 0;

	for (i = 0; i < _strlen(accept); i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}


/**
* _strlen - finds the length of a string
* @s: the string in question
* Return: the length of string s
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}

