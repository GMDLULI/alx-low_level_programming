#include "main.h"

/**
 * _memcpy - function that copes memory area
 * @n: bytes copied
 * @src: string copied from
 * @dest: string copied to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (ptr);
}
