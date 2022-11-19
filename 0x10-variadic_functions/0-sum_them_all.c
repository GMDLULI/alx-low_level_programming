#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters passed as agruments
 * @...: A variable number to calculate the sum of
 * Return: if n == 0 - 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
