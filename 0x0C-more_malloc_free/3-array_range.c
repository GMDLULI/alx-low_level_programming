#include "main.h"
#include <stdlib>

/**
 * array_range- create an array of integers 
 * @min: first array 
 * @max: second array
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	char *a; 
	int i, j;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	a = malloc(sizeof(int) * j);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < j; j++, min++)
		a[i] = min;
	return (a);
}


