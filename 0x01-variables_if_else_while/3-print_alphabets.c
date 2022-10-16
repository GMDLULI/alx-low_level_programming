#include<stdio.h>
/**
 * main- program entry point
 *
 * Return:(0) if no errors, return non-zero if errors
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A'; j <= 'Z'; i++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}
