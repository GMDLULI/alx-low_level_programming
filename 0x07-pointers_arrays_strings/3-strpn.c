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

	for(i = 0; i < strlen(accept); i++)
	{
		if (j == strlen(s))
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



