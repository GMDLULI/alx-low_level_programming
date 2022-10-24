#include "main.h"

/**
 * int_strlen- print the lemgth of a string
 *@s: strinh
 * return: length
 */

int _strlen(char *s)
{
	int len= 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);

} 
