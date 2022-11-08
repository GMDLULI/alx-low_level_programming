#include "main.h"
#include <stdlib.h>

/**
 * _strdup- returns a pointer to a newly allocated spave in memory
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *str = (char*) malloc(sizeof(char));

	printf("%s", *str);

	if (str == NULL)
	{
		return (NULL);
	}
}
