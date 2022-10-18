#include "main.h"
/**
 * print_alphabet_x10- prints all alphabets in lowercase 10 times
 *
 * return:On success 1
 */
void print_alphabet_x10(void)
{
	char j,i;

	for (i = 0; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
}


