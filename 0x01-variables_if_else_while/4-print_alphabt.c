#include<stdio.h>

/**
 * main-entry point of program
 *
 * return:return (0) if no errors, return non-zero if errors
 */

int main(void);
{
	char i;

	for (i = 'a'; i < 'z'; i++)
	{
	if (i == 'e' || i == 'q')
	continue;
	putchar(i);
	}
	putchar('\n');
	return (0);
}
