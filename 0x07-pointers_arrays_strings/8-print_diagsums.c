#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two
* diagonals of a square matrix of integers.
* @a: pointer to square matrix
* @size: size of the square
*
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int sum;
	int i;
	int count;

	/*Right diagonal*/
	sum = 0;
	for (i = 0, count = 0; count < size; i += (size + 1), count++)
		sum += a[i];
	printf("%d, ", sum);

	/*Left diagonal*/
	sum = 0;
	for (i = size - 1, count = 0; count < size; i += (size - 1), count++)
		sum += a[i];
	printf("%d\n", sum);
}
