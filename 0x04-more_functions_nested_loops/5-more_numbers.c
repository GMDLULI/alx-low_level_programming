#include "main.h"

/**
 * more_numbers- print numbers 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;

	while (i++ <= 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
}
