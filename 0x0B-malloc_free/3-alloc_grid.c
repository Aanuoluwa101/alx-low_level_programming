#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of array
* @height: height of array
*
* Return: a pointer to the 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(width * sizeof(int));
			if (ptr[i] == NULL)
			{
				free(ptr);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				*(*(ptr + i) + j) = 0;
			}
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}


