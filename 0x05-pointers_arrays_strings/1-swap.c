#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first integer
* @b: second integer
* Return:
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;
}

