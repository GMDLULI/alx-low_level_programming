#include "main.h"

/**
 * _strpbrk- function that searches for any set of bytes
 * @s: string to locate the char to
 * @accept: second string to locate the char from
 * Return: pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{

	int i, *p;

	for (i = *s; i != 0; s++, i = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (i == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
