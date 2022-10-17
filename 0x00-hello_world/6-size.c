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

	printf("Size of int is=%i byte(s)\n", sizeof('a'));
	printf("Size of long int is=%i byte(s)\n", sizeof('b'));
	printf("Size of long long int is=%i byte(s)\n", sizeof('c'));
	printf("Size of char is=%i byte(s)\n", sizeof('d'));
	printf("Size of float is=%i byte(s)\n", sizeof('f'));

	return (0);
}
