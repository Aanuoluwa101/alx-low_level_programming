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

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
