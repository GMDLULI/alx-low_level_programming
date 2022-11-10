#include "main.h"
#include <stdlib.h>

/**
 * _calloc- allocate memory for an array
 * @nmemb: elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(size * nmemb);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)

		s[j] = 0;
	return (s);
}
