#include "main.h"

/**
 * print_array- print elements of an array
 * @n: number of arrays printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(a[n]);
		_putchar(' ');
		_putchar(',');
	}

	_putchar('\n');
}
