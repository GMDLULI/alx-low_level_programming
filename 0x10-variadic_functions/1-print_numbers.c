#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n:The number of variables
 * @...: variable number to be printed
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int value;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(nums, int);
		printf("%d", value);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(nums);
}

