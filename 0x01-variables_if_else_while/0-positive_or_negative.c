#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - serves as the entry point for the program
 *
 * Return: 0 if no error occurs. Non-zero values otherwise
 * and non-zero values otherwise
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
