#include "main.h"

/**
 * _memset- function that fills memory with a constant byte
 * @n: number of bytes
 * @s: memory area
 * @b: bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
