#include "main.h"
/**
 * print_alphabet_x10-prints all alphabets in lowercase 10 times
 *
 * return:On success 1
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i++ <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}


