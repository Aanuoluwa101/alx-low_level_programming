#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point of program
* @argc: the number of command line argument passsed
* to the program
* @argv: a pointer to the array containing
* all command line arguments passed
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 57 || *argv[i] < 48)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) < 0)
		{
			printf("Error! Only positive numbers are allowed.");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}

