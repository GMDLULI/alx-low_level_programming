#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: The string to be printed
 * @n: the number to strings to be printed
 * @...: A variable number of strings to be printed
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < (n - 1))
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(strings);
}
