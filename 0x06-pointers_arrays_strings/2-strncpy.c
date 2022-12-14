#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: string to copy to
 * @src: string to copy
 * @n: amount of bytes from src.
 * Return: copied to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
