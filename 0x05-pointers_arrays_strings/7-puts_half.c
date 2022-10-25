#include "main.h"

/**
 * puts_half- print half of a string
 * @str: input
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	str -= (len / 2);
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		str++;
	}

	_putchar('\n');
}
