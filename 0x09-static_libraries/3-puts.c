#include "main.h"

/**
 * _puts- print a string
 * @str: string
 * return: return string
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

