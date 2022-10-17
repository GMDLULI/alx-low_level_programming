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

	printf("Size of int is %lu byte(s)\n", sizeof(int));
	printf("Size of long int is %lu byte(s)\n", sizeof(long int'));
	printf("Size of long long int is %lu byte(s)\n", sizeof(long long int));
	printf("Size of char is %lu byte(s)\n", sizeof(char));
	printf("Size of float is %lu byte(s)\n", sizeof(float));

	return (0);
}
