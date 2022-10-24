#include "main.h"

/**
 * reset_to_98- takes the pointer to an int and updates value it points
 * @n: interger
 * return: Always 0
 */

void reset_to_98(int *n)
{
	int p;

	p = 98;
	n  = &p;

	_putchar(p, &p);
	_putchar('\n');
	_putchar(n, *n);
	_putchar('\n');
}
