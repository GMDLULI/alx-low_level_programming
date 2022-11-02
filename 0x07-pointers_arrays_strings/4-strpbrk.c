#include "main.h"

/**
 * _strpbrk- function that searches for any set of bytes
 * @s: string to locate the char to
 * @accept: second string to locate the char from
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; i < s[i] != '\0'; i++)
	{
		for (j = 0; j < accept[j] != '\0'; j++)
		{
			s[i] = accept[j];
		
		}
		if (s[i] != accept[j])
		{
			return (s[i]);
		}
	}

	return (s);
}
