#include <stdio.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);

	if (i < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		return (0);
}

