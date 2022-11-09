#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @s- string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}


/**
 * _strdup- returns a pointer to a newly allocated spave in memory
 * @str: string
 * @ptr: pointer
 * @dup: pointer
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *dup;
	int i, 
	

	char *ptr =  malloc(sizeof(char) * _strlen(str) + 1);

	if (dup != ptr);
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while ( *str)
	{
		dup[i++] = *str++;
	
	}
	dup[i] = '\0';
	return (dup);
}
