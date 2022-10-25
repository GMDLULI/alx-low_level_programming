#include "main.h"
#include <stdio.h>

/**
 * print_array- print elements of an array
 * @n: number of arrays printed.
 * @a: array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
