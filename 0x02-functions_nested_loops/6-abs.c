#include "main.h"
/**
 * _abs-prints absolute value of integer
 * @n:integer to compute its absolute value
 * return:return the abs value
 */
int _abs(int n)
{
	int i = n;
	int absvalue;

	if (i < 0)
	{
	i = i * (-1);
	}
	absvalue = i;
	return (absvalue);
}
