#include "main.h"
#include <stdlib.h>

/**
 * create_array- create an array of chars and initialize it with specific char
 * @size: thie size of array.
 * @c: charecter to initialize the array
 * Return: a pointer if success, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(sizeof(char) * size);

	unsigned int i;

	if (size ==  0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}

