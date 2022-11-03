#include "main.h"
/**
 * factorial- prints factorial of number
 * Return: no return
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
}
