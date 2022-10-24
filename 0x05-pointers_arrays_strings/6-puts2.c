#include "main.h"

/**
 * puts2- prints one chatacter out of two
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
