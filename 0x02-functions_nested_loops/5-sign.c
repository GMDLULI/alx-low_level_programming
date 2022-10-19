#include "main.h"
/**
 * print_sign- checks the sign - or + of a number
 * @n:number whoes  sign is checked
 * Return:return 1-if greater than zero, 0-if zero, (-1)-if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
