#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible different combinations of three digits.
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
			for (c = '0'; c <= '9'; c++)
			{
				if (a < b && a != b && a < c && a != c && b < c && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
				}
				if (a == 7 && b == 8 && c == 9)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
