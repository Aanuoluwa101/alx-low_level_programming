#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: 2D array of chessboard
*
* Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j < 7 || (i == 7 && j == 7))
			{
				_putchar(a[i][j]);
			}
			else
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
