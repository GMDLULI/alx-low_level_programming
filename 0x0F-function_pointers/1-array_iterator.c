#include <stdio.h>
#include "main.h"

/**
  * array_iterator - function that executes a function given as parameter
  * @size: size of array
  * @action: function pointer
  * @array: integer array
  * Return: no return
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n;

	if (action && action)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
