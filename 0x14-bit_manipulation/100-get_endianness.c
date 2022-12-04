#include "main.h"

/**
  * get_endianness - checks for the endianness
  * *n: string to check the first character.
  * Return: 0 for Big endianness ans 1 for little endianness
  */

int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *)(&n);

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
