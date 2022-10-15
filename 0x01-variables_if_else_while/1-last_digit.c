nclude <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-entry point of program
 *
 * return: return (0) if no errors, otherwise return non-zero
 */
int main(void)
{
	int num
	int digit

	srand(time(0));	
	n = rand() - RAND_MAX /2;

	scanf("%d" ,&num);

	digit = num % 10;

	if (digit  > 5)
	{
		printf("Last digit of %d is: %d and is greater than (5)\n", num, digit);
	}	
	{if (digit == 0)
		printf("Last digit of %d is: %d  and is (0)\n", num, digit);
	}
	{if (digit < 6)
		printf("Last digit of %d is: %d less than (6) and not (0)\n", num, digit);
	}
	return (0);
}
