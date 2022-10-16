#include <stdio.h>

/**
 * main-entry point of program
 *
 * return:return (0) value if no errors, otherwise return non-zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++);
	{
	putchar(i);
	}
	putchar('\n');
	return (0);

}
