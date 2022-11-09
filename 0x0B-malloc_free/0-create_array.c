#include "main.h"
#include <stdlib.h>

/**
 * create_array- create an array of chars and initialize it with specific char
 * @size: thie size of array.
 * @c: charecter to initialize the array
 * Return : a pointer if success, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc (sizeof(char) * size);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
	if (i == 0)
		return (NULL);

	if (p == NULL)
		return (NULL);
}

