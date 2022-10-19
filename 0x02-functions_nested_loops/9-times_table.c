#include "main.h"
/**
 * times_table- prints 9 times table
 * Return: return 0 if succesful
 */
void times_table(void)
{
	int a;
	int b;
	int op;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);

		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			_putcha(44);
			_putchar(32);

			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) +48);
			}
		}
		_putchar('\n');
	}
}

