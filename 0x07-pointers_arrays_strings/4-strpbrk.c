#include "main.h"

/**
 * _strpbrk- function that searches for any set of bytes
 * @s: string to locate the char to
 * @accept: second string to locate the char from
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int *ptr;
	int i, j;

	for(i = 0; i < s[i] != '\0'; i++)
	{
		for(j = 0; j < accept[j] != '\0'; j++)
		{
			s[i] = accept[j];
			return (ptr);
		}
		if (s[i] != accept[j])
		{
			return (NULL);
		}
	}

	return (s);
}
