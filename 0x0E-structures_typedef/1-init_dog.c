#ifndef INIT_DOG
#define INIT_DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog- function that initializes a variable struct
 * @d: struct variable
 * @name: name of dog
 * @age: dogs age
 * @owner: the name of the owner of the dog
 * Return: always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = (void *)malloc(sizeof(struct dog));


	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
