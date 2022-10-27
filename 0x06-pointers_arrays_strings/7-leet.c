#include "main.h"

/**
 * leet: encodes the string into 1337
 * @s1: first string
 * @s2: second string
 * @n: input
 * Return: the vslue of n
 */

char *leet(char *)
{
	int i, j;

	char s1[10] = "aAeEoOtTlL";
	char s2[10] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}

