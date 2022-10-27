#include "main.h"

/**
 * _strncat - concatenate two strings of n byes
 * @dest: concatenate to
 * @src: concatenate from
 * @n: number of char to be copied.
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		int j;

		for (j = 0; j < n && src[j] != '\0'; j++, ++i)
		{
			dest[i] = src[j];
		}
	}
	dest[i] != '\0';
	return (dest);
}

