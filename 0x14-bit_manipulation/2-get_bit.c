#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the integer
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int *ptr;
	unsigned long int size;
	unsigned long int i;

	for (size = 0, i = n; i > 0; i /= 2)
		size++;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ptr[i] = n % 2;
		n /= 2;
	}

	if (index > size - 1)
		return (-1);
	else
		return (ptr[index]);
}
