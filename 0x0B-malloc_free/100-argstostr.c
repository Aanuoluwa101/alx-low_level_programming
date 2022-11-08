#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: number of arguments passed to the program
* @av: arguments vector
*
* Return: a pointer to new string containing all the arguments
*/

char *argstostr(int ac, char *av[])
{
	int i;
	int j;
	static int pos;
	char *ptr;

	pos = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = malloc(count_bytes(ac, av) + ac + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < _strlen(av[i]); j++)
			{
				ptr[pos] = av[i][j];
				pos++;
			}
			ptr[pos] = '\n';
			pos++;
		}
		ptr[pos] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}


/**
* count_bytes -  count the number of bytes pointed to by
* an array of pointers
* @av: the array of pointers
* @ac: the number of pointers in the array
*
* Return: number of bytes
*/

int count_bytes(int ac, char *av[])
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < ac; i++)
		sum += _strlen(av[i]);
	return (sum);
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

