#include "main.h"

/**
 * swap_int- swap value of two integers
 * @a: first integer
 * @b: second integer
 * return: a and b
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
