#include "main.h"
/**
 * _isalpha-checks for alphabet charecter
 * @c:character to check lowercase or uppercase
 * Return:1-if character is lowercase or uppercase, 0-if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
