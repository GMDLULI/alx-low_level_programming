#include "main.h"
/**
 * jack_bauer- prints every minute of the day of jack bauer
 *
 * return: 0 if successful
 */
void jack_bauer(void)
{
	int a;
	int b;
	int j;
	int i;

	for (a = 0; a < 2; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (j = 0; j < 5; j++)
			{
				for (i = 0; i < 9; i++)
				{
					if (a == 2 && b == 3)
					{
						break;
					}
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
	}
}
