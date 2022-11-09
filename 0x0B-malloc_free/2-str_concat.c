#include "main.h"

/**
 * _concate- concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j;
	int n;

	char *str = (char*)melloc(n * sizeof(char));

	while (s1[i] != '\0')
	{
		i++;
	}
	while (j < n; s2[j] != '\0')
	{
		i++;
		j++;
	}
	s1[i] = '\0';
	return(s1);
	
}




