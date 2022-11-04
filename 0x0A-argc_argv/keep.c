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
	int cents;
	int coin;
	int coins[];

	coin = 0;
	cents = atoi(argv[1]);
	coins = {25, 10, 5, 2 ,1};

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



int change(int cents, int pos)
{
	int coin;
	int coints[5];

	coins = {25, 10, 5, 2, 1};
	coin = coints[pos];

	if (cents == 0)
		return (0);
	if (cents == 1)
		return (1);
	return (cents / coin + change(cents % coin, pos + 1));
}
