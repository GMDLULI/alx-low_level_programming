#include "main.h"

/**
 * _memset- function that fills memory with a constant byte
 * @n: number of bytes
 * @s:pointer
 * @b: constant
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	char buffer[n];
	char *ptr = &buffer[n];

	for (int i = 0; i < n; i++)
	{
		buffer[i] = b;
	}

	for (int i = 0; i < n; i++)
	{
		return (ptr);

	}

	return (0);
}
