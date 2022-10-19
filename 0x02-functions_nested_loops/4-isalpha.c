#include "main.h"
/**
 * _isalpha-checks for alphabet charecter
 * @c:character to check lowercase or uppercase
 * return: return 0 if character is lowercase or uppercase, return 1 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
