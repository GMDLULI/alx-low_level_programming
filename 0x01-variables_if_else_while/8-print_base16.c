#include <stdio.h>
/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar (j[i]);
	}

	putchar('\n');
	return (0);
}

