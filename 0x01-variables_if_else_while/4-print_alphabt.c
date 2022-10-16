#include<stdio.h>

/**
 * main - print the alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */

int main(void);
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
	if (i == 'e' || i == 'q')
	putchar(i);
	}
	putchar('\n');

	return (0);
}
