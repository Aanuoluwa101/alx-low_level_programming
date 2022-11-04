#include <stdio.h>

/**
* main - entry point of program
* @argc: the number of command line argument passsed
* to the program
* @argv: a pointer to the array containing
* all command line arguments passed
*
* Return: 0
*/

int change(int cents, int pos);


int main(int argc, char *argv[])
{
	int a;

	a = atoi(*argv[i]);
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
	printf("%d\n", change(a, 0);
	return (0);
}


/**
* change - the minimum number of coins to make
* change for an amount of money.
* @cents: the amount of money
* @pos: position of a coin in an array of coins to be used
*
* Return: the minimum amount of coints to make change
*/

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
