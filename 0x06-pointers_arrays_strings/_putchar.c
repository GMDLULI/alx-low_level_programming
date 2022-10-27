#include <unstid.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: 1 on success
 */

int_putchar(char c)
{
	return (write(1, &c,1));
}
