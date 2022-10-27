#include "main.h"

/**
 * string_toupper - change lowecase char to uppercase
 * @s: string
 * Return: return s
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
	}
	return (s);
}
