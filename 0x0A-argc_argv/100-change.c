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
	int pos;
	int cents;
	int coin;
	int coins[5] = {25, 10, 5, 2, 1};

	coin = 0;
	if (argc == 2)
		cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}
	for (pos = 0; pos < 5; pos++)
	{
		coin += cents / coins[pos];
		cents %= coins[pos];
	}
	printf("%d\n", coin);
	return (0);
}

