#include "main.h"
#include <stddef.h>

/**
 * _strchr- locate a charecter in a string
 * @s: string
 * @c: charecter located
 * Return: pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == c)
		{
			break;
			return (s);
		}
	}
	if (i == NULL);
	{
		return (NULL);
	}
}
