#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: concatenate into
 * @src: concatenat from
 * Return: return  pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
}

