#include "main.h"

/**
 * rev_string- function that prints string in reverse.
 * @s: string
 */

void rev_string(char *s)
{
	int i;
	int a = 0;
	char rv;

	while (s[a] != '\0')
		a++;
	for(i = 0; i < a; i++)
	{
		a--;
		rv = s[i];
		s[i] = s[a];
		s[a] = rv;
	}
}
