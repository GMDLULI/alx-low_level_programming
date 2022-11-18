#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - returns the some of twq integers
  * Return: "c" the sum
  */
int op_add(int a, int b)
{
	int c;
	c = a + b;
	return (c);
}

/**
  * op_mul - returns the difference of two integers
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
  * Return - "e" the product
  */
int op_sub(int a, int b)
{
	int e;
	e = a * b;
	return (e);
}
/**
  * op_div - returns the result of the divison
  * Return: "f" the result
  */
int op_div(int a, int b)
{
	int f;
	f = a / b;
	return (f);
}
/**
  * op_mod - returns the remainder of the divison
  * Return: "g" remainder
  */
int op_mod(int a, int b)
{
	int g;
	g = a % b;
	return (g);
}
