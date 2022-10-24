#include "main.h"

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

/**
* rev_string - reverses a string
* @s: the string in question
* Retrun:
*/

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	int j_stop;
	int z;

	len = _strlen(s);
	i = 0;
	j = len - 1;

	if (len % 2 == 0)
		j_stop = len / 2;
	else
		j_stop = len / 2 + 1;

	while (i <= (len / 2) - 1 && j >= j_stop)
	{
		z = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = z;
		i++;
		j--;
	}

}

