#include <stdio.h>
/**
 * main-entry point of program
 *
 * return:return zero(0) if no erros and non-zero otherwise
 */
int main(void)
{
	int a;
	long int b;
	long long int  c;
	char  d;
	float f;

	printf("Size of int is %lu byte(s)\n" , (unsigned long)sizeof('a'));
	printf("Size of long int is %lu byte(s)\n" , (unsigned long)sizeof('b'));
	printf("Size of long long int is %lu byte(s)\n" ,(unsigned long)sizeof('c'));
	printf("Size of char is %lu byte(s)\n" ,(unsigned long)sizeof('d'));
	printf("Size of float is %lu byte(s)\n" , (unsigned long)sizeof('f'));

	return(0);
}
