#include "main.h"

/**
 * _strspn- length of prefix substring
 * @s: first string
 * @accept: second string
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] = accept[j])
			{
				break;
			}
		}
			if (s[i] != accept[j])
			{
				break;
			}
	}
	return (i);
}
