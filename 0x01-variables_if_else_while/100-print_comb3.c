#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0')

			if (a < b && a != b)
			{
				putchar(a);
				putchar(b);
				if (a == 8 && b == 9)
				{
					break;
				}
			}
		}
		putchar(' ');
		putchar(',');
	}
	return (0);
}
