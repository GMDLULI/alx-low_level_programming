#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters passed as agruments
 * @...: A variable number to calculate thesum of
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int n, sum;

	va_start (nums, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg (num, unsigned int);
	}
	va_end (num);
	return (sum);
}
