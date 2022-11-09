#include "main.h"
#include <stdlib.h>

/**
 * create_array- create an array of chars and initialize it with specific char
 *
 * Return : a pointer if success, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc (sizeof(char) * size);

	int i;

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	if (i == 0)
	{
		return (NULL);
	}
	else
	return (0);
}

