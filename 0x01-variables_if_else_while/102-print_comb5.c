#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; a++)
		{
			putchar('0' + a /10);
			putchar('0' + a %10);

			putchar(' ');

			putchar('0' + b /10);
			putchar('0' + b %10);
		}
		if (a == 98 && b == 99)
		{
			break;
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
