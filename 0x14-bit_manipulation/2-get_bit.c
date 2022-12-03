#include "main.h"

/**
  * get_bit - gets the value of a bit at a given index
  * @n: the bit
  * @index: the index to get the value at - indices start at 0.
  *
  * Return: if error - -1
  * otherwise - the value of bit at index
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}
	return (-1);
}
