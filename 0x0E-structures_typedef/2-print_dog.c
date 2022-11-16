#ifndef PRINT_DOG 
#define PRINT_DOG

#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	d -> name = name;
	d -> age = age;
	d -> owner = owner;

	if (d == NULL)
	{
		printf("nil");
		return (0);
	}
}
#endif

