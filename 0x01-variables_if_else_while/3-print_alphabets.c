#include<stdio.h>
/**
 * main- program entry point
 *
 * Return:(0) if no errors, return non-zero if errors
 */

int main(void)
{
	int i;
	int b;

	for (i = 'a'; b <= 'z'; i++)
	{
	putchar(i);
	}
	for (i = 'A'; b <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
