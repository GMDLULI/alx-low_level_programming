#include "main.h"
/**
 * print_to_98- prints all natural numbers
 * @n: numbers printed
 * return:Always 0
 */
void print_to_98(int n)
{

	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar('\n');
	}
	if (n > 98)
	{
		for(;n > 98; n--)
		{
			_putchar(n);
			_putchar('\n')
			_putchar(' ');
			_putchar(',');
		}
	}
}

