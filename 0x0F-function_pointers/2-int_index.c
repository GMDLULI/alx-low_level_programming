#include <stdio..h>
#include "main.h"

/**
  * int_index- return the index of the firat element
  * @size: size of elements
  * @array: integer array
  * @cmp: pointer to function used to compare values
  * Return: -1. if size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	char *ptr = (char*)array;
	int i;
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return(-1);
}
