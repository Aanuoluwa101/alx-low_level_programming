#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: start integer
* @max: end integer
*
* Return: a pointer to the integer array
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc((max - min) * sizeof(int) + 1);
		if (ptr != NULL)
		{
			for (i = 0, j = min; i <= max - min; i++, j++)
				*(ptr + i) = j;
		}
	}
	return (ptr);
}
