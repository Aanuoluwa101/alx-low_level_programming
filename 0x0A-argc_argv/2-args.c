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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
