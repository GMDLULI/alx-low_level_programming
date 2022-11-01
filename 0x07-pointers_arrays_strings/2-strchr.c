#include "main.h"

/**
 * _strchr- locate a charecter in a string
 * @s: string
 * @c: charecter located
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == c)
		{
			break;
		}
		s[i] != '\0';
	}
	return (s);
}
