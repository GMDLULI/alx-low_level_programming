#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocate memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
