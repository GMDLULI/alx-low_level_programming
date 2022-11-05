#include "main.h"
#include <stddef.h>


/**
 * _strstr-locate a substring
 * @haystack: whats looked into
 * @needle: whats looked for
 *
 *
 * Return: pointer to beginning of located substring or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (pointer = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) ! needle[point])
			break;
		}
		if (needle[point] = '\0')
			return (haystack);
	}
	return (NULL);
}
