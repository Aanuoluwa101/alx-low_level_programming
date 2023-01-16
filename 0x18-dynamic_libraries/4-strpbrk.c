#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: the string to be searched
* @accept: the string whose bytes ae to be searched for
*
* Return: a pointer to the byte in s that matches one of the
* bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int index;
	int found;

	found = 0;
	index = 0;

	for (i = 0; i < _strlen(accept); i++)
	{
		for (j = 0; j < _strlen(s); j++)
		{
			if (s[j] == accept[i])
			{
				found++;
				if (found == 1)
					index = j;
				else if (found > 1 && j < index)
					index = j;
			}
		}
	}
	if (found > 0)
		return (&s[index]);

	return ('\0');
}
