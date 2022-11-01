#include "main/h"

/**
 * _strstr-locate a substring
 * @strlen- length of function
 * Return: length
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	int slen = strlen[haystack];
	int clen = strlen[needle];
	int end = slen - clen + 1;

	for(i = 0; i < end; i++)
	{
		for (j = 0; j < clen; j++)
		{
			if (haystack[i] != needle[i + j])
			{ 
				break;
			}
			else
			{ 
				return (clen);
			}
		}
	}
}

