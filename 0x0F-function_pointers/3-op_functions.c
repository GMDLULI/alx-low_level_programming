#include <stdio.h>
#include "3-calc.h"

/**
  * gets_op_func - function that selects the correct function to perform
  * @s: operator
  * Return: pointer to funtion
  */

int (*get_op_func(char *s))(int, int)
{
	char * s = {'+', '-', '*', '/','%'};
	s['+'] = op_add;
	s['-'] = op_sub;
	s['*'] = op_mul;
	s['/'] = op_mul;
	s['%'] = op_mod;

 	int i;

	while (i <= s;)
	{
		s++;
		i++;
		printf("Enter choice:\n");
		scanf("%c", i);
	}
	if (i != s)
	{
		return (NULL)
	}
	else
	{
		return get_op_func(s);
	}
}
