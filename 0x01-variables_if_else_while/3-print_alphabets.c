#include <stdio.h>
/**
 * main- program entry point
 *
 * Return:(0) if no errors, return non-zero if errors
 */

int main(void)
{
	char i;
	char b;
	for( i= 'a'; i < 'z'; i++);
	{
	putchar(i);
	}
	for(b = 'A'; b < 'Z'; b++);
	{
	putchar(i);
	}
	putchar('\n');

	return(0);
}
