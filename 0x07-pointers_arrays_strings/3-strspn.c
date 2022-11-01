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

	for (i = 0; i < accept[i] != '\0'; i++)
	{
		if (j == s[i] - 1)
		{
			break;
		}
		if (accept[i] == s[i])
		{
			j++;
		}
	}
	return (j);
}



