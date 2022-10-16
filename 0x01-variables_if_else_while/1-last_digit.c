#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-entry point of program
 *
 * return: return (0) if no errors, otherwise return non-zero
 */
int main(void)
{
	int n;
	int ldigit;
	
	srand(time(0));	
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
	{
	printf("Last digit of %d is: %d and is greater than 5\n", n, ldigit);
	}
	else if (ldigit == 0)
	{
	printf("Last digit of %d is: %d  and is 0\n", n, ldigit);
	}
	else if (ldigit < 6)
	{
	printf("Last digit of %d is: %d less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
