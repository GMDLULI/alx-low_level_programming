#include <stdio.h>
/**
 * main - Entry point of program
 *
 * Description: prints the size of various bata types on the computer
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int b;
	long long int  c;
	char  d;
	float f;

	printf("Size of an int: %i byte(s)\n", sizeof('a'));
	printf("Size of a long int: %i byte(s)\n", sizeof('b'));
	printf("Size of a long long int: %i byte(s)\n", sizeof('c'));
	printf("Size of a char: %i byte(s)\n", sizeof('d'));
	printf("Size of a float: %i byte(s)\n", sizeof('f'));

	return (0);
}
