#include <stdio.h>
int is_factor(int n, int f);
int is_prime(int f);

/**
* is_factor - checks if a number is a factor of another number
* @n: the number whose factor is to be checked
* @f: the factor to be checked
* Return: 1 if f is a factor of n
* otherwise 0
*/

int is_factor(int n, int f)
{
	if (n % f == 0)
		return (1);
	else
		return (0);
}

/**
* is_prime - checks if a number is a prime factor
* @f: number to be checked
* Return: 1 if number is a prime factor
* otherwise 0
*/

int is_prime(int f)
{
	if (f == 2 || f == 3)
		return (1);
	else if (f % 2 == 0 || f % 3 == 0)
		return (0);
	else
		return (1);
}

/**
 * main - entry point of program
 *
 * Return: Always 0
 */

int main(void)
{
	int f, largest;
	long int n;

	n = 612852475143;

	for (f = 2; f <= n; f++)
	{
		if (is_factor(n, f))
		{
			if (is_prime(f))
			{
				largest = f;
				n /= f;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}

	printf("%d\n", largest);


	return (0);

}









