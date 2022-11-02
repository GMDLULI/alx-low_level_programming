#include "main.h"

/**
 * _chessboard- print the pieces of a chessboard
 * Return: return 0
 */

void print_chessbroard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
