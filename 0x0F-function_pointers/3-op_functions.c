#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - returns the some of twq integers
  * @a: first integer
  * @b: second integer
  * Return: "c" the sum
  */
int op_add(int a, int b)
{

	int c;

	c = a + b;
	return (c);
}

/**
  * op_sub - returns the difference of two integers
  * @a: first integer
  * @b: second integer
  * Return: "d" the difference
  */
int op_sub(int a, int b)
{
	int d;

	d = a - b;
	return (d);
}
/**
  * op_mul - returns the product of two integers
  * @a: first integer
  * @b: second integer
  * Return: "e" the product
  */
int op_mul(int a, int b)
{
	int e;

	e = a * b;
	return (e);
}
/**
  * op_div - returns the result of the divison
  * @a: first integer
  * @b: second integer
  * Return: "f" the result
  */
int op_div(int a, int b)
{
	int f;

	f = a / b;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (f);
}
/**
  * op_mod - returns the remainder of the divison
  * @a: first integer
  * @b: second integer
  * Return: "g" remainder
  */
int op_mod(int a, int b)
{
	int g;

	g = a % b;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	return (g);
}
