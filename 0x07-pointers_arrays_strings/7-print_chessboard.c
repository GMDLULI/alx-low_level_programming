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
		for (j = 1; j < 8; j++)
		{
			if (i = 0 && i = 7)
			{
				printf("r, k, b, q, k, b, k, r");
			}
			if (i = 1; && i = 6)
			{
				printf("p");
			}
			else
			{
				printf(' ');
			}
		}
	}
}
