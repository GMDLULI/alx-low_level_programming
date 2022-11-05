#include "main.h"
/**
 *_islower-checks if the character is lowercase
 * @c:character to check if character is lowercase
 * Return:return 0 if lowercase, return 1 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
