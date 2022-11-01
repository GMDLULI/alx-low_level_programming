#include "main.h"

/**
 * _memcpy - function that copes memory area
 * @n: bytes copied
 * @src: string copied from
 * @dest: string copied to
 * Return: dest
 */

char *-memcpy(char *dest, char *src, unsigned int)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		return (dest);
	}
}
