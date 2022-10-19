#include "main.h"
/**
 * print_last_digit- Print the last digit of the number
 *
 * @n: the integer to calculate the last number
 *
 * Return: return Always 0
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		last_digit = (n % 10 * -1);
	}
	if (n > 0)
	{
		_putchar(n % 10 + '0');
	}
	return (last_digit);
}


