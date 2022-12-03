#include "main.h"

/**
  * clear_bit - sets a bit value to 0.
  * @n: pointer to an unsigned int
  * @index: index of a bit
  * Return: 1 otherwise -1.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}

