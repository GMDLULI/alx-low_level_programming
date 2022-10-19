#include "main.h"
/**
 * _abs-prints absolute value of integer
 * @n:integer to compute its absolute value
 * return:return the absvalue
 */
int _abs(int n)
{
	int n;
	int absvalue;

	if (n < 0)
	{
	n = n * (-1);
	}
	absvalue = n;
	return (absvalue);
}
