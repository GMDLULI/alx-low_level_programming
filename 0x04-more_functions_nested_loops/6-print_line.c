#include "main.h"

/**
 * print_line- prints a striaght line n times
 * @n: number of times the character '_' should be printed
 *
 * Return: no return
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
