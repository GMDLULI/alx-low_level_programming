#include "main.h"
/**
 * print_diagsums- print sum of diagonala of a square matrix
 * sum_pdiag: the principal diagonal
 * sum_sdiag: secondary diagonal
 * Return: sum
 */

void print_diagsums(int *a, int size)

{
	int i;
	int j;

	int *a = &a[i][j];
	sum_pdiag = 0;
	sum_sdiag = 0;

	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if( i == j)
			{
				sum_pdiag += *a;
				printf("%d", &a[i][j]);
			}
		}
	}	
	if ((i + j) == size - 1)
	{
		for(i = 0; i < size; i++)
		{
			sum_sdiag += *a;
		}
		printf("%d%d", sum_pdiag, sum_sdiag);
	}
}


