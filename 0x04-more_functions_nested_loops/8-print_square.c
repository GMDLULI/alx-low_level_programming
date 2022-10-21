#include "main.h"
/**
 * print_square- prints a square.
 *
 * @#: character to print square.
 *
 * @size: size of square.
 *
 * return: no return.
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}

