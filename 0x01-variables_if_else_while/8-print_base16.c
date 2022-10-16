#include <stdio.h>
/**
 * main- program entry point
 *
 * return:0 if no errors, return non-zero if errors
 */

int main(void)
{
	int i;
	char hexavalues[] = "123456789abcdef";
	for(i = 0; i < 16; i++);
	{
	putchar(hexavalues[i]);
	putchar('\n');
	}
	return(0);
}

