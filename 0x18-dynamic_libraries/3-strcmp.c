#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
* Return: 0 if the two strings are equal
* 1 if s1 is greater than s2 and -1 otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;

	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}
