#include "main.h"
#include <stdlib.h>
/**
 * _strlen- calculates the length of string
 * @s: string
 * Return: the length of string
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
 * str_concat- concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *concate;

	j = _strlen(s1) + _strlen(s2);

	concate = malloc(sizeof(char) * (j + 1));

	if (s1 == NULL)
		s1[];

	if (s2 == NULL)
		s2[];

	if (concate == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)

		concate[i] = s1[i];

	for (i = 0; i < _strlen(s2); i++)

		concate[_strlen(s1) + i] = s2[i];
	return (concate);
}
