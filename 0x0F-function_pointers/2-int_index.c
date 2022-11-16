#include "function_pointers.h"

/**
* int_index - a function that searches for an integer
* @array: the array of integers to be searched
* @size: size of the array
* @cmp: a pointer to the function used for comparison
*
* Return: he index of the first element for which
* the cmp function does not return 0
* -1 if no element matches or if size < 0
*/



int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
