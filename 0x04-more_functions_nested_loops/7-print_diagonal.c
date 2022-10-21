#include "main.h"

/**
 * print_diagonal- prints a diagonal line.
 *
 * @n: number of times to print the '\' chatacter.
 *
 * return: no return.
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	if (i < (n - 1))
	{
		_putchar('\n');
	}
	_putchar('\n');
}
