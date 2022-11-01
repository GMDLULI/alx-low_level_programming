#include "main.h"

/**
 * _memcpy - function that copes memory area
 * @n: bytes copied
 * @src: string copied from
 * @dest: string copied to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] != '\0';
	return (dest);
}
