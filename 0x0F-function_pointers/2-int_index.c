#include <stdlib..h>
#include "function_pointers.h"

/**
  * int_index- return the index of the firat element
  * @size: size of elements
  * @array: integer array
  * @cmp: pointer to function used to compare values
  * Return: -1. if size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return(-1);
}
