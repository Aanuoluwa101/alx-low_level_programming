#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: the array
* @n: the number of elements to be printed
* Return:
*/

void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos <= n; pos++)
	{
		if (pos == n - 1)
			printf("%d\n", *(a + pos));
		else if (pos == n)
			printf("%d\n", *(a + pos));
		else
			printf("%d, ", *(a + pos));
	}
}
