#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 is equal,another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int a, flag;

	a = 0
	while (s1[a] != '\0' && s2[a] != '\0';)
	{
		if (s2[a] != s1[a])
		{
			return (s1[a] - s2[a]);
		}
	a++;
	}
	return (0);
}


