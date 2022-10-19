#include "main.h"
/**
 * print_sign- prints the sign - or + of a number
 * @n:number print sign of number
 * Return:return 1-if greater than zero, 0-if zero, (-1)-if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}

